#include <GL/glut.h>

void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(0.05, 0.25, 0.0);
	glVertex3f(0.0, 0.25, 0.0);
	glEnd();
	
	
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.00, 0.0, 0.0);
    glVertex3f(0.00, -0.5, 0.0);
    glVertex3f(0.05, -0.5, 0.0);
    glVertex3f(0.05, 0.0, 0.0);
    glVertex3f(0.00, 0.0, 0.0);
    glVertex3f(0.00, 0.5, 0.0);
    glVertex3f(0.05, 0.5, 0.0);
    glVertex3f(0.05, 0.0, 0.0);
    
    
    
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Bendera dengan garis");
    glutDisplayFunc(Garis);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
}
