#include <GL/glut.h>

void Display() {
    glClear(GL_COLOR_BUFFER_BIT);
   
    // Menggambar GL_LINE_LOOP
    glLineWidth(5.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(34, 174, 255);
    glVertex2f(-0.9, 0.5);
    glVertex2f(-0.75, 0.6);
    glVertex2f(-0.6, 0.5);
    glColor3ub(126, 0, 255);
    glVertex2f(-0.6, 0.8);
    glVertex2f(-0.9, 0.8);
    glEnd();
    
	// Menggambar GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3ub(255, 248, 0);
    glVertex2f(0.0, 0.5);
    glVertex2f(-0.3, 0.5);
    glColor3ub(152, 242, 29);
    glVertex2f(0.0, 0.8);
    glVertex2f(-0.3, 0.8);
    glEnd();
    
    // Menggambar GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(213, 19, 18);
    glVertex2f(-0.4, 0.0);
    glVertex2f(-0.6, 0.0); 
    glColor3ub(201, 39, 38);
    glVertex2f(-0.9, 0.2); 
    glVertex2f(-0.6, 0.2); 
    glColor3ub(201, 39, 38);
    glVertex2f(-0.4, 0.4); 
    glVertex2f(-0.2, 0.2); 
    glColor3ub(213, 19, 18);
    glVertex2f(0.1, 0.2); 
    glVertex2f(-0.2, 0.0); 
    glEnd();
    
	// Menggambar GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(216, 13, 118);
    glVertex2f(0.3, 0.5);
    glVertex2f(0.6, 0.5);
    glColor3ub(216, 13, 196);
    glVertex2f(0.45, 0.7);
    glVertex2f(0.75, 0.7);
    glColor3ub(172, 13, 216);
    glVertex2f(0.6, 0.9);
    glEnd();
    
    // Menggambar GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0); 
    glVertex2f(0.4, 0.0);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.9, 0.4);
    glVertex2f(0.9, 0.0);
    glEnd();
    
    // Menggambar GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.1f);
    glVertex2f(-0.9f, -0.6f);
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.4f, -0.1f); 
    glVertex2f(-0.4f, -0.6f);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.1f, -0.1f); 
    glVertex2f(0.1f, -0.6f);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL Gabungan");
    glutDisplayFunc(Display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
