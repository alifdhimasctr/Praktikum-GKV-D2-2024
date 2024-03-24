#include <GL/glut.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    
	// Baris 1
    glColor3f(0.93, 0.56, 0.53);
    glRectf(-0.5, 0.5, -0.4, 0.6);
    glRectf(0.4, 0.5, 0.5, 0.6);
    glColor3f(0.82, 0.62, 0.29);
    glRectf(-0.4, 0.5, -0.3, 0.6);
    glRectf(0.3, 0.5, 0.4, 0.6);
    glColor3f(0.95, 0.76, 0.44);
    glRectf(-0.3, 0.5, -0.2, 0.6);
    glRectf(0.2, 0.5, 0.3, 0.6);
    glColor3f(0.92, 0.51, 0.49);
    glRectf(-0.2, 0.5, -0.1, 0.6);
    glRectf(0.1, 0.5, 0.2, 0.6);
    glColor3f(0.93, 0.56, 0.53);
    glRectf(-0.1, 0.5, 0.0, 0.6);
    glRectf(0.0, 0.5, 0.1, 0.6);

    // Baris 2
    glColor3f(0.67, 0.48, 0.2);
    glRectf(-0.5, 0.4, -0.4, 0.5);
    glRectf(0.4, 0.4, 0.5, 0.5);
    glColor3f(0.67, 0.48, 0.21);
    glRectf(-0.4, 0.4, -0.3, 0.5);
    glRectf(0.3, 0.4, 0.4, 0.5);
    glColor3f(0.95, 0.76, 0.44);
    glRectf(-0.3, 0.4, -0.2, 0.5);
    glRectf(0.2, 0.4, 0.3, 0.5);
    glColor3f(0.92, 0.51, 0.49);
    glRectf(-0.2, 0.4, -0.1, 0.5);
    glRectf(0.1, 0.4, 0.2, 0.5);
    glColor3f(0.93, 0.56, 0.53);
    glRectf(-0.1, 0.4, 0.0, 0.5);
    glRectf(0.0, 0.4, 0.1, 0.5);

    // Baris 3
    glColor3f(0.67, 0.48, 0.21);
    glRectf(-0.5, 0.3, -0.4, 0.4);
    glRectf(0.4, 0.3, 0.5, 0.4);
    glColor3f(0.67, 0.48, 0.21);
    glRectf(-0.4, 0.3, -0.3, 0.4);
    glRectf(0.3, 0.3, 0.4, 0.4);
    glColor3f(0.93, 0.56, 0.53);
    glRectf(-0.3, 0.3, -0.2, 0.4);
    glRectf(0.2, 0.3, 0.3, 0.4);
    glColor3f(0.92, 0.51, 0.49);
    glRectf(-0.2, 0.3, -0.1, 0.4);
    glRectf(0.1, 0.3, 0.2, 0.4);
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.1, 0.3, 0.0, 0.4);
    glRectf(0.0, 0.3, 0.1, 0.4);

    // Baris 4
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.5, 0.2, -0.4, 0.3);
    glRectf(0.4, 0.2, 0.5, 0.3);
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.4, 0.2, -0.3, 0.3);
    glRectf(0.3, 0.2, 0.4, 0.3);
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.3, 0.2, -0.2, 0.3);
    glRectf(0.2, 0.2, 0.3, 0.3);
    glColor3f(0.93, 0.56, 0.53);
    glRectf(-0.2, 0.2, -0.1, 0.3);
    glRectf(0.1, 0.2, 0.2, 0.3);
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.1, 0.2, 0.0, 0.3);
    glRectf(0.0, 0.2, 0.1, 0.3);

    // Baris 5
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.5, 0.1, -0.4, 0.2);
    glRectf(0.4, 0.1, 0.5, 0.2);
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.4, 0.1, -0.3, 0.2);
    glRectf(0.3, 0.1, 0.4, 0.2);
    glColor3f(0.95, 0.71, 0.65);
    glRectf(-0.3, 0.1, -0.2, 0.2);
    glRectf(0.2, 0.1, 0.3, 0.2);
    glColor3f(0.95, 0.71, 0.65);
    glRectf(-0.2, 0.1, -0.1, 0.2);
    glRectf(0.1, 0.1, 0.2, 0.2);
    glColor3f(0.95, 0.71, 0.65);
    glRectf(-0.1, 0.1, 0.0, 0.2);
    glRectf(0.0, 0.1, 0.1, 0.2);

    // Baris 6
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.5, 0.0, -0.4, 0.1);
    glRectf(0.4, 0.0, 0.5, 0.1);
    glColor3f(0.95, 0.62, 0.57);
    glRectf(-0.4, 0.0, -0.3, 0.1);
    glRectf(0.3, 0.0, 0.4, 0.1);
    glColor3f(0.75, 0.33, 0.35);
    glRectf(-0.3, 0.0, -0.2, 0.1);
    glRectf(0.2, 0.0, 0.3, 0.1);
    glColor3f(0.75, 0.33, 0.35);
    glRectf(-0.2, 0.0, -0.1, 0.1);
    glRectf(0.1, 0.0, 0.2, 0.1);
    glColor3f(0.95, 0.71, 0.65);
    glRectf(-0.1, 0.0, 0.0, 0.1);
    glRectf(0.0, 0.0, 0.1, 0.1);

    // Baris 7
    glColor3f(0.75, 0.33, 0.35);
    glRectf(-0.5, -0.1, -0.4, 0.0);
    glRectf(0.4, -0.1, 0.5, 0.0);
    glColor3f(0.75, 0.33, 0.35);
    glRectf(-0.4, -0.1, -0.3, 0.0);
    glRectf(0.3, -0.1, 0.4, 0.0);
    glColor3f(0.8, 0.47, 0.46);
    glRectf(-0.3, -0.1, -0.2, 0.0);
    glRectf(0.2, -0.1, 0.3, 0.0);
    glColor3f(0.31, 0.31, 0.24);
    glRectf(-0.2, -0.1, -0.1, 0.0);
    glRectf(0.1, -0.1, 0.2, 0.0);
    glColor3f(0.95, 0.71, 0.65);
    glRectf(-0.1, -0.1, 0.0, 0.0);
    glRectf(0.0, -0.1, 0.1, 0.0);

    // Baris 8
    glColor3f(0.75, 0.33, 0.35);
    glRectf(-0.5, -0.2, -0.4, -0.1);
    glRectf(0.4, -0.2, 0.5, -0.1);
    glColor3f(0.75, 0.33, 0.35);
    glRectf(-0.4, -0.2, -0.3, -0.1);
    glRectf(0.3, -0.2, 0.4, -0.1);
    glColor3f(0.95, 0.87, 0.78);
    glRectf(-0.3, -0.2, -0.2, -0.1);
    glRectf(0.2, -0.2, 0.3, -0.1);
    glColor3f(0.53, 0.71, 0.44);
    glRectf(-0.2, -0.2, -0.1, -0.1);
    glRectf(0.1, -0.2, 0.2, -0.1);
    glColor3f(0.95, 0.87, 0.78);
    glRectf(-0.1, -0.2, 0.0, -0.1);
    glRectf(0.0, -0.2, 0.1, -0.1);

    // Baris 9
    glColor3f(0.93, 0.56, 0.52);
    glRectf(-0.5, -0.3, -0.4, -0.2);
    glRectf(0.4, -0.3, 0.5, -0.2);
    glColor3f(0.93, 0.56, 0.53);
    glRectf(-0.4, -0.3, -0.3, -0.2);
    glRectf(0.3, -0.3, 0.4, -0.2);
    glColor3f(0.95, 0.8, 0.72);
    glRectf(-0.3, -0.3, -0.2, -0.2);
    glRectf(0.2, -0.3, 0.3, -0.2);
    glColor3f(0.95, 0.87, 0.78);
    glRectf(-0.2, -0.3, -0.1, -0.2);
    glRectf(0.1, -0.3, 0.2, -0.2);
    glColor3f(0.95, 0.87, 0.78);
    glRectf(-0.1, -0.3, 0.0, -0.2);
    glRectf(0.0, -0.3, 0.1, -0.2);
    
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Anya Waku Waku!");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

