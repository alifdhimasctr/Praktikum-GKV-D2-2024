/*  Nama        : Muhammad Ahsan Yudhistira
    NIM         : 24060122130083
    Deskripsi   : program dengan fungsi GL_LINE_STRIP, GL_LINE_LOOP,
                  GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
*/

#include <gl/glut.h>
void josjis(void) {
    // GL_LINE_STRIP
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.0f);
    glBegin(GL_LINE_STRIP);
    glColor3ub(120, 100, 130);
    glVertex2f(-0.9, 0.6);
    glColor3ub(60, 150, 200);
    glVertex2f(-0.7, 0.8);
    glColor3ub(70, 50, 150);
    glVertex2f(-0.5, 0.6);
    glEnd();

    // GL_LINE_LOOP
    glLineWidth(5.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(80, 150, 100);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.1, 0.1);
    glColor3ub(150, 100, 140);
    glVertex2f(0, 0.5);
    glVertex2f(-0.1, 0.9);
    glEnd();

    // GL_TRIANGLE_FAN
    glLineWidth(5.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 197, 200);
    glVertex2f(0.4, 0.5);
    glColor3ub(255, 50, 180);
    glVertex2f(0.4, 0.2);
    glColor3ub(10, 60, 50);
    glVertex2f(0.7, 0.2);
    glColor3ub(194, 100, 208);
    glVertex2f(0.4, 0.9);
    glColor3ub(120, 158, 208);
    glVertex2f(0.7, 0.7);
    glColor3ub(80, 200, 100);
    glVertex2f(0.4, 0.5);
    glEnd();

    // GL_TRIANGLE_STRIP
    glLineWidth(5.0f);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(120, 80, 159);
    glVertex2f(-0.90, -0.50);
    glVertex2f(-0.60, -0.50);
    glVertex2f(-0.60, -0.10);
    glColor3ub(20, 50, 170);
    glVertex2f(-0.90, -0.10);
    glVertex2f(-0.90, -0.50);
    glVertex2f(-0.60, -0.50);
    glEnd();

    // GL_QUADS
    glLineWidth(4.0f);
    glBegin(GL_QUADS);
    glColor3ub(77, 27, 123);
    glVertex2f(0.05, -0.45);
    glVertex2f(0.27, -0.45);
    glVertex2f(0.27, -0.20);
    glVertex2f(0.05, -0.20);

    glColor3ub(77, 27, 123);
    glVertex2f(0.39, -0.45);
    glVertex2f(0.61, -0.45);
    glVertex2f(0.61, -0.20);
    glVertex2f(0.39, -0.20);

    glColor3ub(55, 56, 84);
    glVertex2f(0.18, -0.40);
    glVertex2f(0.48, -0.40);
    glColor3ub(239, 79, 145);
    glVertex2f(0.48, 0);
    glVertex2f(0.18, 0);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3ub(255, 89, 143);
    glVertex2f(-0.4, -0.4);
    glVertex2f(-0.4, -0.7);
    glVertex2f(-0.1, -0.4);
    glVertex2f(-0.1, -0.7);

    glColor3ub(224, 227, 0);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.3, -0.8);
    glVertex2f(0, -0.5);
    glVertex2f(0, -0.8);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(720, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("tugas1_2");
    glutDisplayFunc(josjis);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}