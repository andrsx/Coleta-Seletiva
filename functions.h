#ifndef FUNCTIONS
#define FUNCTIONS
#include <GL/glut.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include<stb_image.h>
#include "drawings.h"

GLfloat tx, ty = 0;
GLfloat win = 70;

void Inicializa(void){
	
	glClearColor(1.5f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
	void glPointSize(GLfloat size);
	
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
	
	//glPushMatrix();
	//glTranslatef(tx,ty,0.0f);	
	//ponto();
	//latalixo();
	//glPopMatrix();
	
	glPushMatrix();
	//glTranslatef(5.0f,5.0f,0.0f);	
	contornolatalixo();
	latalixo();
	glPopMatrix();
	
	
	glFlush();
	
}

#endif