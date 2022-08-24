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
GLfloat R = 0, G = 0, B = 1;
GLfloat pontuacao = 0.0;
GLfloat vidas = 5.0;
int numFigura;
int lixeiraId = 0;

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
    if(R == 0.128f && G == 0.128f && B ==0.128f)
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
        R = 0.128f;
        G = 0.128f;
        B = 0.128f;
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

     if(R == 0.128f && G == 0.128f && B ==0.128f){
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
                vidas = 0;
            break;
            case 'A':
            case 'a':// Muda cor da lixeira para a anterior
                lixeiraCorAnterior();
                setLixeiraId();
            break;

            case 'D':
            case 'd':// Muda cor da lixeira para próxima
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
	glEnable(GL_BLEND);                                   //Transparência
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	  //Transparência

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



#endif
