/*
Nama: Sultan Alamsyah Borneo Arifin
NIM: 24060122130079
Lab: D2
Tanggal: 11 Maret 2024
Deskripsi: Program utama simulasi tangan (lengkap dengan telapak dan jari - jari)
*/
/*Tombol gerakan:
w, s = bahu
a, d = siku
t, T, y, Y = telapak tangan
i, o, p = ibu jari
f, g, h = jari telunjuk
j, k, l = jari tengah
x, c, v = jari manis
b, n, m = jari kelingking
e = keluar dari program*/
#include <GL/glut.h>
static int shoulder = 0, elbow = 0;
static int telapak1 = 0, telapak2 = 0;
static int thumb_lower = 0, thumb_mid = 0, thumb_upper = 0;
static int fore_lower = 0, fore_mid = 0, fore_upper = 0;
static int middle_lower = 0, middle_mid = 0, middle_upper = 0;
static int ring_lower = 0, ring_mid = 0, ring_upper = 0;
static int little_lower = 0, little_mid = 0, little_upper = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    //Bahu
    glTranslatef(-2.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //Siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //Telapak Tangan
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)telapak1, 1.0, 0.0, 0.0);
    glRotatef((GLfloat)telapak2, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(1.0, 0.5, 1.4);
    glutWireCube(1.0);
    glPopMatrix();

    //Ibu Jari
    glPushMatrix();
    glTranslatef(0.0, -0.2, 0.5); //Bagian bawah
    glRotatef((GLfloat)thumb_lower, 1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.0, 0.0, 0.3); //Bagian tengah
    glRotatef((GLfloat)thumb_mid, 1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.0, 0.0, 0.3); //Bagian atas
    glRotatef((GLfloat)thumb_upper, 1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Telunjuk
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.4); //Bagian bawah
    glRotatef((GLfloat)fore_lower, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian tengah
    glRotatef((GLfloat)fore_mid, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian atas
    glRotatef((GLfloat)fore_upper, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Tengah
    glPushMatrix();
    glTranslatef(0.6, 0.0, 0.1); //Bagian bawah
    glRotatef((GLfloat)middle_lower, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian tengah
    glRotatef((GLfloat)middle_mid, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian atas
    glRotatef((GLfloat)middle_upper, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Manis
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.2); //Bagian bawah
    glRotatef((GLfloat)ring_lower, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian tengah
    glRotatef((GLfloat)ring_mid, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian atas
    glRotatef((GLfloat)ring_upper, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Kelingking
    glPushMatrix();
    glTranslatef(0.4, 0.0, -0.5); //Bagian bawah
    glRotatef((GLfloat)little_lower, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian tengah
    glRotatef((GLfloat)little_mid, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0.0, 0.0); //Bagian atas
    glRotatef((GLfloat)little_upper, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.3);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION); glLoadIdentity
    ();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW); glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'w': shoulder = (shoulder + 5) % 360; //Bahu
        glutPostRedisplay();
        break;
    case 's': shoulder = (shoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case 'a': elbow = (elbow + 5) % 360; //Siku
        glutPostRedisplay();
        break;
    case 'd': elbow = (elbow - 5) % 360;
        glutPostRedisplay();
        break;
    case 't': telapak1 = (telapak1 - 5) % 360; //Telapak Tangan
        glutPostRedisplay();
        break;
    case 'T': telapak1 = (telapak1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'y': telapak2 = (telapak2 - 5) % 90;
        glutPostRedisplay();
        break;
    case 'Y': telapak2 = (telapak2 + 5) % 90;
        glutPostRedisplay();
        break;
    case 'i': thumb_lower = (thumb_lower - 5) % 90; //Ibu Jari
        glutPostRedisplay();
        break;
    case 'o': thumb_mid = (thumb_mid - 5) % 90;
        glutPostRedisplay();
        break;
    case 'p': thumb_upper = (thumb_upper - 5) % 90;
        glutPostRedisplay();
        break;
    case 'f': fore_lower = (fore_lower + 5) % 90; //Jari Telunjuk
        glutPostRedisplay();
        break;
    case 'g': fore_mid = (fore_mid + 5) % 90;
        glutPostRedisplay();
        break;
    case 'h': fore_upper = (fore_upper + 5) % 90;
        glutPostRedisplay();
        break;
    case 'j': middle_lower = (middle_lower + 5) % 90; //Jari Tengah
        glutPostRedisplay();
        break;
    case 'k': middle_mid = (middle_mid + 5) % 90;
        glutPostRedisplay();
        break;
    case 'l': middle_upper = (middle_upper + 5) % 90;
        glutPostRedisplay();
        break;
    case 'x': ring_lower = (ring_lower + 5) % 90; //Jari Manis
        glutPostRedisplay();
        break;
    case 'c': ring_mid = (ring_mid + 5) % 90;
        glutPostRedisplay();
        break;
    case 'v': ring_upper = (ring_upper + 5) % 90;
        glutPostRedisplay();
        break;
    case 'b': little_lower = (little_lower + 5) % 90; //Jari Kelingking
        glutPostRedisplay();
        break;
    case 'n': little_mid = (little_mid + 5) % 90;
        glutPostRedisplay();
        break;
    case 'm': little_upper = (little_upper + 5) % 90;
        glutPostRedisplay();
        break;
    case 'e':
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tangan"); init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}