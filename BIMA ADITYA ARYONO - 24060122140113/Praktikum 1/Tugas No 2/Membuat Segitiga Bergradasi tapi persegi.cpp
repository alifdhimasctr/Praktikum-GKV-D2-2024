#include <GL/glut.h>

void Segitiga(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0, 0.0, 0.00);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.25, 0.25, 0.00);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.25, 0.25, 0.00);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.25, -0.25, 0.00);
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    
    glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(0.5,0.0,0.0);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(0.5,0.5,0.0);
    glVertex3f(0.75,0.0,0.0);
    
    
    glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(0.75,0.5,0.0);
    
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(0.5,0.5,0.0);
    
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Segitiga Bergradasi");
    glutDisplayFunc(Segitiga);
    glClearColor(01.0f, 01.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
