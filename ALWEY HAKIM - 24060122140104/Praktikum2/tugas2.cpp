/*
  File : Praktikum2/tugas2.cpp	4/3/2024
  Penulis : Alwey Hakim
  Deskripsi : Membuat mobil 2D menggunakan objek-objek primitif, transformasi (translasi dan rotasi), dan stack.
 */
 
#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void mobil(){
	glClear(GL_COLOR_BUFFER_BIT);
		glPushMatrix(); // Body mobil
		glColor3f(0.97, 0.97, 0.007);
		glTranslatef(-0.6, -0.8, 0);
			glBegin(GL_QUAD_STRIP);
				glVertex3f(0.05, 0, 0);
				glVertex3f(0.05, 0.1, 0);
				glVertex3f(0.3, 0, 0);
				glVertex3f(0.3, 0.15, 0);
				glVertex3f(0.4, 0, 0);
				glVertex3f(0.4, 0.35, 0);
				glVertex3f(0.89, 0, 0);	
				glVertex3f(0.85, 0.35, 0);	
			glEnd();
		glPopMatrix();
		
		glPushMatrix(); // Ban depan
			glTranslatef(-0.35, -0.8, 0);
			#define PI 3.1415926535898
			glBegin(GL_TRIANGLE_FAN); // Bagian ban luar
				glColor3f(0, 0, 0);
				glVertex3f(0, 0, 0);
				GLint circle_points = 100; int i; float angle;
				for (i = 0; i < circle_points; i++){
					angle = 2*PI*i/circle_points;
					glVertex2f(cos(angle)/12, sin(angle)/10);
				}
				glVertex2f(cos(0)/12, sin(0)/10);
			glEnd();
			glBegin(GL_TRIANGLE_FAN); // Bagian ban dalam
				glColor3f(0.4, 0.4, 0.4);
				for (i = 0; i < circle_points; i++){
					angle = 2*PI*i/circle_points;
					glVertex2f(cos(angle)/20, sin(angle)/16);
				}
				glVertex2f(cos(0)/20, sin(0)/16);
			glEnd();
			glBegin(GL_TRIANGLE_FAN);
				glColor3f(0.3, 0.3, 0.3);
				glVertex3f(0, 0, 0);
				glVertex3f(-0.04, 0.04, 0);
				glVertex3f(0.04, 0.04, 0);
			glEnd();
			glPushMatrix();
				glRotated(180, 0, 0, 1);
				glBegin(GL_TRIANGLE_FAN);
					glColor3f(0.3, 0.3, 0.3);
					glVertex3f(0, 0, 0);
					glVertex3f(-0.04, 0.04, 0);
					glVertex3f(0.04, 0.04, 0);
				glEnd();
			glPopMatrix();
		glPopMatrix();
		glPushMatrix(); // Ban belakang
			glTranslatef(0.1, -0.8, 0);
			#define PI 3.1415926535898
			glBegin(GL_TRIANGLE_FAN); // Bagian ban luar
				glColor3f(0, 0, 0);
				glVertex3f(0, 0, 0);
				for (i = 0; i < circle_points; i++){
					angle = 2*PI*i/circle_points;
					glVertex2f(cos(angle)/12, sin(angle)/10);
				}
				glVertex2f(cos(0)/12, sin(0)/10);
			glEnd();
			glBegin(GL_TRIANGLE_FAN); // Bagian ban dalam
				glColor3f(0.4, 0.4, 0.4);
				for (i = 0; i < circle_points; i++){
					angle = 2*PI*i/circle_points;
					glVertex2f(cos(angle)/20, sin(angle)/16);
				}
				glVertex2f(cos(0)/20, sin(0)/16);
			glEnd();
			glBegin(GL_TRIANGLE_FAN);
				glColor3f(0.3, 0.3, 0.3);
				glVertex3f(0, 0, 0);
				glVertex3f(-0.04, 0.04, 0);
				glVertex3f(0.04, 0.04, 0);
			glEnd();
			glPushMatrix();
				glRotated(180, 0, 0, 1);
				glBegin(GL_TRIANGLE_FAN);
					glColor3f(0.3, 0.3, 0.3);
					glVertex3f(0, 0, 0);
					glVertex3f(-0.04, 0.04, 0);
					glVertex3f(0.04, 0.04, 0);
				glEnd();
			glPopMatrix();
		glPopMatrix();
		glPushMatrix(); // Jendela
			glTranslatef(-0.6, -0.8, 0);
			glColor3f(0.23, 0.40, 0.85);
			glBegin(GL_QUAD_STRIP); // Jendela depan
				glVertex3f(0.31, 0.15, 0);
				glVertex3f(0.405, 0.34, 0);
				glVertex3f(0.50, 0.15, 0);
				glVertex3f(0.50, 0.34, 0);
			glEnd();
			glBegin(GL_QUAD_STRIP); // Jendela tengah
				glVertex3f(0.51, 0.15, 0);
				glVertex3f(0.51, 0.34, 0);
				glVertex3f(0.7, 0.15, 0);
				glVertex3f(0.7, 0.34, 0);
			glEnd();
			glBegin(GL_QUAD_STRIP); // Jendela belakang
				glVertex3f(0.71, 0.15, 0);
				glVertex3f(0.71, 0.34, 0);
				glVertex3f(0.865, 0.15, 0);	
				glVertex3f(0.847, 0.34, 0);	
			glEnd();
		glPopMatrix();
		glPushMatrix(); // Handle pintu depan
			glTranslatef(-0.15, -0.72, 0);
			glColor3f(0.4, 0.4, 0.4);
			glBegin(GL_TRIANGLE_STRIP);
				glVertex3f(0, 0.05, 0);
				glVertex3f(0, 0.05, 0);
				glVertex3f(0.01, 0.02, 0);
				glVertex3f(0.05, 0.05, 0);
			glEnd();
		glPopMatrix();
		glPushMatrix(); // Handle pintu belakang
			glTranslatef(0.05, -0.72, 0);
			glColor3f(0.4, 0.4, 0.4);
			glBegin(GL_TRIANGLE_STRIP);
				glVertex3f(0, 0.05, 0);
				glVertex3f(0, 0.05, 0);
				glVertex3f(0.01, 0.02, 0);
				glVertex3f(0.05, 0.05, 0);
			glEnd();
		glPopMatrix();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Mobil");
	glutDisplayFunc(mobil);
	glClearColor(0,0,1,1);
	glutMainLoop();
	return 0;
}
