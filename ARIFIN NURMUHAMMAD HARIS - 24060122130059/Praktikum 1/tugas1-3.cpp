/*
    File        : tugas1-3.cpp      26/02/24
    Penulis     : Arifin Nurmuhammad Haris
    Deskripsi   : Membuat Gambar Kubus bertingkat dari objek primitif
*/

#include <gl/glut.h>

void kubus(float x, float y) {
    glRectf(x, y, x + 0.2, y - 0.2);
    // Border
    glColor3ub(127, 127, 127);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x, y);
    glVertex2f(x + 0.2, y);
    glVertex2f(x + 0.2, y - 0.2);
    glVertex2f(x, y - 0.2);
    glEnd();
}


void kubusBertingkat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5);
    for (float i = -0.5; i <= 0.4; i += 0.2) {
        glColor3ub(255, 190, 152);
        kubus(i, -0.3);
    }
    for (float i = -0.4; i <= 0.3; i += 0.2) {
        glColor3ub(254, 236, 226);
        kubus(i, -0.1);
    }
    for (float i = -0.3; i <= 0.2; i += 0.2) {
        glColor3ub(247, 222, 208);
        kubus(i, 0.1);
    }
    for (float i = -0.2; i <= 0.1; i += 0.2) {
        glColor3ub(226, 191, 179);
        kubus(i, 0.3);
    }
    for (float i = -0.1; i <= 0.0; i += 0.2) {
        glColor3ub(205, 160, 150);
        kubus(i, 0.5);
    }

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("tugas1-2");
    glutDisplayFunc(kubusBertingkat);
    glClearColor(1, 1, 1, 1);
    glutMainLoop();
    return 0;
}