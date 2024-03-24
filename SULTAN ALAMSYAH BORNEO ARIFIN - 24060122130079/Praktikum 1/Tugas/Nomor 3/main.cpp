/*
 Nama: Sultan Alamsyah Borneo Arifin
 NIM: 24060122130079
 Lab: D2
 Tugas Nomor 3
 */

#include <GL/glut.h>

#include <stdlib.h>



void SegiEmpatBertingkat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f); //Putih
    glRectf(-0.20, 0.30, 0.00, 0.10); //Kotak 4 (kiri atas)
    glRectf(0.01, 0.30, 0.21, 0.10); //Kotak 5 (kanan atas)
    glColor3f(0.0f, 0.0f, 0.0f); //Hitam
    glRectf(-0.10, 0.10, 0.10, -0.10); //Kotak 1 (tengah)
    glRectf(-0.31, 0.10, -0.11, -0.10); //Kotak 2 (kiri bawah)
    glRectf(0.11, 0.10, 0.31, -0.10); // Kotak 3 (kanan bawah)
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Nomor 3");
    glutDisplayFunc(SegiEmpatBertingkat);
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

