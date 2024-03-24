/*Nama	: Pujiani Rahayu Agustin
NIM		: 24060122130067
Tugas Praktikum GKV D2 Pertemuan 2*/

#include <GL/glut.h>
#include <gl/gl.h>
#include <math.h>

void Mobil(void) {
    glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix();
    	glColor3f(0.0f, 0.0f, 0.0f);
    	glBegin(GL_QUADS);
    	glVertex2f(-1.0, -0.1);
	    glVertex2f(1.0, -0.1);
	    glVertex2f(1.0, -0.4);
	    glVertex2f(-1.0, -0.4);
	    
	    glColor3f(0.0f, 0.9f, 0.4f);
	    glVertex2f(-1.0, -0.4);
	    glVertex2f(1.0, -0.4);
	    glVertex2f(1.0, -1);
	    glVertex2f(-1.0, -1);
	    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.2f, 0.2f); 
    glVertex2f(-0.85, 0.25);
    glVertex2f(-0.35, 0.25);
    glVertex2f(-0.35, 0.0);
    glVertex2f(-0.85, 0.0);

    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.85, 0.2);
    glVertex2f(-0.85, 0.0);
    glVertex2f(-0.9, 0.0);
    
    glVertex2f(-0.9, 0.15);
    glVertex2f(-0.85, 0.15);
    glVertex2f(-0.85, 0.05);
    glVertex2f(-0.9, 0.05);
    
    glVertex2f(-0.95, 0.15);
    glVertex2f(-0.9, 0.15);
    glVertex2f(-0.9, 0.05);
    glVertex2f(-0.95, 0.05);
    
    glColor3f(1.0f, 1.0f, 0.0f); 
    glVertex2f(-0.95, 0.05);
    glVertex2f(-0.9, 0.05);
    glVertex2f(-0.9, -0.05);
    glVertex2f(-0.95, -0.05);
    
    glColor3f(0.5f, 0.2f, 0.2f); 
    glVertex2f(-0.95, -0.15);
    glVertex2f(-0.9, -0.15);
    glVertex2f(-0.9, -0.05);
    glVertex2f(-0.95, -0.05);
     
    glVertex2f(-0.9, -0.2);
    glVertex2f(-0.8, -0.2);
    glVertex2f(-0.8, -0.0);
    glVertex2f(-0.9, -0.0);
    
    glVertex2f(-0.8, 0.0);
    glVertex2f(-0.75, 0.0);
    glVertex2f(-0.75, -0.1);
    glVertex2f(-0.8, -0.1);
    
    glVertex2f(-0.75, 0.0);
    glVertex2f(-0.7, 0.0);
    glVertex2f(-0.7, -0.05);
    glVertex2f(-0.75, -0.05);
    
    glVertex2f(-0.35, 0.3);
    glVertex2f(-0.25, 0.3);
    glVertex2f(-0.25, -0.0);
    glVertex2f(-0.35, -0.0);
    
    glColor3f(0.0f, 0.8f, 1.0f); 
    glVertex2f(-0.15, 0.4);
    glVertex2f(0.15, 0.4);
    glVertex2f(0.15, 0.35);
    glVertex2f(-0.15, 0.35);
    
    glVertex2f(-0.2, 0.35);
    glVertex2f(0.2, 0.35);
    glVertex2f(0.2, 0.3);
    glVertex2f(-0.2, 0.3);
    
    glVertex2f(-0.25, 0.3);
    glVertex2f(0.25, 0.3);
    glVertex2f(0.25, 0.25);
    glVertex2f(-0.25, 0.25);
    
    glVertex2f(-0.25, 0.25);
    glVertex2f(0.3, 0.25);
    glVertex2f(0.3, 0.2);
    glVertex2f(-0.25, 0.2);
    
    glColor3f(1.0f, 0.0f, 0.0f); 
    glVertex2f(-0.25, 0.3);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.25, 0.2);
    
    glColor3f(0.5f, 0.2f, 0.2f); 
    glVertex2f(-0.25, 0.2);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.2, 0.0);
    glVertex2f(-0.25, 0.0);
    
    glVertex2f(-0.35, 0.3);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.2, 0.25);
    glVertex2f(-0.35, 0.25);
    
    glVertex2f(-0.3, 0.35);
    glVertex2f(-0.15, 0.35);
    glVertex2f(-0.15, 0.3);
    glVertex2f(-0.3, 0.3);
    
    glVertex2f(-0.25, 0.4);
    glVertex2f(-0.1, 0.4);
    glVertex2f(-0.1, 0.35);
    glVertex2f(-0.25, 0.35);
    
    glVertex2f(-0.2, 0.45);
    glVertex2f(0.3, 0.45);
    glVertex2f(0.3, 0.4);
    glVertex2f(-0.2, 0.4);
    
    glVertex2f(-0.15, 0.5);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.2, 0.45);
    glVertex2f(-0.15, 0.45);
    
    glVertex2f(0.15, 0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, 0.35);
    glVertex2f(0.15, 0.35);
    
    glVertex2f(0.2, 0.35);
    glVertex2f(0.5, 0.35);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.2, 0.3);
     
    glVertex2f(0.25, 0.3);
    glVertex2f(0.55, 0.3);
    glVertex2f(0.55, 0.25);
    glVertex2f(0.25, 0.25);
    
    glVertex2f(0.3, 0.25);
    glVertex2f(0.8, 0.25);
    glVertex2f(0.8, 0.0);
    glVertex2f(0.3, 0.0);
    
    glVertex2f(0.8, 0.2);
    glVertex2f(0.9, 0.2);
    glVertex2f(0.9, 0.0);
    glVertex2f(0.8, 0.0);
    
    glVertex2f(-0.2, 0.2);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.3, 0.0);
    glVertex2f(-0.2, 0.0);
    
    glVertex2f(0.9, 0.1);
    glVertex2f(0.95, 0.1);
    glVertex2f(0.95, 0.0);
    glVertex2f(0.9, 0.0);
    
    glVertex2f(0.85, 0.0);
    glVertex2f(0.9, 0.0);
    glVertex2f(0.9, -0.1);
    glVertex2f(0.85, -0.1);
    
    glVertex2f(0.85, -0.05);
    glVertex2f(0.5, -0.05);
    glVertex2f(0.5, -0.1);
    glVertex2f(0.85, -0.1);
    
    glVertex2f(0.55, -0.1);
    glVertex2f(0.8, -0.1);
    glVertex2f(0.8, -0.15);
    glVertex2f(0.55, -0.15);
    
    glVertex2f(0.55, -0.15);
    glVertex2f(0.7, -0.15);
    glVertex2f(0.7, -0.2);
    glVertex2f(0.55, -0.2);
    
    glVertex2f(-0.75, -0.05);
    glVertex2f(0.5, -0.05);
    glVertex2f(0.5, -0.1);
    glVertex2f(-0.75, -0.1);
    
    glVertex2f(-0.35, -0.1);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.1, -0.2);
    glVertex2f(-0.35, -0.2);
    
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.58f, -0.15f, 0.0f); 
		glScalef(0.17f, 0.17f, 1.0f); 
		#define PI 3.1415926535898
		glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.2f, 0.2f, 0.2f);
			GLint circle_points =
			100; int i;
			float angle;
			for (i=0; i < circle_points; i++){
				angle = 2*PI*i/circle_points;
				glVertex2f(cos(angle), sin(angle));
			}
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.33f, -0.15f, 0.0f); 
		glScalef(0.17f, 0.17f, 1.0f); 
		#define PI 3.1415926535898
		glBegin(GL_TRIANGLE_FAN);
			GLint circlepoints =
			100; int j;
			float a;
			for (j=0; j < circlepoints; j++){
				a = 2*PI*j/circlepoints;
				glVertex2f(cos(a), sin(a));
			}
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glLineWidth(2.0f);
		glTranslatef(0.33f, -0.15f, 0.0f); 
		glRotated(60.0, 0, 0, 1.0);
		glScalef(0.17f, 0.17f, 0.17f); 
		#define PI 3.1415926535898
		glBegin(GL_LINES);
		glColor3f(0.6f, 0.6f, 0.6f);
			GLint circle =
			100; int k;
			float b;
			for (k=0; k < circle; k++){
				b = 2*PI*k/circle;
				glVertex2f(cos(b), sin(b));
			}
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(-0.58f, -0.15f, 0.0f); 
		glRotated(60.0, 0, 0, 1.0);
		glScalef(0.17f, 0.17f, 0.17f); 
		#define PI 3.1415926535898
		glBegin(GL_LINES);
		glColor3f(0.6f, 0.6f, 0.6f);
			GLint circles =
			100; int m;
			float c;
			for (m=0; m < circles; m++){
				c = 2*PI*m/circles;
				glVertex2f(cos(c), sin(c));
			}
		glEnd();
	glPopMatrix();
				
	glPushMatrix();
	glLineWidth(5.0f);
		glRotated(55.0, 0.33, -0.15, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.7f, 0.7f, 0.7f);
		glVertex2f(0.33, -0.1);
		glVertex2f(0.33, -0.2);
		
		glVertex2f(0.28, -0.15);
		glVertex2f(0.38, -0.15);
		glEnd();
	glPopMatrix();	
	
	glPushMatrix();
	glLineWidth(5.0f);
		glRotated(55.0, -0.58, -0.15, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.7f, 0.7f, 0.7f);
		glVertex2f(-0.58, -0.1);
		glVertex2f(-0.58, -0.2);
		
		glVertex2f(-0.53, -0.15);
		glVertex2f(-0.63, -0.15);
		glEnd();
	glPopMatrix();
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Gambar Mobil");
    glutDisplayFunc(Mobil);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
