#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void Mobil (void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPushMatrix();
	glTranslatef(-0.15, 0.0, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.0, 0.0);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.0, 0.2);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(-0.2, 0.0);
	glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.4, 0.0);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(-0.4, 0.0);
    glVertex2f(-0.4, -0.25);
    glVertex2f(0.9, -0.25);
    glVertex2f(0.9, 0.0);
    glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.25, 0.0, 0.0);
	glRotated(-90.0, 0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.0, 0.0);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.0, 0.2);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(-0.2, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.15, -0.01, 0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); 
    glVertex2f(0.2, 0.0775);
    glVertex2f(0.2, 0.174);
    glVertex2f(0.375, 0.174);
    glVertex2f(0.375, 0.0775);
    glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.12, 0.0674, 0.0);
	glRotated(-90.0, 0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0, 1.0, 1.0); 
	glVertex2f(0.0, 0.1);
	glVertex2f(0.0, 0.2);
	glVertex2f(-0.1, 0.1);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.32, -0.01, 0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); 
    glVertex2f(0.2, 0.0775);
    glVertex2f(0.2, 0.174);
    glVertex2f(0.33, 0.174);
    glVertex2f(0.33, 0.0775);
    glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.12, -0.03, 0.0);
	glRotated(0.0, 0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0, 1.0, 1.0); 
	glVertex2f(0.0, 0.1);
	glVertex2f(0.0, 0.2);
	glVertex2f(-0.1, 0.1);
	glEnd();
	glPopMatrix();
	
    glPushMatrix();
    glTranslatef(0.3, -0.25, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.14159 / 180;
        float x = 0.1 * cos(angle);
        float y = 0.1 * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    
	glColor3f(1.0f, 1.0f, 1.0f); 
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
	    float angle = i * 3.14159 / 180;
	    float x = 0.05 * cos(angle);
	    float y = 0.05 * sin(angle);
	    glVertex2f(x, y);
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.15, -0.25, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.14159 / 180;
        float x = 0.1 * cos(angle);
        float y = 0.1 * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    
	glColor3f(1.0f, 1.0f, 1.0f); 
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
	    float angle = i * 3.14159 / 180;
	    float x = 0.05 * cos(angle);
	    float y = 0.05 * sin(angle);
	    glVertex2f(x, y);
	}
	glEnd();
    glPopMatrix();
    
	glPushMatrix();
	glTranslatef(-0.04, -0.045, 0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); 
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.05);
    glVertex2f(0.05, 0.05);
    glVertex2f(0.05, 0.0);
    glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.05, -0.045, 0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); 
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.05);
    glVertex2f(0.05, 0.05);
    glVertex2f(0.05, 0.0);
    glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.65, -0.06, 0.0);
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0); 
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.05);
    glVertex2f(0.1, 0.05);
    glVertex2f(0.1, 0.0);
    glEnd();
	glPopMatrix();
    
    glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize (640,640);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA); 
	glutCreateWindow("Mobil 2D");
	glutDisplayFunc (Mobil);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
