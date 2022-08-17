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
GLsizei rsize = 1;   

// Tamanho do incremento nas direções x e y 
// (número de pixels para se mover a cada
// intervalo de tempo)
GLfloat xstep = 1.0f;
GLfloat ystep = 1.0f;

void quadrado(){
	 glColor3f(1.0f, 0.0f, 0.0f);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize); 
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);               
     glEnd();
}

void quadrado2(){
	 glColor3f(1.0f, 1.0f, 0.0f);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize); 
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);               
     glEnd();
}

void quadrado3(){
	 glColor3f(0.0f, 0.0f, 0.0f);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize); 
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);               
     glEnd();
}

void quadrado4(){
	 glColor3f(0.0f, 0.0f, 1.0f);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize); 
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);               
     glEnd();
}

void quadrado5(){
	 glColor3f(0.0f, 1.0f, 1.0f);
     glBegin(GL_QUADS);
               glVertex2i(x1,y1+rsize); 
               glVertex2i(x1,y1);
               glVertex2i(x1+rsize,y1);
               glVertex2i(x1+rsize,y1+rsize);               
     glEnd();
}

void quadrado6(){
	 glColor3f(0.0f, 1.0f, 0.0f);
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
		glVertex2f(5.5f,3.5f);
		glVertex2f(5.5f,4.5f); 
		glVertex2f(-5.5f,4.5f); 
		glVertex2f(-5.5f,3.5f); 
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
