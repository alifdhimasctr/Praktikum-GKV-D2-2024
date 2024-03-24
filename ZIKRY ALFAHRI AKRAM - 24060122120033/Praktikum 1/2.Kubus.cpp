/*
	Nama		: Zikry Alfahri Akram
	NIM			: 24060122120033
	Tanggal		: Selasa, 20 Februari 2024
	Deskripsi	: Tugas Pertemuan 1 Nomor 3 Kubus
*/

#include <gl/glut.h> 

void Kubus (void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Border Papan Catur
	// Atas
    glColor3f(0.5f, 0.5f, 0.5f);
    glRectf(-0.9, 0.8, 0.9, 0.9);
    
    // Kiri
    glColor3f(0.5f, 0.0f, 0.0f);
    glRectf(-0.9, 0.8, -0.8, -0.8);
    
    // Kanan 
    glColor3f(0.5f, 0.0f, 0.0f);
    glRectf(0.8, 0.8, 0.9, -0.8);
    
	//  Bawah
    glColor3f(0.5f, 0.5f, 0.5f);
    glRectf(-0.9, -0.8, 0.9, -0.9);
    
    
	// Petak Catur (Putih)
	// Baris 1
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.8, 0.8, -0.6, 0.6);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.8, 0.4, -0.6, 0.2);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.8, 0.0, -0.6, -0.2);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.8, -0.4, -0.6, -0.6);
    
	// Baris 2
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.6, 0.6, -0.4, 0.4);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.6, 0.2, -0.4, 0.0);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.6, -0.2, -0.4, -0.4);

	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.6, -0.6, -0.4, -0.8);
    
    // Baris 3
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.4, 0.8, -0.2, 0.6);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.4, 0.4, -0.2, 0.2);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.4, 0.0, -0.2, -0.2);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.4, -0.4, -0.2, -0.6);

    // Baris 4
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2, 0.6, 0.0, 0.4);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2, 0.2, 0.0, 0.0);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2, -0.2, 0.0, -0.4);

	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2, -0.6, 0.0, -0.8);

	// Baris 5
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.0, 0.8, 0.2, 0.6);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.0, 0.4, 0.2, 0.2);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.0, 0.0, 0.2, -0.2);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.0, -0.4, 0.2, -0.6);
    
	// Baris 6
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.2, 0.6, 0.4, 0.4);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.2, 0.2, 0.4, 0.0);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.2, -0.2, 0.4, -0.4);

	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.2, -0.6, 0.4, -0.8);
    
    // Baris 7
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.4, 0.8, 0.6, 0.6);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.4, 0.4, 0.6, 0.2);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.4, 0.0, 0.6, -0.2);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.4, -0.4, 0.6, -0.6);

    // Baris 8
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.6, 0.6, 0.8, 0.4);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.6, 0.2, 0.8, 0.0);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.6, -0.2, 0.8, -0.4);

	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.6, -0.6, 0.8, -0.8);
    
	glFlush();
}

int main (int argc, char* argv[])
{
    glutInit(&argc, argv);
	glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Kubus");
	glutDisplayFunc(Kubus);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glutMainLoop();
	return 0;
}
