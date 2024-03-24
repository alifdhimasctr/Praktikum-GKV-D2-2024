/*
Nama: Sultan Alamsyah Borneo Arifin
NIM: 24060122130079
Lab: D2
Nomor 1 - 2
*/

#include <GL/glut.h>
#include <stdlib.h>

void LineTriangleQuad (void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	
	//Fungsi GL Line Strip
	//Posisi gambar: Kiri Atas
	glBegin(GL_LINE_STRIP); 
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.75, 0.75, 0.0);
	glVertex3f(-0.75, 0.55, 0.0);
	glVertex3f(-0.70, 0.45, 0.0);
	glEnd();
	
	//Fungsi GL Line Loop
	//Posisi gambar: Tengah Atas
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.25, 0.75, 0.0);
	glVertex3f(-0.25, 0.55, 0.0);
	glVertex3f(-0.15, 0.40, 0.0);
	glVertex3f(-0.05, 0.55, 0.0);
	glVertex3f(0.10, 0.60, 0.0);
	glEnd();
	
	//Fungsi GL Triangle Fan
	//Posisi gambar: Kanan Atas
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.65, 0.75, 0.0);
	glVertex3f(0.65, 0.55, 0.0);
	glVertex3f(0.55, 0.40, 0.0);
	glVertex3f(0.45, 0.55, 0.0);
	glVertex3f(0.30, 0.60, 0.0);
	glEnd();
	
	//Fungsi GL Triangle Strip
	//Posisi gambar: Kiri Bawah
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.75, -0.55, 0.0);
	glVertex3f(-0.75, -0.35, 0.0);
	glVertex3f(-0.50, -0.20, 0.0);
	glVertex3f(-0.45, -0.35, 0.0);
	glVertex3f(-0.30, -0.40, 0.0);
	glEnd();
	
	
	//Fungsi GL Quads
	//Posisi gambar: Tengah Bawah
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.15, -0.15, 0.0);
	glVertex3f(-0.15, -0.35, 0.0);
	glVertex3f(0.00, -0.35, 0.0);
	glVertex3f(0.10, -0.15, 0.0);
	glVertex3f(-0.15, -0.40, 0.0);
	glVertex3f(-0.15, -0.55, 0.0);
	glVertex3f(0.00, -0.55, 0.0);
	glVertex3f(0.00, -0.40, 0.0);
	glEnd();
	
	//Fungsi GL Quad Strip
	//Posisi gambar: Kanan Bawah
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.45, -0.15, 0.0);
	glVertex3f(0.55, -0.15, 0.0);
	glVertex3f(0.45, -0.35, 0.0);
	glVertex3f(0.60, -0.35, 0.0);
	glVertex3f(0.45, -0.40, 0.0);
	glVertex3f(0.60, -0.40, 0.0);
	glVertex3f(0.45, -0.55, 0.0);
	glVertex3f(0.60, -0.55, 0.0);
	glEnd();
	
	glFlush();
	
	
}

/* Program Utama */

int 
main(int argc, char *argv[])
{	
	glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Nomor 1 - 2");
    glutDisplayFunc(LineTriangleQuad);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();

    return 0;
}

