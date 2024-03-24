/*
File     : 3kubus.cpp
Tanggal  : 26 Februari 2024
Pembuat  : Syakira Nada Nirwana - 24060122130049
Deskripsi: Tugas praktikum 1 nomor 3 (gambar kubus bertingkat)
*/

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Muka
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.6f, 0.3f, 0.0f);
    glVertex3f(0.6f, 0.3f, 0.0f);
    glVertex3f(0.6f, -0.3f, 0.0f);
    glVertex3f(-0.6f, -0.3f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.5f, 0.4f, 0.0f);
    glVertex3f(0.5f, 0.4f, 0.0f);
    glVertex3f(0.5f, 0.3f, 0.0f);
    glVertex3f(-0.5f, 0.3f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.5f, -0.4f, 0.0f);
    glVertex3f(0.5f, -0.4f, 0.0f);
    glVertex3f(0.5f, -0.3f, 0.0f);
    glVertex3f(-0.5f, -0.3f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.4f, 0.5f, 0.0f);
    glVertex3f(0.4f, 0.5f, 0.0f);
    glVertex3f(0.4f, 0.4f, 0.0f);
    glVertex3f(-0.4f, 0.4f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.4f, -0.5f, 0.0f);
    glVertex3f(0.4f, -0.5f, 0.0f);
    glVertex3f(0.4f, -0.4f, 0.0f);
    glVertex3f(-0.4f, -0.4f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.3f, 0.6f, 0.0f);
    glVertex3f(0.3f, 0.6f, 0.0f);
    glVertex3f(0.3f, 0.5f, 0.0f);
    glVertex3f(-0.3f, 0.5f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.3f);
    glVertex3f(-0.3f, -0.6f, 0.0f);
    glVertex3f(0.3f, -0.6f, 0.0f);
    glVertex3f(0.3f, -0.5f, 0.0f);
    glVertex3f(-0.3f, -0.5f, 0.0f);
    glEnd();
    
    //Mata
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.2f, 0.3f, 0.0f);
    glVertex3f(-0.1f, 0.3f, 0.0f);
    glVertex3f(-0.1f, 0.0f, 0.0f);
    glVertex3f(-0.2f, 0.0f, 0.0f);
    glEnd();
    
    //Mata
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);
    glVertex3f(0.1f, 0.3f, 0.0f);
    glVertex3f(0.1f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.0f, 0.0f);
    glEnd();
    
    //Mulut
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.2f, -0.3f, 0.0f);
    glVertex3f(0.2f, -0.3f, 0.0f);
    glVertex3f(0.2f, -0.4f, 0.0f);
    glVertex3f(-0.2f, -0.4f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.3f, -0.2f, 0.0f);
    glVertex3f(-0.2f, -0.2f, 0.0f);
    glVertex3f(-0.2f, -0.3f, 0.0f);
    glVertex3f(-0.3f, -0.3f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.3f, -0.2f, 0.0f);
    glVertex3f(0.2f, -0.2f, 0.0f);
    glVertex3f(0.2f, -0.3f, 0.0f);
    glVertex3f(0.3f, -0.3f, 0.0f);
    glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.4f, -0.1f, 0.0f);
    glVertex3f(-0.3f, -0.1f, 0.0f);
    glVertex3f(-0.3f, -0.2f, 0.0f);
    glVertex3f(-0.4f, -0.2f, 0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.4f, -0.1f, 0.0f);
    glVertex3f(0.3f, -0.1f, 0.0f);
    glVertex3f(0.3f, -0.2f, 0.0f);
    glVertex3f(0.4f, -0.2f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Smiley Face");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
