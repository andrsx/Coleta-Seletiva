#ifndef DRAWINGS
#define DRAWINGS
#include <GL/glut.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include "drawings.h"


// Tamanho e posição inicial do quadrado
GLfloat x1 = 0.0f;
GLfloat y1 = 40.0f;
char textoPontuacao[30];
char textoVidas[30];
GLsizei rsize = 1;
GLfloat q0R = 1, q0G = 0, q0B = 0, q0O = 1;
GLfloat q1R = 1, q1G = 1, q1B = 0, q1O = 1;
GLfloat q2R = 0, q2G = 0, q2B = 0, q2O = 1;
GLfloat q3R = 0, q3G = 0, q3B = 1, q3O = 1;
GLfloat q4R = 0, q4G = 1, q4B = 1, q4O = 1;
GLfloat q5R = 0, q5G = 1, q5B = 0, q5O = 1;



// Tamanho do incremento nas direções x e y
// (número de pixels para se mover a cada
// intervalo de tempo)
GLfloat xstep = 1.0f;
GLfloat ystep = 1.0f;

void DesenhaTexto(void *font, char *string) // função usada para mostrar texto na tela
{
	// Exibe caractere a caractere
	while(*string)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*string++);
}

void quadrado0(){

     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

     glColor4f(q0R, q0G, q0B, q0O);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize);
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);
     glEnd();

//     printf("x1: %0.1f\n", x1);
  //   printf("y1: %0.1f\n", y1);

}

void quadrado1(){
    glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	 glColor4f(q1R, q1G, q2B, q1O);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize);
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);
     glEnd();
}

void quadrado2(){
     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	 glColor4f(q2R, q2G, q2B, q2O);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize);
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);
     glEnd();
}

void quadrado3(){
     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	 glColor4f(q3R, q3G, q3B, q3O);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize);
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);
     glEnd();
}

void quadrado4(){
     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	 glColor4f(q4R, q4G, q4B, q4O);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize);
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);
     glEnd();
}

void quadrado5(){
     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	 glColor4f(q5R, q5G, q5B, q5O);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize);
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);
     glEnd();
}

void ponto(){
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
		glVertex2f(0.0f,0.0f);
	glEnd();
}

