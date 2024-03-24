/*
Nama		: Vincentius Setyawan Widyahadi
NIM			: 24060122120006
Tanggal		: Sabtu, 16 - 03 - 2024
Deskripsi	: Membuat tangan 3 dimensi yang bisa digerakan dengan input keyboard
*/
#include <GL/glut.h>

static int ibuJari1 = 0, ibuJari2 = 0, ibuJari3 = 0;
static int jTelunjuk1 = 0, jTelunjuk2 = 0, jTelunjuk3 = 0;
static int jTengah1 = 0, jTengah2 = 0, jTengah3 = 0;
static int jManis1 = 0, jManis2 = 0, jManis3 = 0;
static int jKelingking1 = 0, jKelingking2 = 0, jKelingking3 = 0;
static int telapak1 = 0, telapak2 = 0;
static int lenganX1 = 0, lenganX2 = 0, lenganY = 0;
void init(void)
{
    glClearColor(0, 0, 0, 0);
    glShadeModel(GL_FLAT);
}
void tampilan(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    //lengan Bagian Atas
    glTranslatef(-1.8, 0, 0);
    glRotatef((GLfloat)lenganX1, 0, 0, 1);
    glRotatef((GLfloat)lenganX2, 0, 1, 0);
    glTranslatef(1.8, 0, 0);
    glPushMatrix();
    glTranslatef(-1.4, 0, 0);
    glScalef(0.8, 0.2, 0.56);
    glutWireCube(1);
    glPopMatrix();

    //lengan Bagian Bawah
    glTranslatef(-1, 0, 0);
    glRotatef((GLfloat)lenganY, 0, 0, 1);
    glTranslatef(1, 0, 0);
    glPushMatrix();
    glTranslatef(-0.6, 0, 0);
    glScalef(0.8, 0.2, 0.56);
    glutWireCube(1);
    glPopMatrix();

    //Telapak Tangan
    glRotatef((GLfloat)telapak1, 1, 0, 0);
    glRotatef((GLfloat)telapak2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.4, 0.2, 0.56);
    glutWireCube(1.0);

    glPopMatrix();

    //Ibu Jari
    glPushMatrix();
    glTranslatef(0, 0, 0.38);
    glRotatef((GLfloat)-ibuJari3, 1, 0, 0);
    glRotatef((GLfloat)ibuJari1, 0, 1, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0, 0, 0.2);
    glRotatef((GLfloat)-ibuJari2, 1, 0, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.25);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Telunjuk
    glPushMatrix();
    glTranslatef(0.3, 0, 0.22);
    glRotatef((GLfloat)jTelunjuk1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)jTelunjuk2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.22, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.22, 0, 0);
    glRotatef((GLfloat)jTelunjuk3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Tengah
    glPushMatrix();
    glTranslatef(0.3, 0, 0.05);
    glRotatef((GLfloat)jTengah1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.25, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)jTengah2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.27, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.27, 0, 0);
    glRotatef((GLfloat)jTengah3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Manis
    glPushMatrix();
    glTranslatef(0.3, 0, -0.1);
    glRotatef((GLfloat)jManis1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)jManis2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.21, 0, 0);
    glRotatef((GLfloat)jManis3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Kelingking
    glPushMatrix();
    glTranslatef(0.3, 0, -0.21);
    glRotatef((GLfloat)jKelingking1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.18, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.18, 0, 0);
    glRotatef((GLfloat)jKelingking2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.17, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.17, 0, 0);
    glRotatef((GLfloat)jKelingking3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.19, 0.1, 0.1);
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

        //lengan bagian Atas
    case '1': lenganX1 = (lenganX1 + 5) % 360;
        if (lenganX1 > 110) lenganX1 = 110;
        glutPostRedisplay();
        break;
    case '2': lenganX1 = (lenganX1 - 5) % 360;
        if (lenganX1 < -110) lenganX1 = -110;
        glutPostRedisplay();
        break;
    case '3': lenganX2 = (lenganX2 + 5) % 360;
        if (lenganX2 > 90) lenganX2 = 90;
        glutPostRedisplay();
        break;
    case '4': lenganX2 = (lenganX2 - 5) % 360;
        if (lenganX2 < -90) lenganX2 = -90;
        glutPostRedisplay();
        break;

        //lengan Bagaian bawah
    case 'q': lenganY = (lenganY + 5) % 360;
        if (lenganY > 120) lenganY = 120;
        glutPostRedisplay();
        break;
    case 'Q': lenganY = (lenganY - 5) % 360;
        if (lenganY < 0) lenganY = 0;
        glutPostRedisplay();
        break;

        //Telapak Tangan
    case 'w': telapak1 = (telapak1 + 5) % 360;
        if (telapak1 > 90) telapak1 = 90;
        glutPostRedisplay();
        break;
    case 'W': telapak1 = (telapak1 - 5) % 360;
        if (telapak1 < -90) telapak1 = -90;
        glutPostRedisplay();
        break;
    case 'z': telapak2 = (telapak2 + 5) % 360;
        if (telapak2 > 90) telapak2 = 90;
        glutPostRedisplay();
        break;
    case 'Z': telapak2 = (telapak2 - 5) % 360;
        if (telapak2 < 0) telapak2 = 0;
        glutPostRedisplay();
        break;

        //Ibu Jari
    case 'x': ibuJari3 = (ibuJari3 - 5) % 360;
        if (ibuJari3 < 0) ibuJari3 = 0;
        glutPostRedisplay();
        break;
    case 'X': ibuJari3 = (ibuJari3 + 5) % 360;
        if (ibuJari3 > 90) ibuJari3 = 90;
        glutPostRedisplay();
        break;
    case 'c': ibuJari1 = (ibuJari1 - 5) % 360;
        if (ibuJari1 < 0) ibuJari1 = 0;
        glutPostRedisplay();
        break;
    case 'C': ibuJari1 = (ibuJari1 + 5) % 360;
        if (ibuJari1 > 90) ibuJari1 = 90;
        glutPostRedisplay();
        break;
    case 'd': ibuJari2 = (ibuJari2 - 5) % 360;
        if (ibuJari2 < 0) ibuJari2 = 0;
        glutPostRedisplay();
        break;
    case 'D': ibuJari2 = (ibuJari2 + 5) % 360;
        if (ibuJari2 > 90) ibuJari2 = 90;
        glutPostRedisplay();
        break;

        //Jari Telunjuk
    case 'e': jTelunjuk1 = (jTelunjuk1 - 5) % 360;
        if (jTelunjuk1 < 0) jTelunjuk1 = 0;
        glutPostRedisplay();
        break;
    case 'E': jTelunjuk1 = (jTelunjuk1 + 5) % 360;
        if (jTelunjuk1 > 90) jTelunjuk1 = 90;
        glutPostRedisplay();
        break;
    case 'f': jTelunjuk2 = (jTelunjuk2 - 5) % 360;
        if (jTelunjuk2 < 0) jTelunjuk2 = 0;
        glutPostRedisplay();
        break;
    case 'F': jTelunjuk2 = (jTelunjuk2 + 5) % 360;
        if (jTelunjuk2 > 90) jTelunjuk2 = 90;
        glutPostRedisplay();
        break;
    case 'v': jTelunjuk3 = (jTelunjuk3 - 5) % 360;
        if (jTelunjuk3 < 0) jTelunjuk3 = 0;
        glutPostRedisplay();
        break;
    case 'V': jTelunjuk3 = (jTelunjuk3 + 5) % 360;
        if (jTelunjuk3 > 90) jTelunjuk3 = 90;
        glutPostRedisplay();
        break;

        //Jari Tengah
    case 'r': jTengah1 = (jTengah1 - 5) % 360;
        if (jTengah1 < 0) jTengah1 = 0;
        glutPostRedisplay();
        break;
    case 'R': jTengah1 = (jTengah1 + 5) % 360;
        if (jTengah1 > 90) jTengah1 = 90;
        glutPostRedisplay();
        break;
    case 'g': jTengah2 = (jTengah2 - 5) % 360;
        if (jTengah2 < 0) jTengah2 = 0;
        glutPostRedisplay();
        break;
    case 'G': jTengah2 = (jTengah2 + 5) % 360;
        if (jTengah2 > 90) jTengah2 = 90;
        glutPostRedisplay();
        break;
    case 't': jTengah3 = (jTengah3 - 5) % 360;
        if (jTengah3 < 0) jTengah3 = 0;
        glutPostRedisplay();
        break;
    case 'T': jTengah3 = (jTengah3 + 5) % 360;
        if (jTengah3 > 90) jTengah3 = 90;
        glutPostRedisplay();
        break;

        //Jari Manis
    case 'n': jManis1 = (jManis1 - 5) % 360;
        if (jManis1 < 0) jManis1 = 0;
        glutPostRedisplay();
        break;
    case 'N': jManis1 = (jManis1 + 5) % 360;
        if (jManis1 > 90) jManis1 = 90;
        glutPostRedisplay();
        break;
    case 'b': jManis2 = (jManis2 - 5) % 360;
        if (jManis2 < 0) jManis2 = 0;
        glutPostRedisplay();
        break;
    case 'B': jManis2 = (jManis2 + 5) % 360;
        if (jManis2 > 90) jManis2 = 90;
        glutPostRedisplay();
        break;
    case 'h': jManis3 = (jManis3 - 5) % 360;
        if (jManis3 < 0) jManis3 = 0;
        glutPostRedisplay();
        break;
    case 'H': jManis3 = (jManis3 + 5) % 360;
        if (jManis3 > 90) jManis3 = 90;
        glutPostRedisplay();
        break;

        //Jari Kelingking
    case 'm': jKelingking1 = (jKelingking1 - 5) % 360;
        if (jKelingking1 < 0) jKelingking1 = 0;
        glutPostRedisplay();
        break;
    case 'M': jKelingking1 = (jKelingking1 + 5) % 360;
        if (jKelingking1 > 90) jKelingking1 = 90;
        glutPostRedisplay();
        break;
    case 'j': jKelingking2 = (jKelingking2 - 5) % 360;
        if (jKelingking2 < 0) jKelingking2 = 0;
        glutPostRedisplay();
        break;
    case 'J': jKelingking2 = (jKelingking2 + 5) % 360;
        if (jKelingking2 > 90) jKelingking2 = 90;
        glutPostRedisplay();
        break;

    case 'u': jKelingking3 = (jKelingking3 - 5) % 360;
        if (jKelingking3 < 0) jKelingking3 = 0;
        glutPostRedisplay();
        break;
    case 'U': jKelingking3 = (jKelingking3 + 5) % 360;
        if (jKelingking3 > 90) jKelingking3 = 90;
        glutPostRedisplay();
        break;

    case 27: exit(0); break;

        //Gunakan Tombol Tab Untuk  Melakukan Reset
    case 9: jKelingking1 = jKelingking2 = jKelingking3 =
        lenganX1 = lenganX2 = lenganY = jManis1 = jManis2 = jManis3 = jTengah1
        = jTengah2 = jTengah3 = jTelunjuk1 = jTelunjuk2 = jTelunjuk3 = ibuJari1 =
        ibuJari3 = ibuJari2 = telapak1 = telapak2 = 0;
        glutPostRedisplay();
        break;
    default:break;
    }
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(650, 650);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("lengan");
    init();
    glutDisplayFunc(tampilan);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
