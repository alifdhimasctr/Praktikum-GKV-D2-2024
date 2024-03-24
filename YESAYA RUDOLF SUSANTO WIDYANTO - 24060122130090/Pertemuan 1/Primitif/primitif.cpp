#include <GL/glut.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
	
	// Atap
	glColor3f(0.42, 0.28, 0.011); 
    glBegin(GL_QUAD_STRIP);
    glVertex3f(-0.8, 0.3, 0.0);
    glVertex3f(0.8, 0.3, 0.0);
    glVertex3f(-0.25, 0.5, 0.0);
    glVertex3f(0.25, 0.5, 0.0);
    glVertex3f(-0.1, 0.65, 0.0);
    glVertex3f(0.1, 0.65, 0.0);
    glEnd();
    
    // Aksesoris Atap
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0, 0.8, 0.0);
    glVertex3f(-0.15, 0.7, 0.0);
    glVertex3f(-0.1, 0.65, 0.0);
    glVertex3f(0.1, 0.65, 0.0);
    glVertex3f(0.15, 0.7, 0.0);
    glEnd();
    
    // Dinding
    glBegin(GL_QUADS);
    glColor3f(0.78, 0.53, 0.071); 
    glVertex3f(-0.6, 0.3, 0.0);
    glVertex3f(0.6, 0.3, 0.0);
    glColor3f(0.86, 0.59, 0.086);
    glVertex3f(0.6, -0.3, 0.0);
    glVertex3f(-0.6, -0.3, 0.0);
    glEnd();
    
    // Pintu
    glColor3f(0.87, 0.73, 0.15);
    glBegin(GL_QUADS);
    glVertex3f(-0.2, -0.3, 0.0);
    glVertex3f(-0.2, 0.1, 0.0);
    glVertex3f(0.2, 0.1, 0.0);
    glVertex3f(0.2, -0.3, 0.0);
    glEnd();
    
    // Jendela
	glBegin(GL_QUADS);
    glVertex3f(-0.4, 0.05, 0.0);
    glVertex3f(-0.25, 0.05, 0.0);
    glVertex3f(-0.25, 0.2, 0.0);
    glVertex3f(-0.4, 0.2, 0.0);
    glEnd();
    
	glBegin(GL_QUADS);
	glVertex3f(0.4, 0.05, 0.0);
    glVertex3f(0.25, 0.05, 0.0);
    glVertex3f(0.25, 0.2, 0.0);
    glVertex3f(0.4, 0.2, 0.0);
    glEnd();
    
    // Pintu
    glColor3f(0.42, 0.28, 0.011); 
    glColor3f(0.0, 0.0, 0.0); 
    glBegin(GL_LINE_STRIP);
    glVertex3f(-0.2, -0.3, 0.0);
    glVertex3f(-0.2, 0.1, 0.0);
    glVertex3f(0.2, 0.1, 0.0);
    glVertex3f(0.2, -0.3, 0.0);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.0, -0.3, 0.0);
    glVertex3f(0.0, 0.1, 0.0);
    glEnd();
    
    // Jendela
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.4, 0.05, 0.0);
    glVertex3f(-0.25, 0.05, 0.0);
    glVertex3f(-0.25, 0.2, 0.0);
    glVertex3f(-0.4, 0.2, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.4, 0.05, 0.0);
    glVertex3f(0.25, 0.05, 0.0);
    glVertex3f(0.25, 0.2, 0.0);
    glVertex3f(0.4, 0.2, 0.0);
    glEnd();
	
    
	// Tangga
	glColor3f(0.31, 0.31, 0.31); 
	glBegin(GL_QUADS);
    glVertex3f(-0.7, -0.3, 0.0);
    glVertex3f(0.7, -0.3, 0.0);
    glVertex3f(0.7, -0.4, 0.0);
    glVertex3f(-0.7, -0.4, 0.0);
    glEnd();
	
	glBegin(GL_QUADS);
    glVertex3f(-0.8, -0.4, 0.0);
    glVertex3f(0.8, -0.4, 0.0);
    glVertex3f(0.8, -0.5, 0.0);
    glVertex3f(-0.8, -0.5, 0.0);
    glEnd();
    
    // Tiang
    glColor3f(0.72, 0.59, 0.35);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, -0.3, 0.0);
    glVertex3f(-0.425, -0.3, 0.0);
    glVertex3f(-0.425, 0.3, 0.0);
    glVertex3f(-0.5, 0.3, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(0.5, -0.3, 0.0);
    glVertex3f(0.425, -0.3, 0.0);
    glVertex3f(0.425, 0.3, 0.0);
    glVertex3f(0.5, 0.3, 0.0);
    glEnd();
    
	glFlush();	
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Rumah Joglo");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
