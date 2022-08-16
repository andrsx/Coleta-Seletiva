#ifndef DRAWINGS
#define DRAWINGS
#include <GL/glut.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include "drawings.h"

void ponto(){
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
		glVertex2f(0.0f,0.0f);
	glEnd();
}

void latalixo(){
	glColor3f(1.0f, 0.0f, 0.0f);
	
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

void contornolatalixo(){
	glColor3f(0.0f, 0.0f, 0.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.3f,3.5f);
		glVertex2f(5.3f,4.3f); 
		glVertex2f(-5.3f,4.3f); 
		glVertex2f(-5.3f,3.5f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(5.0f,2.5f);
		glVertex2f(5.0f,3.8f); 
		glVertex2f(-5.0f,3.8f); 
		glVertex2f(-5.0f,2.5f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(4.7f,0.5f);
		glVertex2f(4.7f,2.8f); 
		glVertex2f(-4.7f,2.8f); 
		glVertex2f(-4.7f,0.5f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(4.4f,-2.5f);
		glVertex2f(4.4f,0.8f); 
		glVertex2f(-4.4f,0.8f); 
		glVertex2f(-4.4f,-2.5f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(4.1f,-4.5f);
		glVertex2f(4.1f,-2.2f); 
		glVertex2f(-4.1f,-2.2f); 
		glVertex2f(-4.1f,-4.5f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(3.8f,-5.0f);
		glVertex2f(3.8f,-4.2f); 
		glVertex2f(-3.8f,-4.2f); 
		glVertex2f(-3.8f,-5.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(3.5f,-5.5f);
		glVertex2f(3.5f,-4.7f); 
		glVertex2f(-3.5f,-4.7f); 
		glVertex2f(-3.5f,-5.5f); 
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex2f(3.1f,-6.3f);
		glVertex2f(3.1f,-5.2f); 
		glVertex2f(-3.1f,-5.2f); 
		glVertex2f(-3.1f,-6.3f); 
	glEnd();
	
}


#endif