void latalixo(GLfloat r, GLfloat g, GLfloat b){

	GLfloat R = r;
	GLfloat G = g;
	GLfloat B = b;

	glColor3f(R, G, B);

	glBegin(GL_QUADS);
		glVertex2f(5.0f,3.5f);
		glVertex2f(5.0f,4.0f);
		glVertex2f(-5.0f,4.0f);
		glVertex2f(-5.0f,3.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.7f,2.5f);
		glVertex2f(4.7f,3.5f);
		glVertex2f(-4.7f,3.5f);
		glVertex2f(-4.7f,2.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.4f,0.5f);
		glVertex2f(4.4f,2.5f);
		glVertex2f(-4.4f,2.5f);
		glVertex2f(-4.4f,0.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.1f,-2.5f);
		glVertex2f(4.1f,0.5f);
		glVertex2f(-4.1f,0.5f);
		glVertex2f(-4.1f,-2.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.8f,-4.5f);
		glVertex2f(3.8f,-2.5f);
		glVertex2f(-3.8f,-2.5f);
		glVertex2f(-3.8f,-4.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.5f,-5.0f);
		glVertex2f(3.5f,-4.5f);
		glVertex2f(-3.5f,-4.5f);
		glVertex2f(-3.5f,-5.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.2f,-5.5f);
		glVertex2f(3.2f,-5.0f);
		glVertex2f(-3.2f,-5.0f);
		glVertex2f(-3.2f,-5.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(2.8f,-6.0f);
		glVertex2f(2.8f,-5.5f);
		glVertex2f(-2.8f,-5.5f);
		glVertex2f(-2.8f,-6.0f);
	glEnd();

}

void simboloLataLixo(){
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
		//pt1
		glVertex2f(0.0f,0.5f);
		glVertex2f(0.5f,0.25f);
		glVertex2f(1.0f,-0.2f);
		//pt2
		glVertex2f(-0.5f,0.25f);
		glVertex2f(-1.0f,-0.2f);
		//pt3
		glVertex2f(1.5f,-1.2f);
		glVertex2f(1.8f,-1.55f);
		glVertex2f(1.8f,-1.80f);
		//pt4
		glVertex2f(1.5f,-2.2f);
		glVertex2f(1.2f,-2.2f);
		glVertex2f(1.0f,-2.2f);
		glVertex2f(0.5f,-2.2f);
		//pt5
		glVertex2f(-1.5f,-1.2f);
		glVertex2f(-1.8f,-1.55f);
		glVertex2f(-1.8f,-1.80f);
		//pt6
		glVertex2f(-1.5f,-2.2f);
		glVertex2f(-1.2f,-2.2f);
		glVertex2f(-1.0f,-2.2f);
		glVertex2f(-0.5f,-2.2f);
	glEnd();
}

void sombraSimboloLataLixo(){

	glColor4f(0.0f, 0.0f, 0.0f, 0.15f);
	glPointSize(5.0f);
	glBegin(GL_QUADS);
		//pt1
		glVertex2f(2.0f,-3.0f);
		glVertex2f(2.0f,-2.42f);
		glVertex2f(0.2f,-2.42f);
		glVertex2f(0.2f,-3.0f);
		//pt2
		glVertex2f(-2.0f,-3.0f);
		glVertex2f(-2.0f,-2.42f);
		glVertex2f(-0.2f,-2.42f);
		glVertex2f(-0.2f,-3.0f);
	glEnd();

}

void contornoLataLixo(){

    glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_QUADS);
		glVertex2f(5.5f, 4.5f); // top left
		glVertex2f(-5.5f,4.5f); // top right
		glVertex2f(-5.5f,3.5f); // bottom right
		glVertex2f(5.5f,3.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(5.2f,2.5f);
		glVertex2f(5.2f,3.8f);
		glVertex2f(-5.2f,3.8f);
		glVertex2f(-5.2f,2.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.9f,0.5f);
		glVertex2f(4.9f,2.8f);
		glVertex2f(-4.9f,2.8f);
		glVertex2f(-4.9f,0.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.7f,-2.5f);
		glVertex2f(4.7f,0.8f);
		glVertex2f(-4.7f,0.8f);
		glVertex2f(-4.7f,-2.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.3f,-4.5f);
		glVertex2f(4.3f,-2.2f);
		glVertex2f(-4.3f,-2.2f);
		glVertex2f(-4.3f,-4.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(4.2f,-5.0f);
		glVertex2f(4.2f,-4.2f);
		glVertex2f(-4.2f,-4.2f);
		glVertex2f(-4.2f,-5.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.8f,-5.7f);
		glVertex2f(3.8f,-4.2f);
		glVertex2f(-3.8f,-4.2f);
		glVertex2f(-3.8f,-5.7f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.2f,-6.5f);
		glVertex2f(3.2f,-5.2f);
		glVertex2f(-3.2f,-5.2f);
		glVertex2f(-3.2f,-6.5f);
	glEnd();

}

void luzLataLixo(){
	glColor4f(1.0f, 1.0f, 1.0f, 0.3f);

	glBegin(GL_QUADS);
		glVertex2f(5.0f,3.5f);
		glVertex2f(5.0f,4.0f);
		glVertex2f(-5.0f,4.0f);
		glVertex2f(-5.0f,3.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(-4.0f,2.5f);
		glVertex2f(-4.0f,3.5f);
		glVertex2f(-4.7f,3.5f);
		glVertex2f(-4.7f,2.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(-3.8f,0.5f);
		glVertex2f(-3.8f,2.5f);
		glVertex2f(-4.4f,2.5f);
		glVertex2f(-4.4f,0.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(-3.4f,-2.5f);
		glVertex2f(-3.4f,0.5f);
		glVertex2f(-4.1f,0.5f);
		glVertex2f(-4.1f,-2.5f);
	glEnd();

}

void sombraLataLixo(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.1f);

	glBegin(GL_QUADS);
		glVertex2f(4.1f,-2.5f);
		glVertex2f(4.1f,0.5f);
		glVertex2f(3.4f,0.5f);
		glVertex2f(3.4f,-2.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.8f,-4.5f);
		glVertex2f(3.8f,-2.5f);
		glVertex2f(3.1f,-2.5f);
		glVertex2f(3.1f,-4.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.5f,-5.0f);
		glVertex2f(3.5f,-4.5f);
		glVertex2f(2.8f,-4.5f);
		glVertex2f(2.8f,-5.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(3.2f,-5.5f);
		glVertex2f(3.2f,-5.0f);
		glVertex2f(2.5f,-5.0f);
		glVertex2f(2.5f,-5.5f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex2f(2.8f,-6.0f);
		glVertex2f(2.8f,-5.5f);
		glVertex2f(2.1f,-5.5f);
		glVertex2f(2.1f,-6.0f);
	glEnd();

}

#endif
