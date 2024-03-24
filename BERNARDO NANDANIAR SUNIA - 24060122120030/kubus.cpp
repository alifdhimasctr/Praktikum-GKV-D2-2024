#include <GL/glut.h>

void drawCube(float x, float y, float z, float size, float r, float g, float b) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glColor3f(r, g, b);
    glutSolidCube(size);
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Kubus 1 (Merah)
    drawCube(-1.5, 0.0, -5.0, 1.0, 1.0, 0.0, 0.0);

    // Kubus 2 (Hijau)
    drawCube(-0.5, 0.0, -5.0, 1.0, 0.0, 1.0, 0.0);

    // Kubus 3 (Biru)
    drawCube(0.5, 0.0, -5.0, 1.0, 0.0, 0.0, 1.0);

    // Kubus 4 (Kuning)
    drawCube(-1.5, 1.0, -5.0, 1.0, 1.0, 1.0, 0.0);

    // Kubus 5 (Ungu)
    drawCube(-0.5, 1.0, -5.0, 1.0, 1.0, 0.0, 1.0);

	// Kubus 6 (Putih)
    drawCube(0.5, 1.0, -5.0, 1.0, 1.0, 1.0, 1.0);
    
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat)w / (GLfloat)h, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0); // Perubahan di sini
}

void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Kubus Bertingkat");

    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}

