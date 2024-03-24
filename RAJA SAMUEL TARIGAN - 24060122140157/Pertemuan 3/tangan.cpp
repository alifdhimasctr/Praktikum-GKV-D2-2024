//Raja Samuel Tarigan

#include <GL/glut.h>
static int arm = 0; //lengan
static int palm = 0; //telapak tangan
static int thumb1 = 0, thumb2 = 0; //ibu jari
static int index1 = 0, index2 = 0; //jari telunjuk
static int middle1 = 0, middle2 = 0; //jari tengah
static int ring1 = 0, ring2 = 0; //jari manis
static int little1 = 0, little2 = 0;//jari kelingking

void init(void) 
{
 	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}

void display(void) 
{
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	//lengan
	glTranslatef (-1.0, 0.0, 0.0);
	glRotatef ((GLfloat) arm, 1.0, 0.0, 0.0);
	glTranslatef (1.0, 0.0, 0.0); 
	glPushMatrix();
	glTranslatef (0.0, -0.7, 0.0);
	glScalef (0.6, 0.7, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	//telapak
	glTranslatef (0.0, -0.2, 0.0);
	glRotatef ((GLfloat) palm, 1.0, 0.0, 0.0);
	glTranslatef (0.0, 0.2, 0.0);
	glPushMatrix();
	glScalef (0.7, 0.8, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	//ibu jari
	glPushMatrix();
	glTranslatef (-0.42, 0.1, 0.0);
	glRotatef ((GLfloat) thumb1, 0.0, 1.0, 0.0);
	glPushMatrix();
	glScalef (0.25, 0.1, 0.1);
	glutWireCube (1.0);
	glPopMatrix();
	glTranslatef (-0.2, 0.0, 0.0);
	glRotatef ((GLfloat) thumb2, 0.0, 1.0, 0.0);
	glPushMatrix();
	glScalef (0.25, 0.1, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	//jari telunjuk
	glPushMatrix();
	glTranslatef (-0.3, 0.5, 0.0);
	glRotatef ((GLfloat) index1, 1.0, 0.0, 0.0); 
	glPushMatrix();
	glScalef (0.1, 0.35, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glTranslatef (0.0, 0.25, 0.0);
	glRotatef ((GLfloat) index2, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef (0.1, 0.35, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	//jari tengah
	glPushMatrix();
	glTranslatef (-1.1, 0.53, 0.0);
	glRotatef ((GLfloat) middle1, 1.0, 0.0, 0.0);
	glTranslatef (1.0, 0.0, 0.0); 
	glPushMatrix();
	glScalef (0.1, 0.38, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glTranslatef (0.0, 0.3, 0.0);
	glRotatef ((GLfloat) middle2, 1.0, 0.0, 0.0); 
	glPushMatrix();
	glScalef (0.1, 0.38, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	//jari manis	
	glPushMatrix();
	glTranslatef (-0.9, 0.5, 0.0);
	glRotatef ((GLfloat) ring1, 1.0, 0.0, 0.0);
	glTranslatef (1.0, 0.0, 0.0); 
	glPushMatrix();
	glScalef (0.1, 0.33, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glTranslatef (0.0, 0.22, 0.0);
	glRotatef ((GLfloat) ring2, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef (0.1, 0.33, 0.1);
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	//jari kelingking
	glPushMatrix();
	glTranslatef (0.3, 0.49, 0.0);
	glRotatef ((GLfloat) little1, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef (0.1, 0.31, 0.1);
	glutWireCube (1.0); glPopMatrix();
	glTranslatef (0.0, 0.22, 0.0);
	glRotatef ((GLfloat) little2, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef (0.1, 0.31, 0.1);
	glutWireCube (1.0); glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glutSwapBuffers();
}

void reshape (int w, int h) 
{
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION); glLoadIdentity();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW); glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) 
{
	switch (key) {
	//arm
	case '1': arm = (arm + 5) % 360;
	if (arm > 45) arm = 45;
	glutPostRedisplay(); break;
	case 'q': arm = (arm - 5) % 360;
	if (arm < -45) arm = -45;
	glutPostRedisplay(); break;
	//palm	
	case 'w': palm = (palm - 5) % 360;
	if (palm < -15) palm = -15;
	glutPostRedisplay(); break;
	case '2': palm = (palm + 5) % 360;
	if (palm > 15) palm = 15;
	glutPostRedisplay(); break;
	//thumb
	case '3': thumb1 = (thumb1 + 5) % 360;
	if (thumb1 > 90) thumb1 = 90;
	glutPostRedisplay(); break;
	case 'e': thumb1 = (thumb1 - 5) % 360;
	if (thumb1 < 0) thumb1 = 0;
	glutPostRedisplay(); break;
	case 'a': thumb2 = (thumb2 + 5) % 360;
	if (thumb2 > 90) thumb2 = 90;
	glutPostRedisplay(); break;
	case 'z': thumb2 = (thumb2 - 5) % 360;
	if (thumb2 < 0) thumb2 = 0;
	glutPostRedisplay(); break;
	//index
	case '4': index1 = (index1 + 5) % 360;
	if (index1 > 90) index1 = 90;
	glutPostRedisplay(); break;
	case 'r': index1 = (index1 - 5) % 360;
	if (index1 < 0) index1 = 0;
	glutPostRedisplay(); break;
	case 's': index2 = (index2 + 5) % 360;
	if (index2 > 90) index2 = 90;
	glutPostRedisplay(); break;
	case 'x': index2 = (index2 - 5) % 360;
	if (index2 < 0) index2 = 0;
	glutPostRedisplay(); break;
	//middle
	case '5': middle1 = (middle1 + 5) % 360;
	if (middle1 > 90) middle1 = 90;
	glutPostRedisplay(); break;
	case 't': middle1 = (middle1 - 5) % 360;
	if (middle1 < 0) middle1 = 0;
	glutPostRedisplay(); break;
	case 'd': middle2 = (middle2 + 5) % 360;
	if (middle2 > 90) middle2 = 90;
	glutPostRedisplay(); break;
	case 'c': middle2 = (middle2 - 5) % 360;
	if (middle2 < 0) middle2 = 0;
	glutPostRedisplay(); break;
	//ring
	case '6': ring1 = (ring1 + 5) % 360;
	if (ring1 > 90) ring1 = 90;
	glutPostRedisplay(); break;
	case 'y': ring1 = (ring1 - 5) % 360;
	if (ring1 < 0) ring1 = 0;
	glutPostRedisplay(); break;
	case 'f': ring2 = (ring2 + 5) % 360;
	if (ring2 > 90) ring2 = 90;
	glutPostRedisplay(); break;
	case 'v': ring2 = (ring2 - 5) % 360;
	if (ring2 < 0) ring2 = 0;
	//little
	case '7': little1 = (little1 + 5) % 360;
	if (little1 > 90) little1 = 90;
	glutPostRedisplay(); break;
	case 'u': little1 = (little1 - 5) % 360;
	if (little1 < 0) little1 = 0;
	glutPostRedisplay(); break;
	case 'g': little2 = (little2 + 5) % 360;
	if (little2 > 90) little2 = 90;
	glutPostRedisplay(); break;
	case 'b': little2 = (little2 - 5) % 360;
	if (little2 < 0) little2 = 0;
	glutPostRedisplay(); break;
	case 27: exit(0); break;
	default: break;
	}
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (700, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow (argv[0]); init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop(); 
	return 0;
} 







