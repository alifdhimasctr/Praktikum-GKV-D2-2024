/*
  File : Praktikum2/tugas1.cpp	4/3/2024
  Penulis : Alwey Hakim
  Deskripsi : Membuat sebuah lingkaran.
 */

#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void lingkaran(){
	glClear(GL_COLOR_BUFFER_BIT);
	#define PI 3.1415926535898
		glBegin(GL_LINE_LOOP);
			GLint circle_points = 100; int i; float angle;
			for (i = 0; i < circle_points; i++){
				angle = 2*PI*i/circle_points;
				glVertex2f(cos(angle)/2, sin(angle)/2);
			}
		glEnd();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 600);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Lingkaran");
	glutDisplayFunc(lingkaran);
	glClearColor(0,0,1,1);
	glutMainLoop();
	return 0;
}
