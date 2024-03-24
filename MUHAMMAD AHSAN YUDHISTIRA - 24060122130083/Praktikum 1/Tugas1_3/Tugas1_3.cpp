/*  Nama    	: Muhammad Ahsan Yudhistira
	NIM     	: 24060122130083
	Deskripsi 	: Membuat Gambar Kubus bertingkat dari objek primitif
*/

#include <gl/glut.h>
void kubus(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3ub(215, 166, 183);
	glRectf(-0.4, -0.1, -0.2, -0.3);
	glRectf(-0.18, -0.1, 0.02, -0.3);
	glRectf(0.04, -0.1, 0.24, -0.3);
	glFlush();

	glColor3ub(230, 166, 180);
	glRectf(-0.4, 0.122, -0.31, -0.078);
	glRectf(-0.29, 0.122, -0.09, -0.078);
	glRectf(-0.07, 0.122, 0.13, -0.078);
	glRectf(0.15, 0.122, 0.24, -0.078);
	glFlush();

	glColor3ub(169, 210, 230);
	glRectf(-0.4, 0.342, -0.2, 0.142);
	glRectf(-0.18, 0.342, 0.02, 0.142);
	glRectf(0.04, 0.342, 0.24, 0.142);
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("tugas1_3");
	glutDisplayFunc(kubus);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
	return 0;
}
