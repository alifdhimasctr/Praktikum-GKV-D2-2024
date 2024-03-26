/*  Nama    	: Muhammad Ahsan Yudhistira
	NIM     	: 24060122130083
	Deskripsi 	: Membuat Gambar Balok 3D
*/

#include <math.h> 
#include <GL/glut.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <unistd.h>

float rotangle = 0.0;
float rotangle1 = 0.0;
float angle = 0.0, deltaAngle = 0.0, ratio;
float x = 0.0f, y = 3.0f, z = 25.0f;
float lx = 0.0f, ly = 0.0f, lz = -1.0f;
int deltaMove = 0, h, w;
int bitmapHeight = 12;
int i, j, radius, jumlah_titik, x_tengah, y_tengah;
const double PI = 3.141592653589793;

void Reshape(int w1, int h1) {
	// Fungsi reshape 
	if (h1 == 0) h1 = 1;
	w = w1;
	h = h1;
	ratio = 1.0f * w / h;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45, ratio, 0.1, 1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(
		x, y, z,
		x + lx, y + ly, z + lz,
		0.0f, 1.0f, 0.0f);
}

void orientMe(float ang) {
	// Fungsi ini untuk memutar arah kamera (tengok kiri/kanan) 
	lx = sin(ang);
	lz = -cos(ang);
	glLoadIdentity();
	gluLookAt(
		x, y, z,
		x + lx, y + ly, z + lz,
		0.0f, 1.0f, 0.0f);
}

void moveMeFlat(int i)
{
	// Fungsi ini untuk maju mundur kamera 
	x = x + i * (lx) * 0.1;
	z = z + i * (lz) * 0.1;
	glLoadIdentity();
	gluLookAt(
		x, y, z,
		x + lx, y + ly, z + lz,
		0.0f, 1.0f, 0.0f
	);
}

void Grid() {
	// Fungsi untuk membuat grid di "lantai" 
	double i;
	const float Z_MIN = -100, Z_MAX = 100;
	const float X_MIN = -100, X_MAX = 100;
	const float gap = 1.5;

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_LINES);
	for (i = Z_MIN;i < Z_MAX;i += gap) {
		glVertex3f(i, 0, Z_MIN);
		glVertex3f(i, 0, Z_MAX);
	}
	for (i = X_MIN;i < X_MAX;i += gap) {
		glVertex3f(X_MIN, 0, i);
		glVertex3f(X_MAX, 0, i);
	}
	glEnd();
}

void container() {
	glPushMatrix();
	glTranslatef(0, 4, 0);
	// Belakang
	glBegin(GL_QUADS);
	glColor3ub(57, 138, 185);
	glVertex3i(-8, 4, -4);
	glVertex3i(8, 4, -4);
	glVertex3i(8, -4, -4);
	glVertex3i(-8, -4, -4);
	glEnd();

	// Depan
	glBegin(GL_QUADS);
	glColor3ub(100, 50, 90);
	glVertex3i(-8, 4, 4);
	glVertex3i(8, 4, 4);
	glVertex3i(8, -4, 4);
	glVertex3i(-8, -4, 4);
	glEnd();

	// Atas
	glBegin(GL_QUADS);
	glColor3ub(90, 150, 20);
	glVertex3i(-8, 4, -4);
	glVertex3i(8, 4, -4);
	glVertex3i(8, 4, 4);
	glVertex3i(-8, 4, 4);
	glEnd();

	// Kiri
	glBegin(GL_QUADS);
	glColor3ub(20, 138, 230);
	glVertex3i(-8, 4, -4);
	glVertex3i(-8, 4, 4);
	glVertex3i(-8, -4, 4);
	glVertex3i(-8, -4, -4);
	glEnd();

	// Kanan
	glBegin(GL_QUADS);
	glColor3ub(68, 20, 100);
	glVertex3i(8, 4, -4);
	glVertex3i(8, 4, 4);
	glVertex3i(8, -4, 4);
	glVertex3i(8, -4, -4);
	glEnd();

	// Bawah
	glBegin(GL_QUADS);
	glColor3ub(190, 36, 89);
	glVertex3i(-8, -4, -4);
	glVertex3i(8, -4, -4);
	glVertex3i(8, -4, 4);
	glVertex3i(-8, -4, 4);
	glEnd();

	glPopMatrix();
}


void display() {
	usleep(1);
	if (deltaMove) {
		moveMeFlat(deltaMove);
	}

	if (deltaAngle) {
		angle += deltaAngle;
		orientMe(angle);
	}

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);

	Grid();		// Gambar grid
	container();

	glutSwapBuffers();
	glFlush();
}

void pressKey(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_LEFT: deltaAngle = -0.01f; break;
	case GLUT_KEY_RIGHT: deltaAngle = 0.01f; break;
	case GLUT_KEY_UP: deltaMove = 1; break;
	case GLUT_KEY_DOWN: deltaMove = -1; break;
	}
}

void releaseKey(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_LEFT:
	case GLUT_KEY_RIGHT: deltaAngle = 0.0f; break;
	case GLUT_KEY_UP:
	case GLUT_KEY_DOWN: deltaMove = 0; break;
	}
}
void init() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

void Timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(16, Timer, 0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Kamera dan Objek 3D");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(Reshape);
	glutSpecialFunc(pressKey);
	glutSpecialUpFunc(releaseKey);

	glutTimerFunc(16, Timer, 0);

	glutMainLoop();
	return 0;
}