/*
File     : 2primitive.cpp
Tanggal  : 26 Februari 2024
Pembuat  : Syakira Nada Nirwana - 24060122130049
Deskripsi: Tugas praktikum 1 nomor 2 (menggunakan fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
			GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.)
*/

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Dinding
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.7f, 0.4f);
    glVertex3f(-0.5f, 0.2f, 0.0f);
    glVertex3f(0.5f, 0.2f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glEnd();
    
    // Menara kanan
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.9f, 0.8f, 0.7f);
    glVertex3f(0.45f, 0.5f, 0.0f);
    glVertex3f(0.7f, 0.5f, 0.0f);
    glVertex3f(0.5f, 0.45f, 0.0f);
    glVertex3f(0.65f, 0.45f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(0.65f, -0.5f, 0.0f);
    glEnd();
    
    // Menara kiri
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.9f, 0.8f, 0.7f);
    glVertex3f(-0.45f, 0.5f, 0.0f);
    glVertex3f(-0.7f, 0.5f, 0.0f);
    glVertex3f(-0.5f, 0.45f, 0.0f);
    glVertex3f(-0.65f, 0.45f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(-0.65f, -0.5f, 0.0f);
    glEnd();
    
    // Atap menara kanan
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.9f, 0.4f, 0.3f);
    glVertex3f(0.575f, 0.65f, 0.0f);
    glVertex3f(0.45f, 0.5f, 0.0f);
    glVertex3f(0.7f, 0.5f, 0.0f);
    glEnd();
    
    // Atap menara kiri
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.9f, 0.4f, 0.3f);
    glVertex3f(-0.575f, 0.65f, 0.0f);
    glVertex3f(-0.45f, 0.5f, 0.0f);
    glVertex3f(-0.7f, 0.5f, 0.0f);
    glEnd();
    
    // Tiang bendera kanan
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.7f, 0.5f, 0.3f);
    glVertex3f(0.575f, 0.65f, 0.0f);
    glVertex3f(0.575f, 0.8f, 0.0f);
    glEnd();
    
    // Tiang bendera kiri
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.7f, 0.5f, 0.3f);
    glVertex3f(-0.575f, 0.65f, 0.0f);
    glVertex3f(-0.575f, 0.8f, 0.0f);
    glEnd();
    
    // Bendera kanan
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.575f, 0.75f, 0.0f); //v0, titik tengah fan
    glVertex3f(0.575f, 0.8f, 0.0f); //v1
    glVertex3f(0.65f, 0.77f, 0.0f); //v2
    glVertex3f(0.7f, 0.72f, 0.0f); //v3
    glEnd();
    
    // Bendera kiri
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.575f, 0.75f, 0.0f); //v0, titik tengah fan
    glVertex3f(-0.575f, 0.8f, 0.0f); //v1
    glVertex3f(-0.65f, 0.77f, 0.0f); //v2
    glVertex3f(-0.7f, 0.72f, 0.0f); //v3
    glEnd();
    
    // Ornamen
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.7f, 0.5f, 0.3f);
    glVertex3f(-0.5f, 0.1f, 0.0f);
    glVertex3f(-0.5f, 0.2f, 0.0f);
    glVertex3f(-0.3f, 0.2f, 0.0f);
    glVertex3f(-0.3f, 0.1f, 0.0f);
    glVertex3f(-0.1f, 0.1f, 0.0f);
	glVertex3f(-0.1f, 0.2f, 0.0f);
	glVertex3f(0.1f, 0.2f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.2f, 0.0f);
	glVertex3f(0.5f, 0.2f, 0.0f);
	glVertex3f(0.5f, 0.1f, 0.0f);
	glEnd();
	
	// Pintu
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.5f, 0.3f);
    glVertex3f(-0.2f, -0.1f, 0.0f);
    glVertex3f(0.2f, -0.1f, 0.0f);
    glVertex3f(0.2f, -0.5f, 0.0f);
    glVertex3f(-0.2f, -0.5f, 0.0f);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kastil Menggunakan Fungsi Primitive");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}

