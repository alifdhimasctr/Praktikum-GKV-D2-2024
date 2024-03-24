// Nama Program : Mobil.cpp
// Nim/ Nama Pembuat : 24060122140113 / Bima Aditya Aryono
// Deskripsi : Membuat mobil
// Tanggal Dibuat : 03-03-2024


#include <GL/glut.h>
#include <gl/gl.h>
#include <math.h>
void Mobil(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix();
		glBegin(GL_QUAD_STRIP);
			glColor3f(0.0f, 0.0, 0.0); glVertex3f(-0.5,0,0.0);
			glColor3f(0.0, 0.0, 0.0); glVertex3f(0.5,0.0,0.0);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f); glVertex3f(-0.5,0.2,0.0);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f); glVertex3f(0.5,0.2,0.0);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f); glVertex3f(-0.3,0.2,0.0);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f); glVertex3f(0.4,0.5,0.0);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f); glVertex3f(-0.1,0.5,0.0);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f); glVertex3f(0.4,0.5,0.0);
			
						
		glEnd();
	glPopMatrix();
	GLint circle_points = 100;
	int i;
	float angle;
	glPushMatrix();
		#define PI 3.1415926535898
		glTranslatef(-0.2,0.0,0.0);
		glRotated(90.0, 0.0, 0.0, 1.0);
			
		glBegin(GL_TRIANGLE_FAN);
			for(i=0;i<100;i++){
				angle=2*PI*i/circle_points;
				glColor3f(1.0f,1.0f,1.0f);
				glVertex2f(0.1 * cos(angle),0.1* sin(angle));		
				glColor3f(0.0f,1.0f,0.0f);
			}
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		#define PI 3.1415926535898
		glTranslatef(-0.2,0.0,0.0);
		glRotated(90.0, 0.0, 0.0, 1.0);
			
		glBegin(GL_TRIANGLE_FAN);
			for(i=0;i<100;i++){
				angle=2*PI*i/circle_points;
				glColor3f(0.0f,0.0f,0.0f);
				glVertex2f(0.09 * cos(angle),0.09* sin(angle));		
			}
		glEnd();
	glPopMatrix();
	
	
	
	glPushMatrix();
		#define PI 3.1415926535898
		glTranslatef(0.3,0.0,0.0);
		glRotated(90.0, 0.0, 0.0, 1.0);
			
		glBegin(GL_TRIANGLE_FAN);
			for(i=0;i<100;i++){
				angle=2*PI*i/circle_points;
				glColor3f(1.0f,1.0f,1.0f);
				glVertex2f(0.1 * cos(angle),0.1* sin(angle));		
				glColor3f(0.0f,1.0f,0.0f);
			}
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		#define PI 3.1415926535898
		glTranslatef(0.3,0.0,0.0);
		glRotated(90.0, 0.0, 0.0, 1.0);
			
		glBegin(GL_TRIANGLE_FAN);
			for(i=0;i<100;i++){
				angle=2*PI*i/circle_points;
				glColor3f(0.0f,0.0f,0.0f);
				glVertex2f(0.09 * cos(angle),0.09* sin(angle));		
			}
		glEnd();
	glPopMatrix();
	// windshield depan
	glPushMatrix();
		glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(-0.09,0.48,0.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex3f(-0.09,0.28,0.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex3f(-0.22,0.28,0.0);
		glEnd();
	glPopMatrix();
	// windshield tengah
	glPushMatrix();
		glBegin(GL_QUAD_STRIP);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(-0.07,0.48,0.0);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(0.30,0.48,0.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex3f(-0.07,0.28,0.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex3f(0.30,0.28,0.0);
		glEnd();
	glPopMatrix();
	// windshield belakang
	glPushMatrix();
		glTranslatef(0.41,0.0,0.0);
		glBegin(GL_TRIANGLE_STRIP);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex3f(0.04,0.28,0.0);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(-0.03,0.48,0.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex3f(-0.09,0.28,0.0);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex3f(-0.09,0.48,0.0);	
		glEnd();
	glPopMatrix();
	// pemisah windshield tengah
	glPushMatrix();
		glLineWidth(12.0f);
		glBegin(GL_LINES);
			glColor3f(0.1960784313725490196078431372549f, 0.32156862745098039215686274509804f, 0.48235294117647058823529411764706f);
			glVertex3f(0.12,0.28,0.0);
			glVertex3f(0.12,0.48,0.0);
		glEnd();
	glPopMatrix();
	
		// gagang pintu
	glPushMatrix();
		glLineWidth(12.0f);
		glBegin(GL_LINES);
			glColor3f(0.0f, 0.0f, 0.0f);
			glVertex3f(0.05,0.24,0.0);
			glVertex3f(0.105,0.24,0.0);
		glEnd();
	glPopMatrix();
	
			// gagang pintu
	glPushMatrix();
		glLineWidth(12.0f);
		glTranslatef(0.2,0.0,0.0);
		glBegin(GL_LINES);
			glColor3f(0.0f, 0.0f, 0.0f);
			glVertex3f(0.04,0.24,0.0);
			glVertex3f(0.095,0.24,0.0);
		glEnd();
	glPopMatrix();
	
	// knalpot
	glPushMatrix();
		glLineWidth(20.0f);
		glBegin(GL_LINES);
			glColor3f(0.0f, 0.0f, 0.0f);
			glVertex3f(0.5,0.03,0.0);
			glVertex3f(0.55,0.03,0.0);
		glEnd();
	glPopMatrix();

	
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 1600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil Ngueng");
    glutDisplayFunc(Mobil);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
