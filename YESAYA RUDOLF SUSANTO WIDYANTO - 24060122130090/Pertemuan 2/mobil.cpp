#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Gambar badan mobil
    glColor3f(0.5, 0.5, 0.5); // warna abu-abu
    glBegin(GL_POLYGON);
    glVertex2f(-0.8, 0.1);
    glVertex2f(-0.8, -0.2);
    glVertex2f(0.8, -0.2);
    glVertex2f(0.8, 0.1);
    glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 0.1);
	glVertex2f(-0.2, 0.4);
    glVertex2f(0.8, 0.1);
	glEnd();
	
    // Gambar roda kiri
    glColor3f(0, 0, 0); // warna hitam
    
    glBegin(GL_POLYGON);
	glVertex2f(-0.72, 0.1);
	glVertex2f(-0.2, 0.36);
	glVertex2f(0.4, 0.18); 
	glVertex2f(0.4, 0.1);
	glEnd();
	
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.14159 / 180;
        float x = -0.55 + 0.15 * cos(theta);
        float y = -0.2 + 0.15 * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    // Gambar roda kanan
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.14159 / 180;
        float x = 0.55 + 0.15 * cos(theta);
        float y = -0.2 + 0.15 * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tesla Cybertruck");
    glClearColor(1, 1, 1, 1); // warna latar belakang putih
    gluOrtho2D(-1, 1, -1, 1);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

