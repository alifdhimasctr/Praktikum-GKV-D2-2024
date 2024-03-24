/* 	
	Nama: Ilham Rismawan Faadhi
	Nim: 24060122140182
	Deskripsi: Membuat tangan
*/
#include <stdio.h>
#include <GL\glut.h>
// lengan dan tangan
static int shoulder = 0, elbow = 0, hand = 0, origin = 0, model_rotate = 0;

// jari
static int thumb = 0, idx_fgr = 0, mid_fgr = 0, rng_fgr = 0, lit_fgr = 0;
void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}
void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	// shoulder
	glTranslatef (-2.0, 0.0, 0.0);
	glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
	glRotatef((GLfloat) model_rotate, 1.0, 0.0, 0.0);
	glTranslatef (1.0, 0.0, 0.0); glPushMatrix();
	glScalef (2.0, 0.4, 1.0);
	glutWireCube (1.0); glPopMatrix();
	// elbow
	glPushMatrix();
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
	glTranslatef (1.0, 0.0, 0.0); glPushMatrix();
	glScalef (2.0, 0.4, 1.0);
	glutWireCube (1.0);glPopMatrix(); 
	// hand 
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) hand, 0.0, 0.0, 1.0);
	glTranslatef (1.0, 0.0, 0.0); glPushMatrix();
	glScalef (2.0, 0.4, 2.5);
	glutWireCube (1.0);glPopMatrix(); 
	
	
	// thumb
	glPushMatrix();
	glTranslatef (1.0, 0.0, 1.0);
	glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
	glTranslatef (0.8, 0.0, 0.0); glPushMatrix();
	glScalef (1.5, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	// little thumb
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
	glTranslatef (0.3, 0.0, 0.0); glPushMatrix();
	glScalef (1.0, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	glPopMatrix();
	
	// index
	glPushMatrix();
	glTranslatef (1.0, 0.0, 0.5);
	glRotatef ((GLfloat) idx_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.8, 0.0, 0.0); glPushMatrix();
	glScalef (1.5, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	// little index
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) idx_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.3, 0.0, 0.0); glPushMatrix();
	glScalef (1.0, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	glPopMatrix();
	
	// middle
	glPushMatrix();	
	glTranslatef (1.0, 0.0, -0.0);
	glRotatef ((GLfloat) mid_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.8, 0.0, 0.0); glPushMatrix();
	glScalef (1.5, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	// little middle
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) mid_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.3, 0.0, 0.0); glPushMatrix();
	glScalef (1.0, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	glPopMatrix(); 

	// ring	
	glPushMatrix();	
	glTranslatef (1.0, 0.0, -0.5);
	glRotatef ((GLfloat) rng_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.8, 0.0, 0.0); glPushMatrix();
	glScalef (1.5, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	// little ring
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) rng_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.3, 0.0, 0.0); glPushMatrix();
	glScalef (1.0, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	glPopMatrix(); 
	
	// little	
	glTranslatef (1.0, 0.0, -1.0);
	glRotatef ((GLfloat) lit_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.8, 0.0, 0.0); glPushMatrix();
	glScalef (1.5, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	// little little
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef ((GLfloat) lit_fgr, 0.0, 0.0, 1.0);
	glTranslatef (0.3, 0.0, 0.0); glPushMatrix();
	glScalef (1.0, 0.4, 0.3);
	glutWireCube (1.0);glPopMatrix(); 
	glPopMatrix(); 
	
	
	glPopMatrix();
	glutSwapBuffers();
}
void reshape (int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION); glLoadIdentity();
	gluPerspective(100.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW); glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}



void keyboard_hand(unsigned char key, int x, int y) {
	switch (key) {

	glutPostRedisplay(); break;
	case 's': shoulder = (shoulder + 5) % 360;
	glutPostRedisplay(); break;
	case 'S': shoulder = (shoulder - 5) % 360;

	glutPostRedisplay(); break;
	case 'e': elbow = (elbow + 5) % 360;
	glutPostRedisplay(); break;
	case 'E': elbow = (elbow - 5) % 360;
	glutPostRedisplay(); break;
	case 'r': hand = (hand + 5) % 360;
	glutPostRedisplay(); break;
	case 'R': hand = (hand - 5) % 360;
	glutPostRedisplay(); break;

	// model rotate
	case 'f': model_rotate = (model_rotate + 5) % 360;
	glutPostRedisplay(); break;
	case 'F': model_rotate = (model_rotate - 5) % 360;
	glutPostRedisplay(); break;
	
	// finger
	case '1': thumb = (thumb + 5) % 360;
	glutPostRedisplay(); break;
	case '!': thumb = (thumb - 5) % 360;
	glutPostRedisplay(); break;
	
	case '2': idx_fgr = (idx_fgr + 5) % 360;
	glutPostRedisplay(); break;
	case '@': idx_fgr = (idx_fgr - 5) % 360;
	glutPostRedisplay(); break;
	
	case '3': mid_fgr = (mid_fgr + 5) % 360;
	glutPostRedisplay(); break;
	case '#': mid_fgr = (mid_fgr - 5) % 360;
	glutPostRedisplay(); break;
	
	case '4': rng_fgr = (rng_fgr + 5) % 360;
	glutPostRedisplay(); break;
	case '$': rng_fgr = (rng_fgr - 5) % 360;
	glutPostRedisplay(); break;
	
	case '5': lit_fgr = (lit_fgr + 5) % 360;
	glutPostRedisplay(); break;
	case '%': lit_fgr = (lit_fgr - 5) % 360;
	
	
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
	glutKeyboardFunc(keyboard_hand);
	glutMainLoop(); return 0;
}
