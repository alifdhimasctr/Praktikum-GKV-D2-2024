//NAMA & NIM : David Cristian Batuabra & 24060122130094
//Tanggal Pembuatan : 26 - 02 - 2024

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
   
    // Menggambar Line STRIP);
    glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.5, 0.0);
    glVertex2f(-0.9, 0.9);
    glVertex2f(-0.6, 0.9);
    glVertex2f(-0.6, 0.6);
    glEnd();
    
    // Menggambar loop garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.1, 0.7, 1.0);
    glVertex2f(-0.5, 0.9);
    glVertex2f(-0.2, 0.9);
    glVertex2f(-0.2, 0.6);
    glVertex2f(-0.5, 0.6);
    glEnd();
    
    // Menggambar triangle fan
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.8, 0.0, 1.0);
    glVertex2f(-0.1, 0.9);
    glVertex2f(0.2, 0.9);
    glVertex2f(0.1, 0.6);
    glVertex2f(0.0, 0.6);
    glEnd();
    
    // Menggambar triangle strip
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.2, 0.4, 0.8);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.4, 0.2);
    glEnd();
    
    // Menggambar quads
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.9, 0.5);
    glVertex2f(-0.9, 0.5);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.6, 0.2);
    glVertex2f(-0.9, 0.2);
    glEnd();
    
    // Menggambar quad strip
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.5, 0.0, 0.7);
    glVertex2f(-0.1, 0.5);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.1, 0.2);
    glVertex2f(-0.1, 0.2);
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
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
