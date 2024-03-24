#include <GL/glut.h>


void KubusBertingkat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f); // kubus putih
    glRectf(-0.10, 0.10, 0.10, -0.10);
    glColor3f(0.0f, 1.0f, 1.0f); // kubus cyan
    glRectf(0.05, 0.10, 0.25, 0.30);
    glColor3f(0.0f, 0.0f, 1.0f); // kubus biru
    glRectf(-0.05, 0.10, -0.25, 0.30);
    glColor3f(1.0f, 0.0f, 1.0f); // kubus ungu
    glRectf(-0.20, 0.10, -0.40, -0.10);
    glColor3f(0.0f, 1.0f, 0.0f); // kubus hijau
    glRectf(0.20, 0.10, 0.40, -0.10);
    glColor3f(1.0f,0.0f, 0.0f); // kubus merah
    glRectf(-0.05, -0.10, -0.25, -0.30);
    glColor3f(1.0f, 1.0f, 0.0f); // kubus kuning
    glRectf(0.05, -0.10, 0.25, -0.30);
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Bertingkat");
    glutDisplayFunc(KubusBertingkat);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}

