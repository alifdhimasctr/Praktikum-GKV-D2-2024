#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Jarak antar kubus
    float jarakAntarKubus = 0.2;
    float ukuranKubus = 0.2;

    // Kubus di bagian bawah
    glColor3f(1.0, 0.0, 0.0);  // Merah
    glPushMatrix();
    glTranslatef(-jarakAntarKubus * 2, -0.2, 0.0);
    glutSolidCube(ukuranKubus);
    glPopMatrix();

    glColor3f(0.0, 1.0, 0.0);  // Hijau
    glPushMatrix();
    glTranslatef(0.0, -0.2, 0.0);
    glutSolidCube(ukuranKubus);
    glPopMatrix();

    glColor3f(0.0, 0.0, 1.0);  // Biru
    glPushMatrix();
    glTranslatef(jarakAntarKubus * 2, -0.2, 0.0);
    glutSolidCube(ukuranKubus);
    glPopMatrix();

    // Kubus di tengah
    glColor3f(1.0, 1.0, 0.0);  // Kuning
    glPushMatrix();
    glTranslatef(-jarakAntarKubus, jarakAntarKubus - 0.2, 0.0);
    glutSolidCube(ukuranKubus);
    glPopMatrix();

    glColor3f(0.0, 1.0, 1.0);  // Cyan
    glPushMatrix();
    glTranslatef(jarakAntarKubus, jarakAntarKubus - 0.2, 0.0);
    glutSolidCube(ukuranKubus);
    glPopMatrix();

    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.5, 1.5, -0.5, 1.3);  // Koordinat viewport untuk mode 2D
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("2D Stacked Cubes Pyramid");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(1.0, 1.0, 1.0, 1.0);  // Warna latar belakang putih
    glutMainLoop();
    return 0;
}

