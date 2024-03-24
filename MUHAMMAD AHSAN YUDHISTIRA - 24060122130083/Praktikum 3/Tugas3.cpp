/*
Nama	    : Muhammad Ahsan Yudhistira
NIM	        : 24060122130083
Deskripsi   : membuat lengan dengan telapak dan jari-jarinya dan
              dapat digerakkan dengan memasukkan input character dari keyboard
*/

#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

static int pundak = 0,
siku = 0,
telapak = 0,
telunjuk = 0, telunjuk1 = 0,
tengah = 0, tengah1 = 0,
manis = 0, manis1 = 0,
kelingking = 0, kelingking1 = 0,
jempol = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void tangan(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(-2.0, 0.0, 0.0);

    //pundak
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)pundak, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)siku, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //telapak
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)telapak, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();
    glScalef(1.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //telunjuk
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat)telunjuk, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //telunjuk1
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)telunjuk1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //tengah
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat)tengah, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //tengah1
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)tengah1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //manis
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.2);
    glRotatef((GLfloat)manis, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //manis1
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)manis1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //kelingking
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.4);
    glRotatef((GLfloat)kelingking, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //kelingking1
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)kelingking1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //jempol
    glPushMatrix();
    glTranslatef(0.2, 0.0, 0.4);
    glRotatef((GLfloat)jempol, -1.0, 0.0, 0.0);
    glTranslatef(0.0, 0.0, 0.25);

    glPushMatrix();
    glScalef(0.2, 0.2, 0.50);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'a': pundak = (pundak + 5) % 360;
        glutPostRedisplay();
        break;
    case 's': siku = (siku + 5) % 360;
        glutPostRedisplay();
        break;
    case 'd': telapak = (telapak + 5) % 360;
        glutPostRedisplay();
        break;
    case 'h': telunjuk = (telunjuk + 5) % 360;
        glutPostRedisplay();
        break;
    case 'y': telunjuk1 = (telunjuk1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'j': tengah = (tengah + 5) % 360;
        glutPostRedisplay();
        break;
    case 'u': tengah1 = (tengah1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'k': manis = (manis + 5) % 360;
        glutPostRedisplay();
        break;
    case 'i': manis1 = (manis1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'l': kelingking = (kelingking + 5) % 360;
        glutPostRedisplay();
        break;
    case 'o': kelingking1 = (kelingking1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'g': jempol = (jempol + 5) % 360;
        glutPostRedisplay();
        break;
    case 'X': exit(0);
        break;
    default: break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tangan Bergerak");
    init();

    glutDisplayFunc(tangan);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
