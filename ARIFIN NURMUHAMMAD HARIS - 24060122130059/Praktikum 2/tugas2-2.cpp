/*
    File        : tugas2-2.cpp      02/03/24
    Penulis     : Arifin Nurmuhammad Haris
    Deskripsi   : Membuat sebuah mobil 2D yang memanfaatkan object2 primitif dan transformasi
*/

#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void mobil(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Body
    glBegin(GL_POLYGON);
        glColor3ub(32, 22, 88);
        glVertex2f(-0.7654, -0.174);
        glVertex2f(-0.8404, -0.126);
        glVertex2f(-0.8837, -0.0546);
        glColor3ub(29, 36, 202);
        glVertex2f(-0.8946, 0.024);
        glVertex2f(-0.8, 0.088);
        glVertex2f(-0.7, 0.1207);
        glVertex2f(-0.6, 0.1345);
        glVertex2f(-0.5, 0.141);
        glVertex2f(-0.4, 0.1444);
        glVertex2f(-0.31, 0.145);
        glVertex2f(-0.0696, 0.25);
        glVertex2f(0, 0.2673);
        glVertex2f(0.1, 0.281);
        glVertex2f(0.2, 0.284);
        glVertex2f(0.3, 0.2836);
        glVertex2f(0.4, 0.2796);
        glVertex2f(0.5, 0.267);
        glVertex2f(0.6, 0.2404);
        glVertex2f(0.7, 0.1986);
        glVertex2f(0.8, 0.147);
        glVertex2f(0.8527, 0.119);
        glVertex2f(0.8866, 0.093);
        glVertex2f(0.8954, 0.0554);
        glColor3ub(32, 22, 88);
        glVertex2f(0.888, 0.0247);
        glVertex2f(0.787, -0.148);
        glVertex2f(0.747, -0.174);
        glVertex2f(-0.7654, -0.174);
    glEnd();

    // Kaca
    glBegin(GL_QUADS);
        glColor3ub(181, 181, 181);
        glVertex2f(-0.0696, 0.25);
        glVertex2f(0.0264, 0.25);
        glColor3ub(52, 52, 52);
        glVertex2f(-0.234, 0.1195);
        glVertex2f(-0.31, 0.145);
        
        glColor3ub(181, 181, 181);
        glVertex2f(0.08, 0.25);
        glVertex2f(0.3685, 0.25);
        glColor3ub(52, 52, 52);
        glVertex2f(0.3685, 0.1115);
        glVertex2f(-0.18, 0.1115);
        
        glColor3ub(181, 181, 181);
        glVertex2f(0.3956, 0.25);
        glVertex2f(0.55, 0.214);
        glColor3ub(52, 52, 52);
        glVertex2f(0.55, 0.165);
        glVertex2f(0.3955, 0.1115);
    glEnd();

    // Lampu depan
    glBegin(GL_QUADS);
        glColor3ub(245, 221, 97);
        glVertex2f(-0.875, 0.02);
        glVertex2f(-0.725, 0.1);
        glColor3ub(250, 163, 0);
        glVertex2f(-0.675, 0.1);
        glVertex2f(-0.825, 0.02);
    glEnd();

    // Lampu belakang
    glBegin(GL_POLYGON);
        glColor3ub(191, 49, 49);
        glVertex2f(0.8527, 0.119);
        glVertex2f(0.8866, 0.093);
        glVertex2f(0.8954, 0.0554);
        glColor3ub(125, 10, 10);
        glVertex2f(0.888, 0.0247);
        glVertex2f(0.846, 0.0454);
        glVertex2f(0.839, 0.083);
        glVertex2f(0.8527, 0.119);
    glEnd();

    // Gagang pintu
    glPushMatrix();
        glTranslatef(0.22, 0.04, 0);
        glColor3ub(52, 52, 52);
        glRectf(0, 0.02, 0.09, 0);
    glPopMatrix();

    // Spakbor
    glPushMatrix();
        glTranslatef(0, -0.18, 0);
        glColor3ub(52, 52, 52);
        glRectf(-0.4, 0.04, 0.4, 0);
    glPopMatrix();

    // Roda
    glPushMatrix();
        glTranslatef(-0.541, -0.1, 0);
        glColor3ub(52, 52, 52);
        glutSolidSphere(0.17, 50, 50);
        glColor3ub(181, 181, 181);
        glutSolidSphere(0.115, 50, 50);
        glColor3ub(49, 49, 49);
        glutSolidSphere(0.025, 50, 50);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.513, -0.1, 0);
        glColor3ub(52, 52, 52);
        glutSolidSphere(0.17, 50, 50);
        glColor3ub(181, 181, 181);
        glutSolidSphere(0.115, 50, 50);
        glColor3ub(49, 49, 49);
        glutSolidSphere(0.025, 50, 50);
    glPopMatrix();

    // Knalpot
    glBegin(GL_QUADS);
        glColor3ub(52, 52, 52);
        glVertex2f(0.787, -0.148);
        glVertex2f(0.848, -0.042);
        glVertex2f(0.884, -0.043);
        glVertex2f(0.869, -0.147);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("tugas2-2");
    glutDisplayFunc(mobil);
    glClearColor(152/255.0, 171/255.0, 238/255.0, 1);
    glutMainLoop();
    return 0;
}