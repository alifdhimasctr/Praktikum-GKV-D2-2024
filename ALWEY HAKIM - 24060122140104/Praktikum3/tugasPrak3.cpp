/*
  File		:	tugasPrak3.cpp	11/3/2024
  Penulis	:	Alwey Hakim
  Deskripsi	:	Membuat lengan, telapak, dan jari-jari berbentuk 3D yang bisa digerakkan menggunakan keyboard.
  				Panduan gerakan:
					a = bahu
					s = siku
					d = telapak
					1, 2, 3, 4, 5 = jari-jari
					(shift + key untuk bergerak berlawanan arah)
 */

#include <GL/glut.h>
static int shoulder = 0, elbow = 0, hand = 0, finger1 = 0, finger2 = 0, finger3 = 0, finger4 = 0, thumb = 0;

void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
 		glTranslatef (-1.0, 0.0, 0.0); // Bahu
 		glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
 			glScalef (2.0, 0.4, 1.0);
			glutWireCube (1.0); 
		glPopMatrix();
		
 		glTranslatef (1.0, 0.0, 0.0); // Siku
 		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
 			glScalef (2.0, 0.4, 1.0);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(1, 0, 0); // telapak
		glRotatef ((GLfloat) hand, 0, 0, 1);
		glTranslatef (0.34, 0, 0); 
		glPushMatrix();
 			glScalef (0.7, 0.25, 1);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(0.3, 0, -0.31); // jari kelingking
		glPushMatrix();
			glRotatef ((GLfloat) finger1, 0, 0, 1);
			glTranslatef (0.3, 0, 0); 
 			glScalef (0.6, 0.15, 0.15);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(0, 0, 0.2); // jari manis
		glPushMatrix();
			glRotatef ((GLfloat) finger2, 0, 0, 1);
			glTranslatef (0.3, 0, 0); 
 			glScalef (0.6, 0.15, 0.15);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(0, 0, 0.2); // jari tengah
		glPushMatrix();
			glRotatef ((GLfloat) finger3, 0, 0, 1);
			glTranslatef (0.3, 0, 0); 
			glScalef (0.6, 0.15, 0.15);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(0, 0, 0.2); // telunjuk
		glPushMatrix();
			glRotatef ((GLfloat) finger4, 0, 0, 1);
			glTranslatef (0.3, 0, 0); 
 			glScalef (0.6, 0.15, 0.15);
			glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(-0.3, 0, 0.2); // jempol
		glRotatef(-90, 0, 1, 0);
		glPushMatrix();
			glRotatef ((GLfloat) thumb, 0, 0, 1);
			glTranslatef (0.1, 0, 0); 
 			glScalef (0.3, 0.15, 0.15);
			glutWireCube (1.0);
		glPopMatrix(); 
		
	glPopMatrix();
glutSwapBuffers();
}

void reshape (int w, int h) {
 glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION); glLoadIdentity
();
 gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW); glLoadIdentity();
 glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
switch (key) {
	
 case 'a': shoulder = (shoulder + 5) % 360;
glutPostRedisplay(); break;

 case 'A': shoulder = (shoulder - 5) % 360;
glutPostRedisplay(); break;

 case 's':
	if (elbow <= 130){
		elbow = elbow + 5;
	}	
glutPostRedisplay(); break;

case 'S':
	if (elbow >= 0){
		elbow = elbow - 5;
	}	
glutPostRedisplay(); break;

case 'd':
	if (hand <= 90){
		hand = hand + 5;
	}	
glutPostRedisplay(); break;

case 'D':
	if (hand >= 0){
		hand = hand - 5;
	}	
glutPostRedisplay(); break;

case '1':
	if (finger1 <= 110){
		finger1 = finger1 + 5;
	}	
glutPostRedisplay(); break;

case '!':
	if (finger1 >= 0){
		finger1 = finger1 - 5;
	}	
glutPostRedisplay(); break;

case '2':
	if (finger2 <= 110){
		finger2 = finger2 + 5;
	}	
glutPostRedisplay(); break;

case '@':
	if(finger2 >= 0){
		finger2 = finger2 - 5;
	}	
glutPostRedisplay(); break;
	
case '3':
	if (finger3 <= 110){
		finger3 = finger3 + 5;
	}	
glutPostRedisplay(); break;

case '#':
	if (finger3 >= 0){
		finger3 = finger3 - 5;
	}	
glutPostRedisplay(); break;
		
case '4':
	if (finger4 <= 110){
		finger4 = finger4 + 5;
	}	
glutPostRedisplay(); break;

case '$':
	if (finger4 >= 0){
		finger4 = finger4 - 5;
	}
glutPostRedisplay(); break;
	
case '5':
	if (thumb <= 110){
		thumb = thumb + 5;
	}	
glutPostRedisplay(); break;

case '%':
	if (thumb >= 0){
		thumb = thumb - 5;
	}
glutPostRedisplay(); break;

case 27: exit(0); break;
default: break;
 }
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (700, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow (argv[0]); init();
 glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMainLoop(); return 0;
} 
