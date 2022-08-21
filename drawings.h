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

/* -----------------------------*/
/* ------ LATA DE LIXO  ------- */
/* -----------------------------*/

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

/* -----------------------------*/
/* ---------- BANANA  --------- */
/* -----------------------------*/

void banana(){
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
       	
		//banana parte1
       	glVertex2f(0.0f,1.5f);
        glVertex2f(0.0f,2.5f);
        glVertex2f(-0.5f,2.5f);
        glVertex2f(-0.5f,1.5f);
		   
		//banana parte2
        glVertex2f(0.0f,-2.5f);
        glVertex2f(0.0f,1.5f);
        glVertex2f(-1.5f,1.5f);
        glVertex2f(-1.5f,-2.5f);
        
        //banana2 parte3
        glVertex2f(-1.0f,-3.0f);
        glVertex2f(-1.0f,-2.5f);
        glVertex2f(-1.5f,-2.5f);
        glVertex2f(-1.5f,-3.0f);
        
        //banana parte4
        glVertex2f(-1.5f,-3.5f);
        glVertex2f(-1.5f,0.5f);
        glVertex2f(-2.0f,0.5f);
        glVertex2f(-2.0f,-3.5f);
        
        //banana parte5
        glVertex2f(-2.0f,-4.0f);
        glVertex2f(-2.0f,-0.5f);
        glVertex2f(-3.0f,-0.5f);
        glVertex2f(-3.0f,-4.0f);
        
        //banana parte6
        glVertex2f(-3.0f,-4.5f);
        glVertex2f(-3.0f,-1.0f);
        glVertex2f(-5.0f,-1.0f);
        glVertex2f(-5.0f,-4.5f);
        
        //banana parte7
        glVertex2f(-5.0f,-1.5f);
        glVertex2f(-5.0f,-1.0f);
        glVertex2f(-6.0f,-1.0f);
        glVertex2f(-6.0f,-1.5f);
        
        //banana parte8
        glVertex2f(-3.0f,-4.5f);
        glVertex2f(-3.0f,-1.0f);
        glVertex2f(-5.0f,-1.0f);
        glVertex2f(-5.0f,-4.5f);
        
        //banana parte9
        glVertex2f(-5.0f,-4.5f);
        glVertex2f(-5.0f,-3.0f);
        glVertex2f(-5.5f,-3.0f);
        glVertex2f(-5.5f,-4.5f);
        
        //banana parte10
        glVertex2f(-5.5f,-4.5f);
        glVertex2f(-5.5f,-3.5f);
        glVertex2f(-7.5f,-3.5f);
        glVertex2f(-7.5f,-4.5f);
        
        //banana parte11
        glVertex2f(0.5f,-2.5f);
        glVertex2f(0.5f,3.5f);
        glVertex2f(0.0f,3.5f);
        glVertex2f(0.0f,-2.5f);
        
        //banana parte12
        glVertex2f(1.0f,-3.5f);
        glVertex2f(1.0f,3.0f);
        glVertex2f(0.5f,3.0f);
        glVertex2f(0.5f,-3.5f);
        
        //banana parte14
        glVertex2f(1.5f,-4.0f);
        glVertex2f(1.5f,2.0f);
        glVertex2f(1.0f,2.0f);
        glVertex2f(1.0f,-4.0f);
        
        //banana parte15
        glVertex2f(2.0f,-4.0f);
        glVertex2f(2.0f,1.0f);
        glVertex2f(1.5f,1.0f);
        glVertex2f(1.5f,-4.0f);
        
        //banana parte16
        glVertex2f(3.0f,-4.5f);
        glVertex2f(3.0f,-1.0f);
        glVertex2f(2.0f,-1.0f);
        glVertex2f(2.0f,-4.5f);
        
        //banana parte17
        glVertex2f(4.5f,-4.5f);
        glVertex2f(4.5f,-1.5f);
        glVertex2f(3.0f,-1.5f);
        glVertex2f(3.0f,-4.5f);
        
         //banana parte18
        glVertex2f(5.5f,-4.5f);
        glVertex2f(5.5f,-3.0f);
        glVertex2f(4.5f,-3.0f);
        glVertex2f(4.5f,-4.5f);
        
         //banana parte19
        glVertex2f(4.5f,-1.5f);
        glVertex2f(4.5f,-1.0f);
        glVertex2f(4.0f,-1.0f);
        glVertex2f(4.0f,-1.5f);
        
        //banana parte20
        glVertex2f(5.0f,-2.0f);
        glVertex2f(5.0f,-1.0f);
        glVertex2f(4.5f,-1.0f);
        glVertex2f(4.5f,-2.0f);
        
         //banana parte21
        glVertex2f(5.5f,-1.5f);
        glVertex2f(5.5f,-0.5f);
        glVertex2f(5.0f,-0.5f);
        glVertex2f(5.0f,-1.5f);
        
    glEnd();
    
}

