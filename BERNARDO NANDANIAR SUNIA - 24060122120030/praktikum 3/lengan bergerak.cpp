#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, wrist = 0, fingers = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH); // Menggunakan shading smooth
}

void drawArm() {
    glPushMatrix();

    // Bahu
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glColor3f(1.0, 0.96, 0.85); // Krem
    glutSolidSphere(0.5, 20, 20);

    // Siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Lengan
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)wrist, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Pergelangan Tangan
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.6, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Telapak Tangan
    glTranslatef(0.8, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.6, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Jari-jari
    glTranslatef(1.0, -0.1, 0.2);
    glPushMatrix();
    glColor3f(1.0, 0.96, 0.85); // Krem
    glRotatef((GLfloat)fingers, 0.1, 0.0, 1.0);
    glScalef(0.2, 0.2, 0.2); // Ubah ukuran persegi menjadi lebih kecil
    glutSolidCube(1.0);
    glPopMatrix();

    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, -2.0, -8.0); // Posisi awal
    drawArm();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 's':
        shoulder = (shoulder + 5) % 360;
        break;
    case 'S':
        shoulder = (shoulder - 5) % 360;
        break;
    case 'e':
        elbow = (elbow + 5) % 360;
        break;
    case 'E':
        elbow = (elbow - 5) % 360;
        break;
    case 'w':
        wrist = (wrist + 5) % 360;
        break;
    case 'W':
        wrist = (wrist - 5) % 360;
        break;
    case 'f':
        fingers = (fingers + 5) % 360;
        break;
    case 'F':
        fingers = (fingers - 5) % 360;
        break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
