/*
File		: Tugas1_No3_Vincentius Setyawan Widyahadi_24060122120006
Tanggal		: Minggu, 25 - 02 - 2024
Nama		: Vincentius Setyawan Widyahadi 24060122120006
Deskripsi	: membuat Gambar Kubus bertingkat dari objek primitif sekreatif mungkin.
*/

#include <gl/glut.h>

void SegiEmpat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Kotak 1
	//Oranye
	glColor3f(1.0f,0.5f,0.0f);
	glRectf(-0.2,0.2,0.2,-0.2);
	
	//Kotak 2
	//Pink
	glColor3f(1.0f, 0.0f, 0.5f);
	glRectf(-0.4, 0.6, -0.6, 0.4);
	
	//Kotak 3
	// Hijau Muda
	glColor3f(0.5f, 1.0f, 0.0f);
    glRectf(0.3, 0.8, 0.8, 0.3);
	
	//Kotak 4
	// Biru Muda
    glColor3f(0.0f, 0.5f, 1.0f);
    glRectf(-0.6, -0.2, -0.4, -0.6);
	
	//Kotak 5
	// Ungu
	glColor3f(0.5f, 0.0f, 0.5f);
	glRectf(0.4, 0.0, 0.5, -0.4);
	glFlush();
	
	
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(600,500);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("TUGAS NO 3");
	glutDisplayFunc(SegiEmpat);
	
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glutMainLoop();
	return 0;
}
