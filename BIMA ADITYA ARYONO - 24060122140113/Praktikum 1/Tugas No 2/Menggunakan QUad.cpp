#include <GL/glut.h>

void PERSEGI(void) {
  glClear(GL_COLOR_BUFFER_BIT);

// bendera palestina

 //balok 
  glBegin(GL_QUADS);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex3f(0.0, 0.25, 0.00);
  glVertex3f(0.5, 0.25, 0.00);
  glVertex3f(0.5, 0.1, 0.00);
  glVertex3f(0.15, 0.1, 0.00);
  glEnd();

 //balok 
  glBegin(GL_QUADS);
  glColor3f(0.0f, 0.5f, 0.0f);
  glVertex3f(0.0, -0.25, 0.00);
  glVertex3f(0.5, -0.25, 0.00);
  glVertex3f(0.5, -0.1, 0.00);
  glVertex3f(0.15, -0.1, 0.00);
  glEnd();
  
  glBegin(GL_QUADS);
  glColor3f(1.0f,1.0f,1.0f);
  glVertex3f(0.5, -0.1, 0.00);
  glVertex3f(0.15, -0.1, 0.00);
  glVertex3f(0.15, 0.1, 0.00);
  glVertex3f(0.5, 0.1, 0.00);
  
  
  glEnd();
  
    glBegin(GL_TRIANGLES);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex3f(0.0, 0.25, 0.00);
  glVertex3f(0.0, -0.25, 0.0);
  glVertex3f(0.25, 0.0, 0.00);
  glEnd();
	 //balok 
	 
	// ketupat
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.0f,0.82f,0.0f);
	glVertex3f(-0.75,0,0);
	glVertex3f(-0.5,0.5,0);
	
	glVertex3f(-0.5,-0.5,0);
	glVertex3f(-0.25,0,0); 
	glColor3f(0.0f,0.5f,0.0f);
	
	glVertex3f(-0.75,0.00,0.0);
	glVertex3f(-0.25,0.0,0.0);
	glEnd();
	 

  glFlush();
}

int main(int argc, char* argv[]) {
  glutInit(&argc, argv);
  glutInitWindowSize(640, 480);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
  glutCreateWindow("Bendera Palestina dan Ketupat");
  glutDisplayFunc(PERSEGI); 
  glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
  glutMainLoop();
}

