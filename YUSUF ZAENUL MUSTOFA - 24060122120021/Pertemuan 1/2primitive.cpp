/*
  Nama : Yusuf Zaenul Mustofa 
  NIM  : 24060122120021
  Lab  : GKV D2
  Menggunakan primitif dari glut - 20/2/2024
*/

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

	// GL_TRIANGLE_FAN
	glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0, -0.3, 0.0);
    glVertex3f(-0.3, 0.15, 0.0);
    glVertex3f(-0.15, 0.3, 0.0);
    glVertex3f(0.15, 0.3, 0.0);
    glVertex3f(0.3, 0.15, 0.0);
    glEnd();
    
    // GL_LINE_LOOP
    glColor3f(0.46, 0.74, 1.0); 
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.3, 0.15, 0.0);
    glVertex3f(-0.15, 0.3, 0.0);
    glVertex3f(-0.15, 0.15, 0.0);
    glVertex3f( 0.0, 0.3, 0.0);
    glVertex3f( 0.15, 0.15, 0.0);
    glVertex3f( 0.15, 0.3, 0.0);
    glVertex3f( 0.3, 0.15, 0.0);
    glEnd();
    
    // GL_LINE_STRIP
    glColor3f(0.46, 0.74, 1.0); 
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.15, 0.15, 0.0);
    glVertex3f(0.0, -0.3, 0.0);
    glVertex3f(0.15, 0.15, 0.0);
    glEnd();

    // GL_TRIANGLE_STRIP
    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_TRIANGLE_STRIP);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(-0.075, 0.55, 0.0);
    glVertex3f(0.0, 0.7, 0.0);
    glVertex3f(0.075, 0.55, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glEnd();

    // GL_QUADS
    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_QUADS);
    glVertex3f(-0.075, 0.45, 0.0);
    glVertex3f(-0.15, 0.6, 0.0);
    glVertex3f(-0.3, 0.6, 0.0);
    glVertex3f(-0.225, 0.45, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex3f(0.075, 0.45, 0.0);
    glVertex3f(0.15, 0.6, 0.0);
    glVertex3f(0.3, 0.6, 0.0);
    glVertex3f(0.225, 0.45, 0.0);
    glEnd();
 
    // GL_QUAD_STRIP
    glColor3f(1.0, 1.0, 1.0); 
    glBegin(GL_QUAD_STRIP);
    glVertex3f(-0.4, -0.3, 0.0);
    glVertex3f(0.4, -0.3, 0.0);
    glVertex3f(-0.3, -0.375, 0.0);
    glVertex3f(0.3, -0.375, 0.0);
    glVertex3f(-0.4, -0.45, 0.0);
    glVertex3f(0.4, -0.45, 0.0);
    glEnd();

    glFlush(); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Primitive");
    glutDisplayFunc(display);
    glClearColor(0.46f, 0.74f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

