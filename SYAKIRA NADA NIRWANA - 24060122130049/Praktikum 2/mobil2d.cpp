/*
File     : mobil2d.cpp
Tanggal  : 4 Maret 2024
Pembuat  : Syakira Nada Nirwana - 24060122130049
Deskripsi: Tugas praktikum 2 (membuat sebuah mobil 2D yang memanfaatkan object2 primitif dan 
			transformasi (translasi dan rotasi))
*/

#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>
#define PI 3.1415926535898

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glRotated(-10.0, 0.0, 0.0, 1.0); //rotate di luar stack untuk membuat jalan dan mobil tampak menurun
	
	//jalan
	glPushMatrix();
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glVertex3f(-2.0f, 0.0f, 0.0f);
	glVertex3f(2.0f, 0.0f, 0.0f);
	glVertex3f(2.0f, -2.0f, 0.0f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glEnd();
	glPopMatrix();
	
	// ban kiri depan
	glPushMatrix();
	glTranslatef(0.55, -0.15, 0); //translasi untuk mengatur letak ban
	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.2f, 0.2f);
	int i;
	float angle;
	for (i = 0; i < 360; i++){
	    angle = 2*PI*i/360;
	    glVertex2f(0.1*cos(angle), 0.1*sin(angle));
	}
	glEnd();
    glPopMatrix();
    
	// body
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.9f, 0.0f);
	glVertex3f(-0.53f, 0.23f, 0.0f);
	glVertex3f(-0.62f, 0.033f, 0.0f);
	glVertex3f(-0.66f, -0.018f, 0.0f);
	glVertex3f(-0.7f, -0.19f, 0.0f);
	glVertex3f(-0.517f, -0.238f, 0.0f);
	glVertex3f(-0.1f, -0.249f, 0.0f);
	glVertex3f(0.15f, -0.22f, 0.0f);
	glVertex3f(0.7f, -0.19f, 0.0f);
	glVertex3f(0.67f, -0.158f, 0.0f);
	glVertex3f(0.7f, 0.026f, 0.0f);
	glVertex3f(0.41f, 0.082f, 0.0f);
	glVertex3f(0.27f, 0.3f, 0.0f);
	glVertex3f(-0.13f, 0.31f, 0.0f);
	glEnd();
	glPopMatrix();
	
	// pintu
	glPushMatrix();
	glLineWidth(1.0f);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.4f, 0.0f, 0.0f);
	glVertex3f(-0.413f, -0.22f, 0.0f);
	glEnd();
	glPopMatrix();
	
	// jendela belakang
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.381f, 0.23f, 0.0f);
	glVertex3f(-0.525f, 0.207f, 0.0f);
	glVertex3f(-0.58f, 0.08f, 0.0f);
	glVertex3f(-0.576f, 0.047f, 0.0f);
	glVertex3f(-0.394f, 0.052f, 0.0f);
	glVertex3f(-0.37f, 0.207f, 0.0f);
	glEnd();
	glPopMatrix();

	// jendela depan
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.33f, 0.23f, 0.0f);
	glVertex3f(-0.35f, 0.2f, 0.0f);
	glVertex3f(-0.36f, 0.055f, 0.0f);
	glVertex3f(-0.1f, 0.057f, 0.0f);
	glVertex3f(-0.16f, 0.226f, 0.0f);
	glVertex3f(-0.18f, 0.237f, 0.0f);
	glEnd();
	glPopMatrix();
	
	// kaca depan
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.11f, 0.25f, 0.0f);
	glVertex3f(-0.12f, 0.226f, 0.0f);
	glVertex3f(-0.08f, 0.1f, 0.0f);
	glVertex3f(-0.046f, 0.074f, 0.0f);
	glVertex3f(0.114f, 0.1f, 0.0f);
	glVertex3f(0.28f, 0.103f, 0.0f);
	glVertex3f(0.38f, 0.098f, 0.0f);
	glVertex3f(0.3f, 0.25f, 0.0f);
	glVertex3f(0.28f, 0.27f, 0.0f);
	glEnd();
	glPopMatrix();
    
	// ban kanan belakang
	glPushMatrix();
    glTranslatef(-0.55, -0.2, 0); //translasi untuk mengatur letak ban
	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.2f, 0.2f);
	for (i = 0; i < 360; i++){
	    angle = 2*PI*i/360;
	    glVertex2f(0.1*cos(angle), 0.1*sin(angle));
	}
	glEnd();
    glPopMatrix();
    
    // ban kanan depan
    glPushMatrix();
    glTranslatef(0.0, -0.2, 0); //translasi untuk mengatur letak ban
	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.2f, 0.2f);
	for (i = 0; i < 360; i++){
	    angle = 2*PI*i/360;
	    glVertex2f(0.1*cos(angle), 0.1*sin(angle));
	}
	glEnd();
    glPopMatrix();
    
    // kap mobil
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.237f, 0.088f, 0.0f);
	glVertex3f(0.38f, 0.081f, 0.0f);
	glVertex3f(0.58f, 0.035f, 0.0f);
	glVertex3f(0.6f, -0.026f, 0.0f);
	glVertex3f(0.31f, -0.048f, 0.0f);
	glVertex3f(0.276f, 0.011f, 0.0f);
	glVertex3f(0.2f, 0.037f, 0.0f);
	glVertex3f(0.031f, 0.06f, 0.0f);
	glEnd();
	glPopMatrix();
	
	// depan
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex3f(0.6f, -0.026f, 0.0f);
	glVertex3f(0.31f, -0.048f, 0.0f);
	glVertex3f(0.27f, -0.15f, 0.0f);
	glVertex3f(0.29f, -0.18f, 0.0f);
	glVertex3f(0.63f, -0.16f, 0.0f);
	glVertex3f(0.64f, -0.1f, 0.0f);
	glEnd();
	glPopMatrix();

	// lampu kanan
	glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(0.23, -0.015, 0.0); //translasi untuk mengatur letak lampu
    glutSolidTorus(0.01, 0.03, 50, 50);
    glPopMatrix();
    
    // lampu kiri
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(0.65, 0.0, 0.0); //translasi untuk mengatur letak lampu
    glutSolidTorus(0.01, 0.03, 50, 50);
    glPopMatrix();
	
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mr. Bean's Mini");
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

