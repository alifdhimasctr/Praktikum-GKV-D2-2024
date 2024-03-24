#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_LINE_STRIP
    glColor3f(1.0, 0.0, 0.0);  // Merah
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.9, -0.8);
    glVertex2f(-0.6, -0.6);
    glVertex2f(-0.3, -0.8);
    glEnd();

    // GL_LINE_LOOP
    glColor3f(0.0, 1.0, 0.0);  // Hijau
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2, -0.8);
    glVertex2f(0.1, -0.6);
    glVertex2f(0.4, -0.8);
    glEnd();

    // GL_TRIANGLE_FAN
    glColor3f(0.0, 0.0, 1.0);  // Biru
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.7, -0.8);
    glVertex2f(0.9, -0.6);
    glVertex2f(1.1, -0.8);
    glVertex2f(1.2, -0.6);
    glEnd();

    // GL_TRIANGLE_STRIP
    glColor3f(1.0, 1.0, 0.0);  // Kuning
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.9, 0.0);
    glVertex2f(-0.6, 0.2);
    glVertex2f(-0.3, 0.0);
    glVertex2f(-0.1, 0.2);
    glEnd();

    // GL_QUADS
    glColor3f(0.0, 1.0, 1.0);  // Cyan
    glBegin(GL_QUADS);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.7, 0.0);
    glVertex2f(1.0, 0.2);
    glEnd();

    // GL_QUAD_STRIP
    glColor3f(1.0, 0.0, 1.0);  // Ungu
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.9, 0.7);
    glVertex2f(-0.6, 0.9);
    glVertex2f(-0.3, 0.7);
    glVertex2f(-0.1, 0.9);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Geometries");
    glutDisplayFunc(display);
    glClearColor(1.0, 1.0, 1.0, 1.0);  // Warna latar belakang putih
    gluOrtho2D(-1.5, 1.5, -1.5, 1.5);  // Koordinat viewport
    glutMainLoop();
    return 0;
}

