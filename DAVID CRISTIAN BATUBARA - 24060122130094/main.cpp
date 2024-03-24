//Nama & NIM : David Cristian Batubara & 24060122130094
//Tanggal Pembuatan : 26 - 02 - 2024

#include <GL/glut.h>
#include <stdlib.h>

void Kapal(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,0,0);
	glPointSize(4);
	
	//Boat Bass
	glBegin(GL_QUADS);
	glColor3f(1,0,0);
	glVertex2i(170,160);
	glVertex2i(210,100);
	glVertex2i(410,100);
	glVertex2i(450,160);	
	
	//1st Chimney
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex2i(220,220);
	glVertex2i(220,160);
	glVertex2i(250,160);
	glVertex2i(250,220);	
	
	//2nd Chimney
	glBegin(GL_QUADS);
	glVertex2i(290,230);
	glVertex2i(290,160);
	glVertex2i(320,160);
	glVertex2i(320,230);	

	//3rd Chinmey
	glBegin(GL_QUADS);
	glVertex2i(360,220);
	glVertex2i(360,160);
	glVertex2i(410,160);
	glVertex2i(390,220);
	glEnd();
	
	//Smoke	
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2i(240,250);
	glVertex2i(240,240);
	glVertex2i(260,240);
	glVertex2i(260,250);
	
	//Smoke
	glBegin(GL_QUADS);
	glVertex2i(260,280);
	glVertex2i(260,270);
	glVertex2i(280,270);
	glVertex2i(280,280);
	
	//Smoke
	glBegin(GL_QUADS);
	glVertex2i(280,310);
	glVertex2i(280,320);
	glVertex2i(300,320);
	glVertex2i(300,310);
	
	//Smoke
	glBegin(GL_QUADS);
	glVertex2i(260,280);
	glVertex2i(260,270);
	glVertex2i(280,270);
	glVertex2i(280,280);

	//Smoke
	glBegin(GL_QUADS);
	glVertex2i(360,290);
	glVertex2i(380,290);
	glVertex2i(380,300);
	glVertex2i(360,300);

	glEnd();
	glFlush();
		
		
		
}

void myinit(void){
	glClearColor(0,0,0.5,0);
	glColor3f(0,0,0);
	glPointSize(4);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,640,0,480);
}

main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Kapal Uhuy");
	glutDisplayFunc(Kapal);
	myinit();
	glutMainLoop();
	
}

