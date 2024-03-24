#include <iostream>
#include <fstream>
#include <stdio.h>
#include <gl/glut.h>
#include <math.h>

using namespace std;

float angle = 0.0;
float carPosX = 0.0f;
int xDir = 0;

void myInit() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void keyboardIn(unsigned char key, int x, int y) {
	if (key == 'd') {
		xDir = 1;
	}
	
	if (key == 32) { // space key (brake)
		xDir = 0;
	}
	
	if (key == 'a') {
		xDir = -1;
	}

	if (key == 27) { // escape key (close window)
		exit(0);
	}
}

void background(void) {
	glPushMatrix();
		glBegin(GL_POLYGON); // grass
			glColor3ub(90, 139, 49);
			glVertex2f(-1.1f, -1.1f);
			glVertex2f(1.1f, -1.1f);
			glVertex2f(1.1f, -0.4f);
			glVertex2f(-1.1f, -0.4f);
		glEnd();
		glBegin(GL_POLYGON); // sky
			glColor3ub(113, 188, 225);
			glVertex2f(-1.1f, -0.4f);
			glVertex2f(1.1f, -0.4f);
			glVertex2f(1.1f, 1.1f);
			glVertex2f(-1.1f, 1.1f);
		glEnd();
	glPopMatrix();
}

void railStrip(void) {
	float offset = 0.0f;
	
	for (int i = 0; i < 5; i++) {
		glPushMatrix();
			glBegin(GL_POLYGON); // rail
				glColor3ub(175, 175, 175);
				glVertex2f(offset-0.2f, -0.7f);
				glVertex2f(offset+0.2f, -0.7f);
				glVertex2f(offset+0.2f, -0.74f);
				glVertex2f(offset-0.2f, -0.74f);
			glEnd();
			glBegin(GL_POLYGON);
				glColor3ub(143, 95, 49);
				glVertex2f(offset-0.075f, -0.74f);
				glVertex2f(offset+0.075f, -0.74f);
				glVertex2f(offset+0.075f, -0.80f);
				glVertex2f(offset-0.075f, -0.80f);
			glEnd();
		glPopMatrix();
		
		glBegin(GL_POLYGON); // rail
				glColor3ub(175, 175, 175);
				glVertex2f(-offset-0.2f, -0.7f);
				glVertex2f(-offset+0.2f, -0.7f);
				glVertex2f(-offset+0.2f, -0.74f);
				glVertex2f(-offset-0.2f, -0.74f);
			glEnd();
			glBegin(GL_POLYGON);
				glColor3ub(143, 95, 49);
				glVertex2f(-offset-0.075f, -0.74f);
				glVertex2f(-offset+0.075f, -0.74f);
				glVertex2f(-offset+0.075f, -0.80f);
				glVertex2f(-offset-0.075f, -0.80f);
			glEnd();
		glPopMatrix();	
		offset += 0.4f;
	}
}

void creeper(void) {
	glPushMatrix();
		glTranslatef(0.0f, 0.6f, 0.0f);
		glPushMatrix();
			glBegin(GL_POLYGON); // body
				glColor3ub(27, 141, 50);
				glVertex2f(-0.15f, -0.45f);
				glVertex2f(0.15f, -0.45f);
				glVertex2f(0.15f, 0.0f);
				glVertex2f(-0.15f, 0.0f);
			glEnd();
		glPopMatrix();
		glPushMatrix();
			glBegin(GL_POLYGON); // head
				glColor3ub(29, 181, 60);
				glVertex2f(-0.15f, -0.15f);
				glVertex2f(0.15f, -0.15f);
				glVertex2f(0.15f, 0.15f);
				glVertex2f(-0.15f, 0.15f);
			glEnd();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.06f, 0.06f, 0.0f);
			glBegin(GL_QUADS);
				glColor3ub(0, 0, 0);
				glVertex2f(-0.03f, -0.03f);
				glVertex2f(0.03f, -0.03f);
				glVertex2f(0.03f, 0.03f);
				glVertex2f(-0.03f, 0.03f);
			glEnd();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.06f, 0.06f, 0.0f);
			glBegin(GL_QUADS);
				glColor3ub(0, 0, 0);
				glVertex2f(-0.03f, -0.03f);
				glVertex2f(0.03f, -0.03f);
				glVertex2f(0.03f, 0.03f);
				glVertex2f(-0.03f, 0.03f);
			glEnd();
		glPopMatrix();
		glPushMatrix();
			glBegin(GL_QUADS);
				glColor3ub(0, 0, 0);
				glVertex2f(-0.03f, -0.045f);
				glVertex2f(0.03f, -0.045f);
				glVertex2f(0.03f, 0.03f);
				glVertex2f(-0.03f, 0.03f);
				
				glVertex2f(-0.03f, -0.095f);
				glVertex2f(-0.06f, -0.095f);
				glVertex2f(-0.06f, -0.0025f);
				glVertex2f(-0.03f, -0.0025f);
				
				glVertex2f(0.03f, -0.095f);
				glVertex2f(0.06f, -0.095f);
				glVertex2f(0.06f, -0.0025f);
				glVertex2f(0.03f, -0.0025f);
			glEnd();
		glPopMatrix();
	glPopMatrix();
}

