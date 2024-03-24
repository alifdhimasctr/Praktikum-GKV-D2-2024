/*
  File : soal3.cpp	26/2/2024
  Penulis : Alwey Hakim
  Deskripsi : Source code untuk praktikum 1, tugas ke-3
 */

#include <GL/glut.h>

void soal3(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0.01, -0.2, 0.11, -0.1);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0, -0.2, -0.1, -0.1);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0.12, -0.2, 0.22, -0.1);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0.055, -0.09, 0.155, 0.01);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0.045, -0.09, -0.055, 0.01);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0.105, 0.02, 0.005, 0.12);
    
    glColor3f(0.21, 0.11, 0.06);
    glRectf(0.105, 0.13, 0.005, 0.23);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(-0.046, 0.24, 0.054, 0.34);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(0.064, 0.24, 0.164, 0.34);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(0.005, 0.35, 0.105, 0.45);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(-0.105, 0.35, -0.005, 0.45);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(0.115, 0.35, 0.215, 0.45);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(-0.046, 0.46, 0.054, 0.56);
    
    glColor3f(0.08, 0.21, 0.09);
    glRectf(0.064, 0.46, 0.164, 0.56);
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Soal 3");
    glutDisplayFunc(soal3);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}
