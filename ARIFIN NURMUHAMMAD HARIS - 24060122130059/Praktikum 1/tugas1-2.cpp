/*
    File        : tugas1-2.cpp      26/02/24
    Penulis     : Arifin Nurmuhammad Haris
    Deskripsi   : Membuat program dengan memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP,
    GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP
*/

#include <gl/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5);

    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3ub(89, 213, 224);
    glVertex2f(-0.8, 0.3);
    glVertex2f(-0.75, 0.7);
    glColor3ub(245, 221, 97);
    glVertex2f(-0.7, 0.3);
    glVertex2f(-0.65, 0.7);
    glColor3ub(250, 163, 0);
    glVertex2f(-0.6, 0.3);
    glVertex2f(-0.55, 0.7);
    glColor3ub(244, 83, 138);
    glVertex2f(-0.5, 0.3);
    glVertex2f(-0.45, 0.7);
    glVertex2f(-0.4, 0.3);
    glEnd();

    // GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
    glColor3ub(165, 221, 155);
    glVertex2f(-0.2, 0.4);
    glColor3ub(197, 235, 170);
    glVertex2f(-0.2, 0.6);
    glVertex2f(0, 0.7);
    glColor3ub(246, 241, 147);
    glVertex2f(0.2, 0.6);
    glColor3ub(242, 193, 141);
    glVertex2f(0.2, 0.4);
    glVertex2f(0, 0.3);
    glEnd();

    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.7, 0.3);
    glColor3ub(94, 22, 117);
    glVertex2f(0.8, 0.35);
    glVertex2f(0.7, 0.4);
    glColor3ub(238, 66, 102);
    glVertex2f(0.8, 0.45);
    glVertex2f(0.7, 0.5);
    glColor3ub(255, 210, 63);
    glVertex2f(0.8, 0.55);
    glVertex2f(0.7, 0.6);
    glColor3ub(51, 115, 87);
    glVertex2f(0.8, 0.65);
    glVertex2f(0.7, 0.7);
    glEnd();

    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(120, 160, 131);
    glVertex2f(-0.8, -0.6);
    glVertex2f(-0.65, -0.3);
    glVertex2f(-0.5, -0.6);
    glColor3ub(80, 114, 123);
    glVertex2f(-0.7, -0.7);
    glVertex2f(-0.55, -0.4);
    glVertex2f(-0.4, -0.7);
    glEnd();

    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3ub(251, 168, 52);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.1, -0.3);
    glColor3ub(51, 58, 115);
    glVertex2f(0.1, -0.3);
    glVertex2f(0.2, -0.5);
    glColor3ub(80, 196, 237);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.1, -0.7);
    glColor3ub(56, 122, 223);
    glVertex2f(0.1, -0.7);
    glVertex2f(0.2, -0.5);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3ub(64, 103, 158);
    glVertex2f(0.4, -0.6);
    glVertex2f(0.4, -0.3);
    glVertex2f(0.7, -0.6);
    glVertex2f(0.7, -0.3);
    glColor3ub(27, 60, 115);
    glVertex2f(0.5, -0.7);
    glVertex2f(0.5, -0.4);
    glVertex2f(0.8, -0.7);
    glVertex2f(0.8, -0.4);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("tugas1-1");
    glutDisplayFunc(display);
    glClearColor(1, 1, 1, 1);
    glutMainLoop();
    return 0;
}