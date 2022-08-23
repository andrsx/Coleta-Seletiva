#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include "drawings.h"
#include "functions.h"
#include "drawings.h"

int main(void){
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,600);
	glutCreateWindow("Projeto Final");
	glutDisplayFunc(Desenha);
	glutReshapeFunc(AlteraTamanhoJanela);
	glutTimerFunc(33, Timer, 1);
	Inicializa();
	glutSpecialFunc(TeclasEspeciais);
	glutKeyboardFunc(GerenciaTeclado);
	//glutMouseFunc(GerenciaMouse);

	glutMainLoop();
}
