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
int numFigura;

void Inicializa(void){
	
	glClearColor(1.5f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	void glPointSize(GLfloat size);
	
}

void figuras (){
	switch(numFigura){
		case 0: quadrado();
			break;
		case 1: quadrado2();
			break;
		case 2: quadrado3();
			break;
		case 3: quadrado4();
			break;
		case 4: quadrado5();
			break;
		case 5: quadrado6();
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

void Timer(int value)
{    
	
    y1 -= ystep;   
    glutPostRedisplay();
    glutTimerFunc(20,Timer, 1);
    
 
    if( y1<-40){
     	x1 = -20 + (rand() % 30); //varia a posição
        y1 = 40.0f;//posiçao fixa
        
        numFigura = rand()%6;
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

void exibeCoordenada(float tx, float ty){
	
	float x = tx;
	float y = ty;
	
	printf("x: %0.2f ", x);
	printf("y: %0.2f \n", y);

}

void TeclasEspeciais(int key, int x, int y)
{
	
	if(key == GLUT_KEY_LEFT)
	{
		tx-=1;
		if ( tx < -win )
			tx = -win; 
	}
	if(key == GLUT_KEY_RIGHT)
	{
		tx+=1;
		if ( tx > win )
			tx = win; 
	}     
	if(key == GLUT_KEY_UP)
	{
		ty+=1;
		if ( ty > win )
			ty = win; 
	}
	if(key == GLUT_KEY_DOWN)
	{
		ty-=1;
		if ( ty < -win )
			ty = -win; 
	}
	
	exibeCoordenada(tx, ty);

	glutPostRedisplay();
}

void Desenha(void){

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_BLEND);                                   //Transparência
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	  //Transparência
	//glPushMatrix();
	//glTranslatef(tx,ty,0.0f);	
	//ponto();
	//latalixo();
	//glPopMatrix();
	
	glPushMatrix();
	glTranslatef(tx,ty,0.0f);	
	contornoLataLixo();
	latalixo(R,G,B);
	sombraSimboloLataLixo();
	simboloLataLixo();
	luzLataLixo();
	sombraLataLixo();
	glPopMatrix();
	glPushMatrix();
	figuras();
    glPopMatrix();
	
	glFlush();
	
}

#endif
