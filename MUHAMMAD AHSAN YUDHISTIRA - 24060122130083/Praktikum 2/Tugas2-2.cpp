/*  Nama    	: Muhammad Ahsan Yudhistira
    NIM     	: 24060122130083
    Deskripsi 	: Membuat Gambar Mobil dengan memanfaatkan object2 primitif dan transformasi
*/
#include <gl/glut.h>
#include <cmath>

float carX = 0.0f;
float carY = 0.0f;

void drawCar() {
    // Body Mobil
    glBegin(GL_POLYGON);
    glColor3ub(200, 30, 20);
    glVertex2f(-0.6, -0.35);
    glVertex2f(-0.6, 0);
    glVertex2f(-0.2, 0.2);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.6, 0);
    glVertex2f(0.9, -0.1);
    glVertex2f(0.95, -0.35);
    glEnd();

    // Jendela belakang
    glBegin(GL_POLYGON);
    glColor3ub(10, 10, 10);
    glVertex2f(-0.2, 0.15);
    glVertex2f(0.02, 0.15);
    glVertex2f(0.02, 0);
    glVertex2f(-0.2, 0);
    glEnd();

    // Jendela depan
    glBegin(GL_POLYGON);
    glColor3ub(10, 10, 10);
    glVertex2f(0.03, 0.15);
    glVertex2f(0.3, 0.15);
    glVertex2f(0.5, 0);
    glVertex2f(0.03, 0);
    glEnd();

    // Ban kiri
    glColor3ub(0, 244, 0);
    glPushMatrix();
    glTranslatef(-0.4, -0.35, 0.0f);
    glScalef(0.2f, 0.2f, 1.0f);
    glutSolidSphere(0.5, 20, 20); // Ban luar

    glColor3ub(100, 100, 100);
    glTranslatef(0.0f, 0.0f, 0.1f);
    glutSolidTorus(0.1, 0.3, 10, 15); // Velg
    glPopMatrix();

    // Ban kanan
    glColor3ub(0, 244, 0);
    glPushMatrix();
    glTranslatef(0.7, -0.35, 0.0f);
    glScalef(0.2f, 0.2f, 1.0f);
    glutSolidSphere(0.5, 20, 20); // Ban luar

    glColor3ub(100, 100, 100);
    glTranslatef(0.0f, 0.0f, 0.1f);
    glutSolidTorus(0.1, 0.3, 10, 15); // Velg
    glPopMatrix();
}



void civic() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.0f);

    // Menggunakan stack untuk mengelompokkan transformasi mobil
    glPushMatrix();
    glTranslatef(carX, carY, 0.0f); // Translasi berdasarkan posisi mobil

    drawCar();

    glPopMatrix();

    glFlush();
}

void specialKeys(int key, int x, int y) {
    switch (key) {
    case GLUT_KEY_RIGHT:
        carX += 0.1f; // Gerak ke kanan
        break;
    case GLUT_KEY_LEFT:
        carX -= 0.1f; // Gerak ke kiri
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Honda Civic");
    glutDisplayFunc(civic);
    glutSpecialFunc(specialKeys);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
