#include<GL/glut.h>
void desenha(){
	// Define a cor de fundo
	glClearColor(1.0,1.0,1.0,0.0);
	// Habilita a visibilidade por camadas
	glEnable(GL_DEPTH_TEST);
	// Limpa o buffer e redefine conforme as configurações
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// Define o campo de projeção dos próximos comandos
	glMatrixMode(GL_PROJECTION);
	// Limpa a configuração do projeto
	glLoadIdentity();
	// Redefine opções anteriores
	gluPerspective(65,1,1,512);  
	glMatrixMode(GL_MODELVIEW);
	// Limpa tudo de novo
	glLoadIdentity();
	// Define perspectiva do observador
	gluLookAt(0,0,-256,100,100,0,0,1,0);
	//Seleciona a cor do objeto
	glColor3f (15.0,0.0,1.0);
	// Define o tipo do objeto
	glBegin(GL_QUADS);
		glVertex3f(100,100,0);
		glVertex3f(200,100,0);
		glVertex3f(200,200,0);
		glVertex3f(100,200,0);

		glColor3f (0.5,0.5,1.0);

		glVertex3f(100,200,100);
		glVertex3f(200,200,100);
		glVertex3f(200,100,100);
		glVertex3f(100,100,100);
		
		glColor3f (0,100,100);

		glVertex3f(100,200,0);
		glVertex3f(100,200,100);
		glVertex3f(100,100,100);
		glVertex3f(100,100,0);

		glColor3f (255,0,0);

		glVertex3f(100,200,0);
		glVertex3f(100,200,100);
		glVertex3f(200,200,100);
		glVertex3f(200,200,0);

		glColor3f (0,8,0);

		glVertex3f(100,100,0);
		glVertex3f(100,100,100);
		glVertex3f(200,100,100);
		glVertex3f(200,100,0);

		glVertex3f(200,200,100);
		glVertex3f(200,200,0);
		glVertex3f(200,100,0);
		glVertex3f(200,100,100);
	glEnd();
	/*Serve para forçar as chamadas OpenGL anteriores, efetivamente realizando o desenho na tela*/
	glFlush();
}
void main () {
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow ("Desenhos");
	glutDisplayFunc(desenha);
	glutMainLoop();
}