void contornoBanana(){
	glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_QUADS);
		glVertex2f(0.0f, 2.5f);
		glVertex2f(0.0f,3.5f);
		glVertex2f(-1.0f,3.5f);
		glVertex2f(-1.0f,2.5f);

	glBegin(GL_QUADS);
		glVertex2f(-0.5f,1.5f);
		glVertex2f(-0.5f,2.5f);
		glVertex2f(-1.5f,2.5f); 
		glVertex2f(-1.5f,1.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-1.5f,0.5f);
		glVertex2f(-1.5f,2.0f); 
		glVertex2f(-2.0f,2.0f); 
		glVertex2f(-2.0f,0.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-2.0f,-0.5f);
		glVertex2f(-2.0f,1.5f); 
		glVertex2f(-2.5f,1.5f); 
		glVertex2f(-2.5f,-0.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-2.5f,-0.5f);
		glVertex2f(-2.5f,0.5f); 
		glVertex2f(-3.0f,0.5f); 
		glVertex2f(-3.0f,-0.5f);
		
	glBegin(GL_QUADS);
		glVertex2f(-3.0f,-1.0f);
		glVertex2f(-3.0f,0.0f); 
		glVertex2f(-6.5f,0.0f); 
		glVertex2f(-6.5f,-1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-6.0f,-2.0f);
		glVertex2f(-6.0f,-0.5f); 
		glVertex2f(-7.0f,-0.5f); 
		glVertex2f(-7.0f,-2.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-5.0f,-3.0f);
		glVertex2f(-5.0f,-1.5f); 
		glVertex2f(-6.0f,-1.5f); 
		glVertex2f(-6.0f,-3.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-5.5f,-3.5f);
		glVertex2f(-5.5f,-2.5f); 
		glVertex2f(-7.5f,-2.5f); 
		glVertex2f(-7.5f,-3.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-7.5f,-4.5f);
		glVertex2f(-7.5f,-3.0f); 
		glVertex2f(-8.5f,-3.0f); 
		glVertex2f(-8.5f,-4.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-3.0f,-5.5f);
		glVertex2f(-3.0f,-4.5f); 
		glVertex2f(-7.5f,-4.5f); 
		glVertex2f(-7.5f,-5.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-2.0f,-5.0f);
		glVertex2f(-2.0f,-4.0f); 
		glVertex2f(-3.0f,-4.0f); 
		glVertex2f(-3.0f,-5.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-1.0f,-4.5f);
		glVertex2f(-1.0f,-3.5f); 
		glVertex2f(-2.0f,-3.5f); 
		glVertex2f(-2.0f,-4.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-0.5f,-4.0f);
		glVertex2f(-0.5f,-3.0f); 
		glVertex2f(-1.5f,-3.0f); 
		glVertex2f(-1.5f,-4.0f);
		
	glBegin(GL_QUADS);
		glVertex2f(0.5f,-3.5f);
		glVertex2f(0.5f,-2.5f); 
		glVertex2f(-1.0f,-2.5f); 
		glVertex2f(-1.0f,-3.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(1.0f,-4.5f);
		glVertex2f(1.0f,-3.5f); 
		glVertex2f(0.0f,-3.5f); 
		glVertex2f(0.0f,-4.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(2.0f,-5.0f);
		glVertex2f(2.0f,-4.0f); 
		glVertex2f(1.0f,-4.0f); 
		glVertex2f(1.0f,-5.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-2.0f,-0.5f);
		glVertex2f(-2.0f,1.5f); 
		glVertex2f(-2.5f,1.5f); 
		glVertex2f(-2.5f,-0.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.5f,-5.5f);
		glVertex2f(5.5f,-4.5f); 
		glVertex2f(2.0f,-4.5f); 
		glVertex2f(2.0f,-5.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(6.5f,-4.5f);
		glVertex2f(6.5f,-3.0f); 
		glVertex2f(5.5f,-3.0f); 
		glVertex2f(5.5f,-4.5f);
		
	glBegin(GL_QUADS);
		glVertex2f(5.5f,-3.0f);
		glVertex2f(5.5f,-2.0f); 
		glVertex2f(4.5f,-2.0f); 
		glVertex2f(4.5f,-3.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(6.0f,-2.5f);
		glVertex2f(6.0f,-1.5f); 
		glVertex2f(5.0f,-1.5f); 
		glVertex2f(5.0f,-2.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(6.5f,-1.5f);
		glVertex2f(6.5f,-0.5f); 
		glVertex2f(5.5f,-0.5f); 
		glVertex2f(5.5f,-1.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.5f,-0.5f);
		glVertex2f(5.5f,0.0f); 
		glVertex2f(5.0f,0.0f); 
		glVertex2f(5.0f,-0.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.0f,-1.0f);
		glVertex2f(5.0f,0.0f); 
		glVertex2f(4.0f,0.0f); 
		glVertex2f(4.0f,-1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(4.0f,-1.5f);
		glVertex2f(4.0f,-0.5f); 
		glVertex2f(3.0f,-0.5f); 
		glVertex2f(3.0f,-1.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(3.0f,-1.0f);
		glVertex2f(3.0f,1.0f); 
		glVertex2f(2.0f,1.0f); 
		glVertex2f(2.0f,-1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(2.5f,1.0f);
		glVertex2f(2.5f,2.0f); 
		glVertex2f(1.5f,2.0f); 
		glVertex2f(1.5f,1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(2.0f,2.0f);
		glVertex2f(2.0f,3.0f); 
		glVertex2f(1.0f,3.0f); 
		glVertex2f(1.0f,2.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(1.5f,3.0f);
		glVertex2f(1.5f,4.0f); 
		glVertex2f(0.5f,4.0f); 
		glVertex2f(0.5f,3.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(1.0f,3.5f);
		glVertex2f(1.0f,4.5f); 
		glVertex2f(0.0f,4.5f); 
		glVertex2f(0.0f,3.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(2.5f,4.5f);
		glVertex2f(2.5f,5.0f); 
		glVertex2f(0.5f,5.0f); 
		glVertex2f(0.5f,4.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(2.5f,3.5f);
		glVertex2f(2.5f,4.0f); 
		glVertex2f(1.5f,4.0f); 
		glVertex2f(1.5f,3.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(2.5f,4.0f);
		glVertex2f(2.5f,4.5f); 
		glVertex2f(2.0f,4.5f); 
		glVertex2f(2.0f,4.0f);
	

	glEnd();
}

void sombraBanana (){
	glColor4f(0.0f, 0.0f, 0.0f, 0.1f);
	//sombracentral
	glBegin(GL_QUADS);
		glVertex2f(0.0f,-2.5f);
		glVertex2f(0.0f,0.0f);
		glVertex2f(-0.5f,0.0);
		glVertex2f(-0.5f,-2.5f);
	glBegin(GL_QUADS);
		glVertex2f(0.0f,-2.5f);
		glVertex2f(0.0f,0.0f);
		glVertex2f(-0.5f,0.0);
		glVertex2f(-0.5f,-2.5f);
	glBegin(GL_QUADS);
		glVertex2f(0.0f,-2.5f);
		glVertex2f(0.0f,0.0f);
		glVertex2f(-0.5f,0.0);
		glVertex2f(-0.5f,-2.5f);
	glBegin(GL_QUADS);
		glVertex2f(0.0f,-2.5f);
		glVertex2f(0.0f,0.0f);
		glVertex2f(-0.5f,0.0);
		glVertex2f(-0.5f,-2.5f);
	//
	
	//sombra cacho
	glBegin(GL_QUADS);
		glVertex2f(2.0f,4.0f);
		glVertex2f(2.0f,4.5f);
		glVertex2f(1.0f,4.5);
		glVertex2f(1.0f,4.0f);
	glBegin(GL_QUADS);
		glVertex2f(2.0f,4.0f);
		glVertex2f(2.0f,4.5f);
		glVertex2f(1.0f,4.5);
		glVertex2f(1.0f,4.0f);
	glBegin(GL_QUADS);
		glVertex2f(2.0f,4.0f);
		glVertex2f(2.0f,4.5f);
		glVertex2f(1.0f,4.5);
		glVertex2f(1.0f,4.0f);
	glBegin(GL_QUADS);
		glVertex2f(2.0f,4.0f);
		glVertex2f(2.0f,4.5f);
		glVertex2f(1.0f,4.5);
		glVertex2f(1.0f,4.0f);
	glBegin(GL_QUADS);
		glVertex2f(2.0f,4.0f);
		glVertex2f(2.0f,4.5f);
		glVertex2f(1.0f,4.5);
		glVertex2f(1.0f,4.0f);
	//
	
	glBegin(GL_QUADS);
		glVertex2f(1.5f,-1.5f);
		glVertex2f(1.5f,2.0f);
		glVertex2f(0.5f,2.0);
		glVertex2f(0.5f,-1.5f);
		
	glBegin(GL_QUADS);
		glVertex2f(2.0f,-2.0f);
		glVertex2f(2.0f,1.0f);
		glVertex2f(1.0f,1.0);
		glVertex2f(1.0f,-2.0f);
		
	glBegin(GL_QUADS);
		glVertex2f(3.0f,-3.0f);
		glVertex2f(3.0f,-1.0f);
		glVertex2f(1.5f,-1.0);
		glVertex2f(1.5f,-3.0);
	
	glBegin(GL_QUADS);
		glVertex2f(4.5f,-3.5f);
		glVertex2f(4.5f,-1.5f);
		glVertex2f(2.5f,-1.5);
		glVertex2f(2.5f,-3.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.5f,-3.5f);
		glVertex2f(5.5f,-3.0f);
		glVertex2f(4.5f,-3.0);
		glVertex2f(4.5f,-3.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.0f,-2.0f);
		glVertex2f(5.0f,-1.0f);
		glVertex2f(4.0f,-1.0);
		glVertex2f(4.0f,-2.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.5f,-1.5f);
		glVertex2f(5.5f,-0.5f);
		glVertex2f(5.0f,-0.5);
		glVertex2f(5.0f,-1.5f);
		
	glEnd();
		
}

void luzBanana(){
    glColor4f(1.0f, 1.0f, 1.0f, 0.6f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f,1.5f);
        glVertex2f(0.0f,2.5f);
        glVertex2f(-0.5f,2.5f);
        glVertex2f(-0.5f,1.5f);

    glBegin(GL_QUADS);
        glVertex2f(-0.5f,1.0f);
        glVertex2f(-0.5f,1.5f);
        glVertex2f(-1.5f,1.5f);
        glVertex2f(-1.5f,1.0f);

    glBegin(GL_QUADS);
        glVertex2f(-1.0f,0.5f);
        glVertex2f(-1.0f,1.0f);
        glVertex2f(-1.5f,1.0f);
        glVertex2f(-1.5f,0.5f);

    glBegin(GL_QUADS);
        glVertex2f(-1.5f,-1.0f);
        glVertex2f(-1.5f,0.5f);
        glVertex2f(-2.0f,0.5f);
        glVertex2f(-2.0f,-1.0f);

    glBegin(GL_QUADS);
        glVertex2f(-2.0f,-1.0f);
        glVertex2f(-2.0f,-0.5f);
        glVertex2f(-3.0f,-0.5f);
        glVertex2f(-3.0f,-1.0f);

    glBegin(GL_QUADS);
        glVertex2f(-2.5f,-1.5f);
        glVertex2f(-2.5f,-1.0f);
        glVertex2f(-4.0f,-1.0f);
        glVertex2f(-4.0f,-1.5f);


    glEnd();
}

/* -----------------------------*/
/* ---------- PAPEL  ---------- */
/* -----------------------------*/

void papel(){
	glColor3f(0.95f, 0.95f, 0.95f);
    glBegin(GL_QUADS);
		//papel 1
       	glVertex2f(3.5f,5.0f);
        glVertex2f(3.5f,5.7f);
        glVertex2f(0.0f,5.7f);
        glVertex2f(0.0f,5.0f);
        //papel 2
       	glVertex2f(4.2f,3.5f);
        glVertex2f(4.2f,5.0f);
        glVertex2f(0.5f,5.0f);
        glVertex2f(0.5f,3.5f);
        //papel 2.2
       	glVertex2f(0.0f,4.0f);
        glVertex2f(0.0f,5.0f);
        glVertex2f(-1.0f,5.0f);
        glVertex2f(-1.0f,4.0f);
        //papel 3
       	glVertex2f(3.5f,2.5f);
        glVertex2f(3.5f,3.5f);
        glVertex2f(0.0f,3.5f);
        glVertex2f(0.0f,2.5f);
        //papel 4
       	glVertex2f(3.0f,1.7f);
        glVertex2f(3.0f,2.5f);
        glVertex2f(-0.5f,2.5f);
        glVertex2f(-0.5f,1.7f);
        //papel 5
       	glVertex2f(2.5f,0.7f);
        glVertex2f(2.5f,1.7f);
        glVertex2f(-1.0f,1.7f);
        glVertex2f(-1.0f,0.7f);
        //papel 6
       	glVertex2f(2.0f,0.0f);
        glVertex2f(2.0f,0.7f);
        glVertex2f(-1.5f,0.7f);
        glVertex2f(-1.5f,0.0f);
        //papel 7
       	glVertex2f(2.5f,-0.7f);
        glVertex2f(2.5f,0.0f);
        glVertex2f(-1.0f,0.0f);
        glVertex2f(-1.0f,-0.7f);
        //papel 8
       	glVertex2f(3.0f,-1.4f);
        glVertex2f(3.0f,-0.7f);
        glVertex2f(-0.5f,-0.7f);
        glVertex2f(-0.5f,-1.4f);
   glEnd();     
}

void papelLinhas(){
	glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    	//linha 1
       	glVertex2f(3.3f,4.2f);
        glVertex2f(3.3f,4.5f);
        glVertex2f(1.2f,4.5f);
        glVertex2f(1.2f,4.2f);
        //linha 2
       	glVertex2f(3.0f,3.2f);
        glVertex2f(3.0f,3.5f);
        glVertex2f(0.9f,3.5f);
        glVertex2f(0.9f,3.2f);
        //linha 3
       	glVertex2f(2.6f,2.2f);
        glVertex2f(2.6f,2.5f);
        glVertex2f(0.5f,2.5f);
        glVertex2f(0.5f,2.2f);
        //linha 4
       	glVertex2f(2.0f,1.2f);
        glVertex2f(2.0f,1.5f);
        glVertex2f(-0.1f,1.5f);
        glVertex2f(-0.1f,1.2f);
        //linha 5
       	glVertex2f(1.7f,0.2f);
        glVertex2f(1.7f,0.5f);
        glVertex2f(-0.5f,0.5f);
        glVertex2f(-0.5f,0.2f);
    glEnd();    
}

void papelDetalhes(){
	glColor3f(1.000000f, 0.498000f, 0.0f);
    glBegin(GL_QUADS);
		//Detalhe 1
        glVertex2f(1.9f,-1.0);
        glVertex2f(1.9f,-0.2f);
        glVertex2f(1.2f,-0.2f);
        glVertex2f(1.2f,-1.0f);
        //Detalhe 2
        glVertex2f(1.9f,-1.3);
        glVertex2f(1.9f,-0.6f);
        glVertex2f(2.5f,-0.6f);
        glVertex2f(2.5f,-1.3f);
   glEnd();     
}

void papelContorno(){
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
		//papel 1
       	glVertex2f(4.0f,4.5f);
        glVertex2f(4.0f,6.2f);
        glVertex2f(-0.5f,6.2f);
        glVertex2f(-0.5f,4.5f);
        //papel 2
       	glVertex2f(4.7f,3.0f);
        glVertex2f(4.7f,5.5f);
        glVertex2f(0.0f,5.5f);
        glVertex2f(0.0f,3.0f);
        //papel 2.2
       	glVertex2f(0.5f,3.5f);
        glVertex2f(0.5f,5.5f);
        glVertex2f(-1.5f,5.5f);
        glVertex2f(-1.5f,3.5f);
        //papel 3
       	glVertex2f(4.0f,2.0f);
        glVertex2f(4.0f,4.0f);
        glVertex2f(-0.5f,4.0f);
        glVertex2f(-0.5f,2.0f);
        //papel 4
       	glVertex2f(3.5f,1.2f);
        glVertex2f(3.5f,3.0f);
        glVertex2f(-1.0f,3.0f);
        glVertex2f(-1.0f,1.2f);
        //papel 5
       	glVertex2f(3.0f,0.2f);
        glVertex2f(3.0f,2.2f);
        glVertex2f(-1.5f,2.1f);
        glVertex2f(-1.5f,0.7f);
        //papel 6
       	glVertex2f(2.5f,-0.5f);
        glVertex2f(2.5f,1.2f);
        glVertex2f(-2.0f,1.2f);
        glVertex2f(-2.0f,-0.5f);
        //papel 7
       	glVertex2f(3.0f,-1.2f);
        glVertex2f(3.0f,0.5f);
        glVertex2f(-1.5f,0.5f);
        glVertex2f(-1.5f,-1.2f);
        //papel 8
       	glVertex2f(3.5f,-1.9f);
        glVertex2f(3.5f,-0.2f);
        glVertex2f(-1.0f,-0.2f);
        glVertex2f(-1.0f,-1.9f);
   glEnd(); 
           
}

void sombraPapel(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.25f);
	glBegin(GL_QUADS);
		//pt1
		glVertex2f(-0.5f,4.0f);
        glVertex2f(-0.5f,4.5f);
        glVertex2f(-1.0f,4.5f); 
        glVertex2f(-1.0f,4.0f);
        //pt2
        glVertex2f(-0.0f,4.5f);
        glVertex2f(-0.0f,5.0f);
        glVertex2f(-1.0f,5.0f); 
        glVertex2f(-1.0f,4.5f);
    glEnd();    
}


/* -----------------------------*/
/* ---------- GARRAFA  -------- */
/* -----------------------------*/

void garrafa(){
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        //parte 1 
        glVertex2f(0.5f,1.4f);
        glVertex2f(0.5f,1.7f);
        glVertex2f(-0.6f,1.7f);
        glVertex2f(-0.6f,1.4f);

        //parte 2
        glVertex2f(0.3f,1.0f);
        glVertex2f(0.3f,1.2f);
        glVertex2f(-0.4f,1.2f);
        glVertex2f(-0.4f,1.0f);

        //parte 3
        glVertex2f(0.5f,0.8f);
        glVertex2f(0.5f,1.0f);
        glVertex2f(-0.6f,1.0f);
        glVertex2f(-0.6f,0.8f);

        //parte 4
        glVertex2f(0.9f,0.6f);
        glVertex2f(0.9f,0.8f);
        glVertex2f(-1.0f,0.8f);
        glVertex2f(-1.0f,0.6f);

        //parte 5
        glVertex2f(1.2f,0.1f);
        glVertex2f(1.2f,0.6f);
        glVertex2f(-1.3f,0.6f);
        glVertex2f(-1.3f,0.1f);

        //parte 6
        glVertex2f(1.1f,0.0f);
        glVertex2f(1.1f,0.1f);
        glVertex2f(-1.2f,0.1f);
        glVertex2f(-1.2f,0.0f);

        //parte 7
        glVertex2f(1.0f,-0.1f);
        glVertex2f(1.0f,-0.6f);
        glVertex2f(-1.1f,-0.6f);
        glVertex2f(-1.1f,-0.1f);

        //parte 8
        glVertex2f(1.2f,-1.5f);
        glVertex2f(1.2f,-0.8f);
        glVertex2f(-1.3f,-0.8f);
        glVertex2f(-1.3f,-1.5f);

        //parte 9
        glVertex2f(0.9f,-1.7f);
        glVertex2f(0.9f,-1.5f);
        glVertex2f(-1.0f,-1.5f);
        glVertex2f(-1.0f,-1.7f);
    glEnd();

}

void contornoGarrafa(){

    glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_QUADS);
		glVertex2f(0.5f,1.7f);
		glVertex2f(0.5f,1.9f); 
		glVertex2f(-0.6f,1.9f); 
		glVertex2f(-0.6f,1.7f);
	
	glBegin(GL_QUADS);
		glVertex2f(0.7f,1.2f);
		glVertex2f(0.7f,1.7f); 
		glVertex2f(0.5f,1.7f); 
		glVertex2f(0.5f,1.2f);
	
	glBegin(GL_QUADS);
		glVertex2f(-0.6f, 1.1f);
		glVertex2f(-0.6f,1.7f); 
		glVertex2f(-0.8f,1.7f); 
		glVertex2f(-0.8f,1.1f);
	
	glBegin(GL_QUADS);
		glVertex2f(-0.6f, 1.2f);
		glVertex2f(-0.6f,1.7f); 
		glVertex2f(-0.8f,1.7f); 
		glVertex2f(-0.8f,1.2f);
	
	glBegin(GL_QUADS);
		glVertex2f(0.5f, 1.2f);
		glVertex2f(0.5f,1.4f); 
		glVertex2f(-0.6f,1.4f); 
		glVertex2f(-0.6f,1.2f);
	//
	glBegin(GL_QUADS);
		glVertex2f(0.5f,1.0f);
		glVertex2f(0.5f,1.2f); 
		glVertex2f(0.3f,1.2f); 
		glVertex2f(0.3f,1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-0.4f,1.0f);
		glVertex2f(-0.4f,1.2f); 
		glVertex2f(-0.6f,1.2f); 
		glVertex2f(-0.6f,1.0f);
	//
	glBegin(GL_QUADS);
		glVertex2f(0.9f,0.8f);
		glVertex2f(0.9f,1.0f); 
		glVertex2f(0.5f,1.0f); 
		glVertex2f(0.5f,0.8f);
	
	glBegin(GL_QUADS);
		glVertex2f(-0.6f,0.8f);
		glVertex2f(-0.6f,1.0f); 
		glVertex2f(-1.0f,1.0f); 
		glVertex2f(-1.0f,0.8f);
	//
	
	glBegin(GL_QUADS);
		glVertex2f(1.2f,0.6f);
		glVertex2f(1.2f,0.8f); 
		glVertex2f(0.9f,0.8f); 
		glVertex2f(0.9f,0.6f);
	
	glBegin(GL_QUADS);
		glVertex2f(-1.0f,0.6f);
		glVertex2f(-1.0f,0.8f); 
		glVertex2f(-1.3f,0.8f); 
		glVertex2f(-1.3f,0.6f);
	//
		glBegin(GL_QUADS);
		glVertex2f(1.4f,0.0f);
		glVertex2f(1.4f,0.6f); 
		glVertex2f(1.2f,0.6f); 
		glVertex2f(1.2f,0.0f);
	
		glBegin(GL_QUADS);
		glVertex2f(-1.3f,0.0f);
		glVertex2f(-1.3f,0.6f); 
		glVertex2f(-1.5f,0.6f); 
		glVertex2f(-1.5f,0.0f);
	
	//
	glBegin(GL_QUADS);
		glVertex2f(1.2f,-0.2f);
		glVertex2f(1.2f,0.0f); 
		glVertex2f(-1.3f,0.0f); 
		glVertex2f(-1.3f,-0.2f);
	
	glBegin(GL_QUADS);
		glVertex2f(1.2f,-0.8f);
		glVertex2f(1.2f,-0.6f); 
		glVertex2f(-1.3f,-0.6f); 
		glVertex2f(-1.3f,-0.8f);
	
	//
	glBegin(GL_QUADS);
		glVertex2f(1.2f,-0.6f);
		glVertex2f(1.2f,-0.2f); 
		glVertex2f(1.0f,-0.2f); 
		glVertex2f(1.0f,-0.6f);
	
		glBegin(GL_QUADS);
		glVertex2f(-1.1f,-0.6f);
		glVertex2f(-1.1f,-0.2f); 
		glVertex2f(-1.3f,-0.2f); 
		glVertex2f(-1.3f,-0.6f);
	//
		glBegin(GL_QUADS);
		glVertex2f(1.4f,-1.5f);
		glVertex2f(1.4f,-0.8f); 
		glVertex2f(1.2f,-0.8f); 
		glVertex2f(1.2f,-1.5f);
	
	glBegin(GL_QUADS);
		glVertex2f(-1.3f,-1.5f);
		glVertex2f(-1.3f,-0.8f); 
		glVertex2f(-1.5f,-0.8f); 
		glVertex2f(-1.5f,-1.5f);
	//
		glBegin(GL_QUADS);
		glVertex2f(1.2f,-1.7f);
		glVertex2f(1.2f,-1.5f); 
		glVertex2f(0.9f,-1.5f); 
		glVertex2f(0.9f,-1.7f);
	
		glBegin(GL_QUADS);
		glVertex2f(-1.0f,-1.7f);
		glVertex2f(-1.0f,-1.5f); 
		glVertex2f(-1.3f,-1.5f); 
		glVertex2f(-1.3f,-1.7f);
	
	glBegin(GL_QUADS);
		glVertex2f(0.9f,-1.9f);
		glVertex2f(0.9f,-1.7f); 
		glVertex2f(-1.0f,-1.7f); 
		glVertex2f(-1.0f,-1.9f);
	glEnd();
	
}


/* -----------------------------*/
/* ----------- TAÇA  ---------- */
/* -----------------------------*/

void taca(){
        glColor3f(0.0f, 1.0f, 1.0f);
    	glBegin(GL_QUADS);
        //parte 1 
        glVertex2f(5.0f,9.0f);
        glVertex2f(5.0f,11.0f);
        glVertex2f(-11.0f,11.0f);
        glVertex2f(-11.0f,9.0f);

        //parte 2 
        glVertex2f(11.0f,9.0f);
        glVertex2f(11.0f,11.0f);
        glVertex2f(7.0f,11.0f);
        glVertex2f(7.0f,9.0f);

        //parte 3 
        glVertex2f(1.0f,5.0f);
        glVertex2f(1.0f,7.0f);
        glVertex2f(-7.0f,7.0f);
        glVertex2f(-7.0f,5.0f);

        //parte 4
        glVertex2f(7.0f,5.0f);
        glVertex2f(7.0f,7.0f);
        glVertex2f(3.0f,7.0f);
        glVertex2f(3.0f,5.0f);

        //parte 5
        glVertex2f(-1.0f,3.0f);
        glVertex2f(-1.0f,5.0f);
        glVertex2f(-5.0f,5.0f);
        glVertex2f(-5.0f,3.0f);

        //parte 6
        glVertex2f(5.0f,3.0f);
        glVertex2f(5.0f,5.0f);
        glVertex2f(1.0f,5.0f);
        glVertex2f(1.0f,3.0f);

        //parte 7
        glVertex2f(3.0f,1.0f);
        glVertex2f(3.0f,3.0f);
        glVertex2f(-3.0f,3.0f);
        glVertex2f(-3.0f,1.0f);

        //parte 8
        glVertex2f(1.0f,1.0f);
        glVertex2f(1.0f,-1.0f);
        glVertex2f(-1.0f,-1.0f);
        glVertex2f(-1.0f,1.0f);


    glEnd();

}

void contornoTaca(){
	glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_QUADS);
		glVertex2f(15.0f,11.0f);
		glVertex2f(15.0f,13.0f); 
		glVertex2f(-15.0f,13.0f); 
		glVertex2f(-15.0f,11.0f);
	//
	glBegin(GL_QUADS);
		glVertex2f(-11.0f,9.0f);
		glVertex2f(-11.0f,11.0f); 
		glVertex2f(-13.0f,11.0f); 
		glVertex2f(-13.0f,9.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(13.0f,9.0f);
		glVertex2f(13.0f,11.0f); 
		glVertex2f(11.0f,11.0f); 
		glVertex2f(11.0f,9.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(11.0f,7.0f);
		glVertex2f(11.0f,9.0f); 
		glVertex2f(-11.0f,9.0f); 
		glVertex2f(-11.0f,7.0f);
		
		
	glBegin(GL_QUADS);
		glVertex2f(7.0f,9.0f);
		glVertex2f(7.0f,11.0f); 
		glVertex2f(5.0f,11.0f); 
		glVertex2f(5.0f,9.0f);
		
	glBegin(GL_QUADS);
		glVertex2f(-7.0f,5.0f);
		glVertex2f(-7.0f,7.0f); 
		glVertex2f(-9.0f,7.0f); 
		glVertex2f(-9.0f,5.0f);
	
glBegin(GL_QUADS);
		glVertex2f(3.0f,5.0f);
		glVertex2f(3.0f,7.0f); 
		glVertex2f(1.0f,7.0f); 
		glVertex2f(1.0f,5.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(9.0f,5.0f);
		glVertex2f(9.0f,7.0f); 
		glVertex2f(7.0f,7.0f); 
		glVertex2f(7.0f,5.0f);
		
	
	glBegin(GL_QUADS);
		glVertex2f(-5.0f,3.0f);
		glVertex2f(-5.0f,5.0f); 
		glVertex2f(-7.0f,5.0f); 
		glVertex2f(-7.0f,3.0f);
		
	glBegin(GL_QUADS);
		glVertex2f(1.0f,3.0f);
		glVertex2f(1.0f,5.0f); 
		glVertex2f(-1.0f,5.0f); 
		glVertex2f(-1.0f,3.0f);
		
	glBegin(GL_QUADS);
		glVertex2f(7.0f,3.0f);
		glVertex2f(7.0f,5.0f); 
		glVertex2f(5.0f,5.0f); 
		glVertex2f(5.0f,3.0f);
	
	//
	glBegin(GL_QUADS);
		glVertex2f(-5.0f,-13.0f);
		glVertex2f(-5.0f,-11.0f); 
		glVertex2f(-7.0f,-11.0f); 
		glVertex2f(-7.0f,-13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f,-13.0f);
		glVertex2f(7.0f,-11.0f); 
		glVertex2f(5.0f,-11.0f); 
		glVertex2f(5.0f,-13.0f);
			
	glBegin(GL_QUADS);
		glVertex2f(-3.0f,1.0f);
		glVertex2f(-3.0f,3.0f); 
		glVertex2f(-5.0f,3.0f); 
		glVertex2f(-5.0f,1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.0f,1.0f);
		glVertex2f(5.0f,3.0f); 
		glVertex2f(3.0f,3.0f); 
		glVertex2f(3.0f,1.0f);
		
	glBegin(GL_QUADS);
		glVertex2f(-1.0f,-1.0f);
		glVertex2f(-1.0f,1.0f); 
		glVertex2f(-3.0f,1.0f); 
		glVertex2f(-3.0f,-1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(3.0f,-1.0f);
		glVertex2f(3.0f,1.0f); 
		glVertex2f(1.0f,1.0f); 
		glVertex2f(1.0f,-1.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(1.0f,-13.0f);
		glVertex2f(1.0f,-1.0f); 
		glVertex2f(-1.0f,-1.0f); 
		glVertex2f(-1.0f,-13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-1.0f,-13.0f);
		glVertex2f(-1.0f,-9.0f); 
		glVertex2f(-3.0f,-9.0f); 
		glVertex2f(-3.0f,-13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(3.0f,-13.0f);
		glVertex2f(3.0f,-9.0f); 
		glVertex2f(1.0f,-9.0f); 
		glVertex2f(1.0f,-13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.0f,-13.0f);
		glVertex2f(5.0f,-9.0f); 
		glVertex2f(3.0f,-9.0f); 
		glVertex2f(3.0f,-13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-3.0f,-13.0f);
		glVertex2f(-3.0f,-9.0f); 
		glVertex2f(-5.0f,-9.0f); 
		glVertex2f(-5.0f,-13.0f);
		
		
	glEnd();	
}

/* -----------------------------*/
/* ---------- BATERIA  -------- */
/* -----------------------------*/

void bateria(){
	
	glBegin(GL_POINTS);
		//Contorno - parte 1 (cima)
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(0.0f,3.0f);
		glVertex2f(0.5f,3.0f);
		glVertex2f(1.0f,2.5f);
		glVertex2f(1.0f,2.0f);
		glVertex2f(-0.5f,3.0f);
		glVertex2f(-1.0f,2.5f);
		glVertex2f(-1.0f,2.0f);
	glEnd();
	
	glBegin(GL_QUADS);
		//Contorno - parte 2 (horizontal)
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(3.0f,-4.5f);
		glVertex2f(3.0f,2.0f);
		glVertex2f(-3.0f,2.0f);
		glVertex2f(-3.0f,-4.5f);
	glEnd();
	
	glBegin(GL_QUADS);
		//Contorno - parte 3 (vertical)
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(2.5f,-5.0f);
		glVertex2f(2.5f,2.5f);
		glVertex2f(-2.5f,2.5f);
		glVertex2f(-2.5f,-5.0f);
	glEnd();
	
	glPointSize(5.0f);
	glBegin(GL_POINTS);
		//Bateria parte 1 (cima)
		glColor3f(0.9f, 0.9f, 0.9f);
		glVertex2f(0.5f,2.5f);   
		glVertex2f(0.0f,2.5f);   
		glVertex2f(-0.5f,2.5f);
		glVertex2f(-0.5f,2.0f);
		glVertex2f(0.0f,2.0f);
		glVertex2f(0.5f,2.0f);
	glEnd();
	
	glBegin(GL_QUADS);
		//Bateria parte 2 (baixo)
		glColor3f(0.9f, 0.9f, 0.9f);
		glVertex2f(2.5f,-4.5f);
		glVertex2f(2.5f,2.0f);
		glVertex2f(-2.5f,2.0f);
		glVertex2f(-2.5f,-4.5f);
	glEnd();
	
	glBegin(GL_POINTS);
		//parte 4 - raio contorno
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(0.5f,0.5f);
		glVertex2f(0.0f,0.0f);
		glVertex2f(-0.5f,-0.5f);
		glVertex2f(-1.0f,-1.0f);
		glVertex2f(-1.5f,-1.5f);
		glVertex2f(-1.5f,-2.0f);
		glVertex2f(-1.0f,-2.0f);
		glVertex2f(-0.5f,-2.0f);
		glVertex2f(0.0f,-2.0f);
		glVertex2f(-0.5f,-2.5f);
		glVertex2f(-1.0f,-3.0f);
		glVertex2f(-1.0f,-3.5f);
		glVertex2f(-0.5f,-3.5f);
		glVertex2f(0.0f,-3.0f);
		glVertex2f(0.5f,-2.5f);
		glVertex2f(1.0f,-2.0f);
		glVertex2f(1.5f,-1.5f);
		glVertex2f(1.5f,-1.0f);
		glVertex2f(1.0f,-1.0f);
		glVertex2f(0.5f,-1.0f);
		glVertex2f(0.0f,-1.0f);
		glVertex2f(0.5f,-0.5f);
		glVertex2f(1.0f,0.0f);
		glVertex2f(1.0f,0.5f);
	glEnd();
	
	glBegin(GL_POINTS);
		//Raio
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.5f,0.0f);
		glVertex2f(0.0f,-0.5f);
		glVertex2f(-0.5f,-1.0f);
		glVertex2f(-1.0f,-1.5f);
		glVertex2f(-0.5f,-1.5f);
		glVertex2f(0.0f,-1.5f);
		glVertex2f(0.5f,-1.5f);
		glVertex2f(1.0f,-1.5f);
		glVertex2f(0.5f,-2.0f);
		glVertex2f(0.0f,-2.5f);
		glVertex2f(-0.5f,-3.0f);
	glEnd();

	glBegin(GL_QUADS);
		//Iluminação 1
		glColor4f(1.0f, 1.0f, 1.0f, 0.5f);
		glVertex2f(-2.0f,-1.0f);
		glVertex2f(-2.0f,2.0f);
		glVertex2f(-2.5f,2.0f);
		glVertex2f(-2.5f,-1.0f);
		//Iluminação 2
		glColor4f(1.0f, 1.0f, 1.0f, 0.5f);
		glVertex2f(-0.5f,1.5f);
		glVertex2f(-0.5f,2.0f);
		glVertex2f(-2.0f,2.0f);
		glVertex2f(-2.0f,1.5f);
	glEnd();

}

void latinha(){
	glColor3f(1.0f, 0.0f, 0.0f);

	glBegin(GL_QUADS);
		glVertex2f(8.0f, -9.0f);
		glVertex2f(8.0f,9.0f);
		glVertex2f(-7.0f,9.0f);
		glVertex2f(-7.0f,-9.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, 9.0f);
		glVertex2f(7.0f,11.0f);
		glVertex2f(-6.0f,11.0f);
		glVertex2f(-6.0f,9.0f);
	
	//sombra
	glColor4f(0.0f, 0.0f, 0.0f, 0.2f);
	glBegin(GL_QUADS);
		glVertex2f(-2.0f,9.0f);
		glVertex2f(-2.0f,11.0f);
		glVertex2f(-7.0f,11.0);
		glVertex2f(-7.0f,9.0f);
	glBegin(GL_QUADS);
		glVertex2f(-5.0f,-9.0f);
		glVertex2f(-5.0f,9.0f);
		glVertex2f(-8.0f,9.0);
		glVertex2f(-8.0f,-9.0f);
	
	//luz
	glColor4f(1.0f, 1.0f, 1.0f, 0.4f);

	glBegin(GL_QUADS);
		glVertex2f(5.0f,8.0f);
		glVertex2f(5.0f,10.0f);
		glVertex2f(2.0f,10.0f);
		glVertex2f(2.0f,8.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(5.0f,7.0f);
		glVertex2f(5.0f,9.0f);
		glVertex2f(6.0f,9.0f);
		glVertex2f(6.0f,7.0f);
	
	glColor3f(0.7f, 0.7f, 0.7f);
	glBegin(GL_QUADS);
		glVertex2f(8.0f, -10.0f);
		glVertex2f(8.0f,-9.0f);
		glVertex2f(-7.0f,-9.0f);
		glVertex2f(-7.0f,-10.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, -11.0f);
		glVertex2f(7.0f,-10.0f);
		glVertex2f(-6.0f,-10.0f);
		glVertex2f(-6.0f,-11.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, 12.0f);
		glVertex2f(7.0f,13.0f);
		glVertex2f(-6.0f,13.0f);
		glVertex2f(-6.0f,12.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(6.0f, 11.0f);
		glVertex2f(6.0f,12.0f);
		glVertex2f(-5.0f,12.0f);
		glVertex2f(-5.0f,11.0f);
	
	glColor3f(0.0f, 0.0f, 0.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(9.0f, -10.0f);
		glVertex2f(9.0f,9.0f);
		glVertex2f(8.0f,9.0f);
		glVertex2f(8.0f,-10.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-8.0f, -10.0f);
		glVertex2f(-8.0f,9.0f);
		glVertex2f(-7.0f,9.0f);
		glVertex2f(-7.0f,-10.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(8.0f, 9.0f);
		glVertex2f(8.0f,14.0f);
		glVertex2f(7.0f,14.0f);
		glVertex2f(7.0f,9.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-6.0f, 9.0f);
		glVertex2f(-6.0f,14.0f);
		glVertex2f(-7.0f,14.0f);
		glVertex2f(-7.0f,9.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, 13.0f);
		glVertex2f(7.0f,14.0f);
		glVertex2f(-6.0f,14.0f);
		glVertex2f(-6.0f,13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, 13.0f);
		glVertex2f(7.0f,14.0f);
		glVertex2f(6.0f,14.0f);
		glVertex2f(6.0f,13.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, -12.0f);
		glVertex2f(7.0f,-11.0f);
		glVertex2f(-6.0f,-11.0f);
		glVertex2f(-6.0f,-12.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(7.0f, 11.0f);
		glVertex2f(7.0f,12.0f);
		glVertex2f(6.0f,12.0f);
		glVertex2f(6.0f,11.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-5.0f, 11.0f);
		glVertex2f(-5.0f,12.0f);
		glVertex2f(-6.0f,12.0f);
		glVertex2f(-6.0f,11.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(8.0f, -11.0f);
		glVertex2f(8.0f,-10.0f);
		glVertex2f(7.0f,-10.0f);
		glVertex2f(7.0f,-11.0f);
	
	glBegin(GL_QUADS);
		glVertex2f(-6.0f, -11.0f);
		glVertex2f(-6.0f,-10.0f);
		glVertex2f(-7.0f,-10.0f);
		glVertex2f(-7.0f,-11.0f);	
	
	glEnd();
}

#endif
