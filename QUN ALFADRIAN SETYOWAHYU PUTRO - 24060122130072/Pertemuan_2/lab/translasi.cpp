#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void RenderScene(void) {
	glPushMatrix();
	 glLineWidth(2.0f);
	 glBegin(GL_LINES);
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex3f(0.0, 0.2, 0.0);
	  glVertex3f(0.0, -0.2, 0.0);
	 glEnd();
	glPopMatrix();
	
	glPushMatrix();
	 glPointSize(5);
	 glTranslatef(0.35, 0.35, 0.0);
	 glBegin(GL_POINTS);
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex3f(0.25, 0.25, 0.0);
	 glEnd();
	glPopMatrix();
	
	glPushMatrix();
	 glTranslatef(0.5, 0.5, 0.0);
	 glBegin(GL_TRIANGLE_STRIP);
	  glColor3f(1.0f, 1.0f, 0.0f); glVertex3f(-0.05, -0.05, 0.0);
	  glColor3f(0.0f, 1.0f, 1.0f); glVertex3f(0.15, -0.05, 0.0);
	  glColor3f(1.0f, 0.0f, 1.0f); glVertex3f(-0.05, 0.05, 0.0);
	 glEnd();
	glPopMatrix();
	
	glPushMatrix();
	 #define PI 3.1415926535898
	 glBegin(GL_LINE_LOOP);
	  GLint circle_points = 100;
	  int i;
	  float angle;
	  
	  for (i=0; i<circle_points; i++) {
	  	angle = 2*PI*i/circle_points;
	  	glVertex2f(cos(angle), sin(angle));
	  }
	 glEnd();
	glPopMatrix();
}

void SegiEmpat(void) {
	glTranslatef(-0.50, 0.50, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(-0.18, 0.18, 0.18, -0.18);
}

void Segitiga(void) {
	glTranslatef(0.25, -0.25, 0);
	glRotated(60.0, 0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f); glVertex3f(-0.05, -0.05, 0.0);
	glColor3f(0.0f, 1.0f, 1.0f); glVertex3f(0.15, -0.05, 0.0);
	glColor3f(1.0f, 0.0f, 1.0f); glVertex3f(-0.05, 0.05, 0.0);
	glEnd();
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);
//	SegiEmpat();
//	Segitiga();
	RenderScene();
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Segi Empat");
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
