/*
File		: Tugas1_No2_Vincentius Setyawan Widyahadi_24060122120006
Tanggal		: Minggu, 25 - 02 - 2024
Nama		: Vincentius Setyawan Widyahadi 24060122120006
Deskripsi	: membuat program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
*/

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Menggambar titik menggunakan GL_POINT
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.9, 0.9);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.75, 0.9);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.6, 0.9);
    glEnd();
    
    // Menggambar garis menggunakan GL_LINES
    glBegin(GL_LINES);
    glColor3f(1.0, 0.5, 0.0);
    glVertex2f(-0.5, 0.9);
    glVertex2f(-0.2, 0.9);
    glEnd();
    
    // Menggambar garis strip menggunakan GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 0.0, 1.0);
    glVertex2f(0.0, 0.9);
    glVertex2f(0.3, 0.9);
    glVertex2f(0.3, 0.6);
    glEnd();
    
    // Menggambar loop garis menggunakan GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.4, 0.9);
    glVertex2f(0.7, 0.9);
    glVertex2f(0.7, 0.6);
    glVertex2f(0.4, 0.6);
    glEnd();
    
    // Menggambar triangle fan menggunakan GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-0.9, 0.5);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.5, 0.2);
    glVertex2f(-0.8, 0.2);
    glEnd();
    
    // Menggambar triangle strip menggunakan GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.0, 1.0, 0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.4, 0.2);
    glEnd();
    
    // Menggambar quads menggunakan GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(0.5, 1.0, 0.0);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.3, 0.5);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    // Menggambar quad strip menggunakan GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0, 0.5, 0.5);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.7, 0.5);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.7, 0.2);
    glEnd();
    
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Tugas NO 2");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
