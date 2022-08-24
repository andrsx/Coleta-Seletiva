#ifndef FUNCTIONS
#define FUNCTIONS
#include <GL/glut.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "drawings.h"

GLfloat tx, ty = 0;
GLfloat win = 70;
GLfloat R = 0, G = 0, B = 1;
GLfloat pontuacao = 0.0;
GLfloat vidas = 5.0;
int numFigura;
int lixeiraId = 0, animacao = 0;
GLint estado = 0;

// #####
GLint win_width, win_height;
GLuint texture_id[1];
GLuint DataPos, imageSize;
GLsizei Width,Height;
//GLfloat win = 25;
GLfloat xf, yf,winw, aspecto;

void chamaDesenha();
void SobreJogo();
void Comandos();

void ModifyWindownsSize(GLsizei w, GLsizei h) {
    if(h == 0) h = 1;

    win_width = w;
    win_height = h;

    aspecto = (float) win_width/win_height;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D (-winw*aspecto, winw*aspecto, -winw, winw);
}

/* Função para carregar as imagens em BMP */

void LoadBMP(char *filename) {
    #define SAIR {fclose(fp_arquivo); return ;}
    #define CTOI(C) (*(int*)&C)

    GLubyte *image;
    GLubyte Header[0x54];

    FILE * fp_arquivo = fopen(filename,"rb");

    if (fread(Header,1,0x36,fp_arquivo)!=0x36)
    SAIR;

    Width = CTOI(Header[0x12]);
    Height = CTOI(Header[0x16]);
    ( CTOI(Header[0x0A]) == 0 ) ? ( DataPos=0x36 ) : ( DataPos = CTOI(Header[0x0A]) );
    imageSize=Width*Height*3;

    image = (GLubyte *) malloc ( imageSize );
    int retorno;
    retorno = fread(image,1,imageSize,fp_arquivo);

    int t, i;
    for ( i = 0; i < imageSize; i += 3 ) {
        t = image[i];
        image[i] = image[i+2];
        image[i+2] = t;
    }

    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
    glTexEnvf ( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, Width, Height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
    fclose (fp_arquivo);
    free (image);
    return ;
}

void T_Quads(GLuint *t_quad, int i, int x, int y, int w, int h) {
    glBindTexture ( GL_TEXTURE_2D, t_quad[i] );
    glBegin(GL_QUADS);

    glTexCoord2f(0.0f, 0.0f);  glVertex2f(x, y);
    glTexCoord2f(1.0f, 0.0f);  glVertex2f(x+w, y);
    glTexCoord2f(1.0f, 1.0f);  glVertex2f(x+w, y+h);
    glTexCoord2f(0.0f, 1.0f);  glVertex2f(x, y+h);
    glEnd();
}

//Desenho da tela inicial
void Draw(void) {

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glViewport(0,0,win_width,win_height);
    glEnable (GL_TEXTURE_2D);
    gluOrtho2D (0,win_width, 0, win_height);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glGenTextures ( 1, texture_id );
    glBindTexture ( GL_TEXTURE_2D, texture_id[0] );

    LoadBMP("imgs/telaInicial.bmp");
    T_Quads( texture_id, 0, 0, 0, win_width, win_height);

    glutSwapBuffers();
}

//Desenho da tela "Sobre o Jogo"
void Draw2(void) {

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glViewport(0,0,win_width,win_height);
    glEnable (GL_TEXTURE_2D);
    gluOrtho2D (0,win_width, 0, win_height);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glGenTextures ( 1, texture_id );
    glBindTexture ( GL_TEXTURE_2D, texture_id[0] );

    LoadBMP("imgs/sobreOJogo.bmp");
    T_Quads( texture_id, 0, 0, 0, win_width, win_height);

    glutSwapBuffers();
}

//Comandos
void Draw3(void) {

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glViewport(0,0,win_width,win_height);
    glEnable (GL_TEXTURE_2D);
    gluOrtho2D (0,win_width, 0, win_height);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glGenTextures ( 1, texture_id );
    glBindTexture ( GL_TEXTURE_2D, texture_id[0] );

    LoadBMP("imgs/comandos.bmp");
    T_Quads( texture_id, 0, 0, 0, win_width, win_height);

    glutSwapBuffers();
}

/* FIM DAS FUNÇÕES PARA IMPORTAR BMP*/

void MouseManager(int button, int state, int x, int y) {

    glutPostRedisplay();
}

void SpecialKeys(int key, int x, int y){

    glutPostRedisplay();
}

// Menuzinho

void menu(int key1)
{
	switch(key1)
	{
		case 1: //Iniciar
			chamaDesenha();
			break;

		case 2: //Sobre o Jogo
		    SobreJogo();
			break;

		case 3: //Comandos
			Comandos();
			break;
		case 4: exit(0);
		    break;
	}
}

// Menuzinho parte 2

void menuSystem()
{
    glutCreateMenu(menu);
    glutAddMenuEntry("Iniciar",1);
    glutAddMenuEntry("Sobre o Jogo",2);
    glutAddMenuEntry("Comandos",3);
    glutAddMenuEntry("Sair",4);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void GerenciaMouse(int button, int state, int x, int y)
{
    if (button == GLUT_RIGHT_BUTTON)
         if (state == GLUT_DOWN)
            menuSystem();

    glutPostRedisplay();
}

/* Agora é que o bicho vai pegar */

void Inicializa(void){

	glClearColor(1.5f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	void glPointSize(GLfloat size);

}

void iniciando()
{
	glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);
	glutInitWindowPosition(5,5);
	glutInitWindowSize(1920,1080);
	glutCreateWindow("Coleta Seletiva & Interativa");
	glutReshapeFunc(ModifyWindownsSize);
	glutDisplayFunc(Draw);
	glutMouseFunc(MouseManager);
	glutSpecialFunc(SpecialKeys);
	glutMouseFunc(GerenciaMouse);
	Inicializa();
	glutMainLoop();
}

void Teclado( unsigned char key, int x, int y)
{

	switch(key)
	{
		case 27:
			exit(0);
			break;
		case 'I':
		case 'i':
			iniciando();
			break;
		}

	glutPostRedisplay();
}


/* ###### Continuar depois da função Desenha() ###### */

/*
void Inicializa(void){

	glClearColor(1.5f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	void glPointSize(GLfloat size);

}
*/

void addPontuacao()
{
    glColor3f(0,0,0);

	glPushMatrix();
    glColor3f(0.0,0.0,0.0);

	sprintf(textoPontuacao, "Pontuacao: %.1f", pontuacao);

    glTranslatef(-38.0f, 36.0f,0.0f);
    glRasterPos2f(0,0);
    DesenhaTexto(GLUT_BITMAP_9_BY_15,textoPontuacao);
    glPopMatrix();
}

void addVidas(){
    glColor3f(0,0,0);

	glPushMatrix();
    glColor3f(0.0,0.0,0.0);

	sprintf(textoVidas, "Vidas: %.1f", vidas);

    glTranslatef(-38.0f, 33.0f,0.0f);
    glRasterPos2f(0,0);
    DesenhaTexto(GLUT_BITMAP_9_BY_15,textoVidas);
    glPopMatrix();
}


void exibeCoordenada(float tx, float y1){

	float x = tx;
	float y = y1;

	printf("x: %0.2f ", x);
	printf("y1: %0.2f \n", y);

}


void GameOver(){
	if (vidas == 0.0){
	glColor3f(0,0,0);
	glPushMatrix();
    glColor3f(0.0,0.0,0.0);

	sprintf(textoGameOver, "game over SEU LIXO rsrrs entendeu a referencia?", vidas);
    glTranslatef(-25.0f, 0.0f,0.0f);
    glRasterPos2f(0,0);
    DesenhaTexto(GLUT_BITMAP_9_BY_15,textoGameOver);
    glPopMatrix();
    y1 = 50.0f;
}
}
bool colisao(){

    if((x1 >= tx && x1 <= tx + 5) && y1 == -20 ){

        return true;
    } else if((x1 <= tx && x1 >= tx - 5) && y1 == -20 ){

        return true;
    }

    return false;
}

void figuras (){
    bool result = false;
	switch(numFigura){
		case 0:{
              papel();
            bool result = colisao();
            if(result){
                if(lixeiraId == lixoId){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q0O = 0;
            }else if(y1 == - 20 &&  q0O == 1){
                q0O = 0;
                vidas--;
            }
          }
        break;
		case 1:{
            garrafa();
            result = colisao();
            if(result){
                if(lixeiraId == lixoId){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q1O = 0;
            }else if(y1 == -20 &&  q1O == 1){
                q1O = 0;
                vidas--;
            }
		   }
        break;
		case 2:{
            taca();
            result = colisao();
            if(result){
                if(lixeiraId == lixoId){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q2O = 0;
            }else if(y1 == -20 &&  q2O == 1){
                q2O = 0;
                vidas--;
            }
        }
        break;
		case 3: {
            latinha();
            result = colisao();
            if(result){
                if(lixeiraId == lixoId){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q3O = 0;
            }else if(y1 == -20 &&  q3O == 1){
                q3O = 0;
                vidas--;
            }
        }
        break;
		case 4:  {
            banana();
            result = colisao();
            if(result){
                if(lixeiraId == lixoId){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q4O = 0;
            }else if(y1 == -20 &&  q4O == 1){
                q4O = 0;
                vidas--;
            }
        }
        break;
		case 5: {
            bateria();
            result = colisao();
            if(result){
                if(lixeiraId == lixoId){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q5O = 0;
            }else if(y1 == -20 &&  q5O == 1){
                q5O = 0;
                vidas--;
            }
        }
        break;

	}
GameOver();
}

void setLixeiraId(){
    if(R == 0 && G == 0 && B == 1)
        lixeiraId = 0;
    if(R == 1 && G == 0 && B == 0)
        lixeiraId = 1;
    if(R == 0 && G == 1 && B == 0)
        lixeiraId = 2;
    if(R == 1 && G == 1 && B == 0)
        lixeiraId = 3;
    if(R == 0.75f && G == 0.54f && B == 0.33f)
        lixeiraId = 4;
    if(R == 0.5f && G == 0.5f && B ==0.5f)
        lixeiraId = 5;
}

void lixeiraProximaCor(){
    if(R == 0 && G == 0 && B == 1){
        // Azul -> Vermelho
        R = 1;
        G = 0;
        B = 0;
        return;
    }

    if(R == 1 && G == 0 && B == 0){
        // Vermelho -> Verde
        R = 0;
        G = 1;
        B = 0;
        return;
    }

     if(R == 0 && G == 1 && B == 0){
        // Verde -> Amarelo
        R = 1;
        G = 1;
        B = 0;
        return;
    }

     if(R == 1 && G == 1 && B == 0){
        // Amarelo -> Marrom
        R =  0.75f;
        G =  0.54f;
        B = 0.33f;
        return;
    }

    printf("R = %d, G = %d, B = %d", R, G, B);

     if(R == 0.75f && G == 0.54f && B == 0.33f){
       // Marrom -> Cinza
        R = 0.5f;
        G = 0.5f;
        B = 0.5f;
        return;
    }

}

void lixeiraCorAnterior(){

    if(R == 1 && G == 0 && B == 0){
        // Vermelho -> Azul
        R = 0;
        G = 0;
        B = 1;
        return;
    }

     if(R == 0 && G == 1 && B == 0){
        // Verde -> Vermelho
        R = 1;
        G = 0;
        B = 0;
        return;
    }

     if(R == 1 && G == 1 && B == 0){
        // Amarelo -> Verde
        R =  0;
        G =  1;
        B = 0;
        return;
    }

     if(R == 0.75f && G == 0.54f && B == 0.33f){
       // Marrom -> Amarelo
        R = 1;
        G = 1;
        B = 0;
        return;
    }

     if(R == 0.5f && G == 0.5f && B ==0.5f){
       // Cinza -> Marrom
        R =  0.75f;
        G = 0.54f;
        B = 0.33f;
        return;
    }
}

void GerenciaTeclado(unsigned char key, int x, int y)
{
    switch (key) {
            case 'R':
            case 'r':
                pontuacao = 0;
                vidas = 5;
				y1= 45.0f;
				y1--;
            break;
            case 'A':
            case 'a':// Muda cor da lixeira para a anterior
                lixeiraCorAnterior();
                setLixeiraId();
            break;

            case 'D':
            case 'd':// Muda cor da lixeira para prÃ³xima
                lixeiraProximaCor();
                setLixeiraId();
            break;
    }
    glutPostRedisplay();
}

void habilitarCorFugura(){
    switch(numFigura){
    case 0:
        q0O = 1;
    break;
    case 1:
        q1O = 1;
    break;
    case 2:
        q2O = 1;
    break;
    case 3:
        q3O = 1;
    break;
    case 4:
        q4O = 1;
    break;
    case 5:
        q5O = 1;
    break;
    }
}

void Timer(int value){

    glutPostRedisplay();
    glutTimerFunc(200,Timer, 1);


    if( y1<-20){
     	x1 = -70 + (rand() % 70); //varia a posição
        y1 = 40.0f;//posiÃ§ao fixa

        numFigura = rand()%6;
        habilitarCorFugura();
     }
}

void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{

	 GLsizei largura, altura;

	if(h == 0) h = 1;

	largura = w;
	altura = h;

	glViewport(0, 0, largura, altura);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (largura <= altura)
		gluOrtho2D (-40.0f, 40.0f, -40.0f*altura/largura, 40.0f*altura/largura);
	else
		gluOrtho2D (-40.0f*largura/altura, 40.0f*largura/altura, -40.0f, 40.0f);
}

void TeclasEspeciais(int key, int x, int y)
{

float p = tx;

	if(key == GLUT_KEY_LEFT)
	{
		tx-=4;
		if ( tx < -win )
			tx = -win;
	}
	if(key == GLUT_KEY_RIGHT)
	{
		tx+=4;
		if ( tx > win )
			tx = win;
	}

	exibeCoordenada(tx,ty);
	glutPostRedisplay();
}


void Desenha(void){

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_BLEND);                                   //TransparÃªncia
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	  //TransparÃªncia

	cenario();

	//glPushMatrix();
	//glTranslatef(tx,ty,0.0f);
	//ponto();
	//glPopMatrix();
	addPontuacao();
	addVidas();
	glPushMatrix();
	//glTranslatef(tx,ty,0.0f);

	//lata de lixo
	glTranslatef(tx,-22.0f,0.0f);
	contornoLataLixo();
	latalixo(R,G,B);
	sombraSimboloLataLixo();
	simboloLataLixo();
	luzLataLixo();
	sombraLataLixo();
	glPopMatrix();

//	//banana
//	glPushMatrix();
//	glScalef(0.5f, 0.5f, 1.0f);
//	banana();
//	contornoBanana();
//	luzBanana();
//	sombraBanana();
//	glPopMatrix();

	//garrafa
//	glPushMatrix();
//	glScalef(1.5f, 1.5f, 1.5f);
//	glTranslatef(10.0f,0.0f,0.0f);
//	garrafa();
//	contornoGarrafa();
//	glPopMatrix();

	//papel
//	glPushMatrix();
//	glTranslatef(25.0f,-1.5f,0.0f);
//	glScalef(0.6f, 0.6f, 0.6f);
//	papelContorno();
//	papel();
//	papelLinhas();
//	papelDetalhes();
//	sombraPapel();
//	glPopMatrix();

	//taca
//	glPushMatrix();
//	glScalef(0.2f, 0.2f, 0.2f);
//	glTranslatef(-90.0f,0.0f,0.0f);
//	taca();
//	contornoTaca();
//	glPopMatrix();

	//latinha
//	glPushMatrix();
//	glScalef(0.2f, 0.2f, 0.2f);
//	glTranslatef(-60.0f,0.0f,0.0f);
//	latinha();
//	glPopMatrix();


	//bateria
//	glPushMatrix();
//	glTranslatef(35.0f,0.0f,0.0f);
//	glScalef(0.7f, 0.7f, 0.7f);
//	bateria();
//	glPopMatrix();

	//figuras
	glPushMatrix();
	figuras();
    glPopMatrix();

	glFlush();

}

void chamaDesenha(){
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,600);
	glutCreateWindow("Coleta Seletiva e Interativa");
	glutDisplayFunc(Desenha); //Aqui
	glutReshapeFunc(AlteraTamanhoJanela);
	glutTimerFunc(33, Timer, 1);
	Inicializa();
	glutSpecialFunc(TeclasEspeciais);
	glutKeyboardFunc(GerenciaTeclado);
	//glMatrixMode(GL_MODELVIEW);
	//glutInitWindowPosition(5,5);

	//glLoadIdentity();


	//glutReshapeFunc(AlteraTamanhoJanela);
	//glutKeyboardFunc (Teclado);
	//Inicializa();
	//glutMainLoop();
}

 void SobreJogo()
{
	glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);
	glutInitWindowPosition(5,5);
	glutInitWindowSize(1920,1080);
	glutCreateWindow("Sobre o Jogo");
	glutDisplayFunc(Draw2);
	glutReshapeFunc(ModifyWindownsSize);
	glutMouseFunc(MouseManager);
	glutSpecialFunc(SpecialKeys);
	//glutTimerFunc(150, Anima, 1);
	glutKeyboardFunc (Teclado);
	glutMainLoop();
}

void Comandos()
{
	glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);
	glutInitWindowPosition(5,5);
	glutInitWindowSize(1920,1080);
	glutCreateWindow("Sobre o Jogo");
	glutDisplayFunc(Draw3);
	glutReshapeFunc(ModifyWindownsSize);
	glutMouseFunc(MouseManager);
	glutSpecialFunc(SpecialKeys);
	//glutTimerFunc(150, Anima, 1);
	glutKeyboardFunc (Teclado);
	glutMainLoop();
}

#endif
