/*
    File        : tugas3.cpp    10/03/24
    Penulis     : Arifin Nurmuhammad Haris
    Deskripsi   : Membuat lengan bergerak dan menambahkan telapak tangan
                  beserta jari-jari serta bisa digerakan menggunakan keyboard
*/

#include <gl/glut.h>

static int shoulder = 0,
elbow = 0,
palm = 0,
index1 = 0,
index2 = 0,
middle1 = 0,
middle2 = 0,
ring1 = 0,
ring2 = 0,
pinkie1 = 0,
pinkie2 = 0,
thumb = 0;

void init(void) {
    glClearColor(0, 0, 0, 0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Shoulder
    glPushMatrix();
    glTranslatef(-1, 0, 0);
    glRotatef((GLfloat)shoulder, 0, 0, 1);
    glTranslatef(1, 0, 0);
    glPushMatrix();
    glScalef(2, 0.4, 1);
    glutWireCube(1);
    glPopMatrix();

    // Elbow
    glTranslatef(1, 0, 0);
    glRotatef((GLfloat)elbow, 0, 0, 1);
    glTranslatef(1, 0, 0);
    glPushMatrix();
    glScalef(2, 0.4, 1);
    glutWireCube(1);
    glPopMatrix();

    // Palm
    glTranslatef(1, 0, 0);
    glRotatef((GLfloat)palm, 0, 0, 1);
    glTranslatef(0.5, 0, 0);
    glPushMatrix();
    glScalef(1, 0.4, 1);
    glutWireCube(1);
    glPopMatrix();

    // Index1
    glPushMatrix();
    glTranslatef(0.5, 0, 0.2);
    glRotatef((GLfloat)index1, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();

    // Index2
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)index2, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();
    glPopMatrix();

    // Middle1
    glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glRotatef((GLfloat)middle1, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();

    // Middle2
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)middle2, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();
    glPopMatrix();

    // Ring1
    glPushMatrix();
    glTranslatef(0.5, 0, -0.2);
    glRotatef((GLfloat)ring1, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();

    // Ring2
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)ring2, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();
    glPopMatrix();

    // Pinkie1
    glPushMatrix();
    glTranslatef(0.5, 0, -0.4);
    glRotatef((GLfloat)pinkie1, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();

    // Pinkie2
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)pinkie2, 0, 0, 1);
    glTranslatef(0.25, 0, 0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1);
    glPopMatrix();
    glPopMatrix();

    // Thumb
    glPushMatrix();
    glTranslatef(0.2, 0, 0.4);
    glRotatef((GLfloat)thumb, -1, 0, 0);
    glTranslatef(0, 0, 0.25);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.50);
    glutWireCube(1);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65, (GLfloat)w / (GLfloat)h, 1, 20);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0, 0, -5);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'a':
        shoulder = (shoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case 'A':
        shoulder = (shoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case 's':
        if (elbow < 90) elbow = (elbow + 5) % 360;
        glutPostRedisplay();
        break;
    case 'S':
        if (elbow > 0) elbow = (elbow - 5) % 360;
        glutPostRedisplay();
        break;
    case 'd':
        if (palm < 90) palm = (palm + 5) % 360;
        glutPostRedisplay();
        break;
    case 'D':
        if (palm > 0) palm = (palm - 5) % 360;
        glutPostRedisplay();
        break;
    case 'h':
        if (index1 < 90) index1 = (index1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'H':
        if (index1 > 0) index1 = (index1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'y':
        if (index2 < 90) index2 = (index2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'Y':
        if (index2 > 0) index2 = (index2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'j':
        if (middle1 < 90) middle1 = (middle1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'J':
        if (middle1 > 0) middle1 = (middle1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'u':
        if (middle2 < 90) middle2 = (middle2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'U':
        if (middle2 > 0) middle2 = (middle2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'k':
        if (ring1 < 90) ring1 = (ring1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'K':
        if (ring1 > 0) ring1 = (ring1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'i':
        if (ring2 < 90) ring2 = (ring2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'I':
        if (ring2 > 0) ring2 = (ring2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'l':
        if (pinkie1 < 90) pinkie1 = (pinkie1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'L':
        if (pinkie1 > 0) pinkie1 = (pinkie1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'o':
        if (pinkie2 < 90) pinkie2 = (pinkie2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'O':
        if (pinkie2 > 0) pinkie2 = (pinkie2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'w':
        if (thumb < 90) thumb = (thumb + 5) % 360;
        glutPostRedisplay();
        break;
    case 'W':
        if (thumb > 0) thumb = (thumb - 5) % 360;
        glutPostRedisplay();
        break;
    case 27: exit(0);
        break;
    default: break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}