void body(void) {
	glPushMatrix();
		glBegin(GL_TRIANGLE_FAN);
			glColor3ub(100, 100, 100);
			glVertex2f(-0.5f, -0.3f);
			glVertex2f(0.5f, -0.3f);
			glVertex2f(0.5f, 0.3f);
			glVertex2f(-0.5f, 0.3f);
		glEnd();
	glPopMatrix();
}

void wheels(void) {
	glPushMatrix(); // roda depan
		glTranslatef(-0.275f, -0.3f, 0.0f);
		glRotatef(angle, 0.0f, 0.0f, 1.0f);
		glBegin(GL_POLYGON);
			glColor3ub(25, 25, 25);
			glVertex2f(0.000f, 0.100f);
			glVertex2f(0.075f, 0.075f);
			glVertex2f(0.100f, 0.000f);
			glVertex2f(0.075f, -0.075f);
			glVertex2f(0.000f, -0.100f);
			glVertex2f(-0.075f, -0.075f);
			glVertex2f(-0.100f, 0.000f);
			glVertex2f(-0.075f, 0.075f);
		glEnd();
	glPopMatrix();
	
	glPushMatrix(); // roda depan
		glTranslatef(0.275f, -0.3f, 0.0f);
		glRotatef(angle, 0.0f, 0.0f, 1.0f);
		glBegin(GL_POLYGON);
			glColor3ub(25, 25, 25);
			glVertex2f(0.000f, 0.100f);
			glVertex2f(0.075f, 0.075f);
			glVertex2f(0.100f, 0.000f);
			glVertex2f(0.075f, -0.075f);
			glVertex2f(0.000f, -0.100f);
			glVertex2f(-0.075f, -0.075f);
			glVertex2f(-0.100f, 0.000f);
			glVertex2f(-0.075f, 0.075f);
		glEnd();
	glPopMatrix();
}

void car(void) {
	glPushMatrix();
		glTranslatef(0.0f, -0.3f, 0.0f);
		glTranslatef(carPosX, 0.0f, 0.0f);
		creeper();
		body();
		wheels();
	glPopMatrix();
}

void renderBitmap(float x, float y, void *font, char *string) {
	char *c;
	glRasterPos2f(x, y);
	for (c = string; *c != '\0'; c++) {
		glutBitmapCharacter(font, *c);
	}
}

void text(void) {
	glColor3ub(0, 0, 0);
	char buf[100] = {0};
	sprintf(buf, "tekan d untuk ke kanan");
	renderBitmap(-0.9, 0.9, GLUT_BITMAP_TIMES_ROMAN_24, buf);
	sprintf(buf, "tekan a untuk ke kiri");
	renderBitmap(-0.9, 0.825, GLUT_BITMAP_TIMES_ROMAN_24, buf);
	sprintf(buf, "tekan space untuk berhenti");
	renderBitmap(-0.9, 0.75, GLUT_BITMAP_TIMES_ROMAN_24, buf);
	sprintf(buf, "tekan escape untuk keluar");
	renderBitmap(-0.9, 0.675, GLUT_BITMAP_TIMES_ROMAN_24, buf);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	background();
	railStrip();
	text();
	car();
	glutSwapBuffers();
	glFlush();
}

void update(int value) {
	angle -= 5.0f*xDir;
	if (angle <= -360) {
		angle = 0;
	}
	
	glutKeyboardFunc(keyboardIn);
	carPosX += 0.01*xDir;
	
	glutPostRedisplay();
	glutTimerFunc(5, update, 0);
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 800);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Qun Alfadrian - 24060122130072");
	myInit();
	glutDisplayFunc(display);
	glutTimerFunc(0, update, 0);
	glutMainLoop();
	return 0;
}
