#ifndef FUNCTIONS
#define FUNCTIONS
#include <GL/glut.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "drawings.h"

GLfloat tx, ty = 0;
GLfloat win = 70;
GLfloat R = 1, G = 0, B = 0;
GLfloat pontuacao = 0.0;
GLfloat vidas = 5.0;
int numFigura;

void Inicializa(void){

	glClearColor(1.5f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	void glPointSize(GLfloat size);

}

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

    glTranslatef(-38.0f, 30.0f,0.0f);
    glRasterPos2f(0,0);
    DesenhaTexto(GLUT_BITMAP_9_BY_15,textoVidas);
    glPopMatrix();
}


void exibeCoordenada(float tx, float ty){

	float x = tx;
	float y = ty;

	printf("x: %0.2f ", x);
	printf("y: %0.2f \n", y);

}


bool colorMatch(GLfloat qR, GLfloat qG,GLfloat qB){
    if(qR == R && qG == G && qB == B){
        return true;
    }

    return false;
}

bool colisao(){

    if((x1 >= tx && x1 <= tx + 5) && y1 == ty + 5){

        return true;
    } else if((x1 <= tx && x1 >= tx - 5) && y1 == ty + 5){

        return true;
    }

    return false;
}

void figuras (){
    bool result = false;
	switch(numFigura){
		case 0:{
                quadrado0();
            bool result = colisao();
            if(result){
                if(colorMatch(q0R, q0G, q0B)){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q0O = 0;
            }else if(y1 == 0 - 6 &&  q0O == 1){
                q0O = 0;
                vidas--;
            }
          }
        break;
		case 1:{
            quadrado1();
            result = colisao();
            if(result){
                if(colorMatch(q1R, q1G, q1B)){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q1O = 0;
            }else if(y1 == 0 - 6 &&  q1O == 1){
                q1O = 0;
                vidas--;
            }
		   }
        break;
		case 2:{
            quadrado2();
            result = colisao();
            if(result){
                if(colorMatch(q2R, q2G, q2B)){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q2O = 0;
            }else if(y1 == 0 - 6 &&  q2O == 1){
                q2O = 0;
                vidas--;
            }
        }
        break;
		case 3: {
            quadrado3();
            result = colisao();
            if(result){
                if(colorMatch(q3R, q3G, q3B)){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q3O = 0;
            }else if(y1 == 0 - 6 &&  q3O == 1){
                q3O = 0;
                vidas--;
            }
        }
        break;
		case 4:  {
            quadrado4();
            result = colisao();
            if(result){
                if(colorMatch(q4R, q4G, q4B)){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q4O = 0;
            }else if(y1 == 0 - 6 &&  q4O == 1){
                q4O = 0;
                vidas--;
            }
        }
        break;
		case 5: {
            quadrado5();
            result = colisao();
            if(result){
                if(colorMatch(q5R, q5G, q5B)){
                    pontuacao++;
                }else {
                    vidas--;
                }
                q5O = 0;
            }else if(y1 == 0 - 6 &&  q5O == 1){
                q5O = 0;
                vidas--;
            }
        }
        break;

	}

}

void GerenciaTeclado(unsigned char key, int x, int y)
{
    switch (key) {
            case 'R':
            case 'r':// muda a cor da lata pra vermelho
                     R = 1;
                     G = 0;
                     B = 0;
                     break;
            case 'G':
            case 'g':// muda a cor da lata para verde
                     R = 0;
                     G = 1;
                     B = 0;
                     break;
            case 'B':
            case 'b':// muda a cor da lata para azul
                     R = 0;
                     G = 0;
                     B = 1;
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

    y1 -= ystep;
    glutPostRedisplay();
    glutTimerFunc(40,Timer, 1);


    if( y1<-40){
     	x1 = -70 + (rand() % 70); //varia a posição
        y1 = 40.0f;//posiçao fixa

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
		tx-=3;
		if ( tx < -win )
			tx = -win;
	}
	if(key == GLUT_KEY_RIGHT)
	{
		tx+=3;
		if ( tx > win )
			tx = win;
	}
	
	glutPostRedisplay();
}


void Desenha(void){

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_BLEND);                                   //Transparência
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	  //Transparência
	//glPushMatrix();
	//ponto();
	//glPopMatrix();
	addPontuacao();
	addVidas();
	glPushMatrix();
	//glTranslatef(tx,ty,0.0f);
	
	//lata de lixo
	glTranslatef(tx,ty,0.0f);
	contornoLataLixo();
	latalixo(R,G,B);
	sombraSimboloLataLixo();
	simboloLataLixo();
	luzLataLixo();
	sombraLataLixo();
	glPopMatrix();
	
	//banana
	glPushMatrix();
	glScalef(0.5f, 0.5f, 1.0f);
	banana();
	contornoBanana();
	luzBanana();
	sombraBanana();
	glPopMatrix();
	
	//garrafa
	glPushMatrix();
	glScalef(1.5f, 1.5f, 1.5f);
	glTranslatef(10.0f,0.0f,0.0f);
	garrafa();
	contornoGarrafa();
	glPopMatrix();
	
	//papel
	glPushMatrix();
	glTranslatef(25.0f,-1.5f,0.0f);
	glScalef(0.6f, 0.6f, 0.6f);
	papelContorno();
	papel();
	papelLinhas();
	papelDetalhes();
	sombraPapel();
	glPopMatrix();
	
	//taca
	glPushMatrix();
	glScalef(0.2f, 0.2f, 0.2f);
	glTranslatef(-90.0f,0.0f,0.0f);
	taca();
	contornoTaca();
	glPopMatrix();
	
	//latinha
	glPushMatrix();
	glScalef(0.2f, 0.2f, 0.2f);
	glTranslatef(-60.0f,0.0f,0.0f);
	latinha();
	glPopMatrix();

	
	//bateria
	glPushMatrix();
	glTranslatef(35.0f,0.0f,0.0f);
	glScalef(0.7f, 0.7f, 0.7f);
	bateria();
	glPopMatrix();
	
	//figuras
	glPushMatrix();
	figuras();
    glPopMatrix();

	glFlush();

}



#endif
