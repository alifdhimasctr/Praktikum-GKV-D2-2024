#include <GL/glut.h>

static int shoulder1 = 0, shoulder2 = 0, shoulder3 = 0, elbow = 0, hand = 0, arm1 = 0, arm2 = 0, arm3 = 0, arm4 = 0, arm5 = 0;

void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0); 
	glShadeModel (GL_FLAT);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT); 
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glScalef(0.45, 0.45, 0.45);
	glRotatef((GLfloat)shoulder1, 0.0, 1.0, 0.0);
	glRotatef((GLfloat)shoulder2, 1.0, 0.0, 0.0);
	glRotatef((GLfloat)shoulder3, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0); 
	glutWireCube(1.0); 
	glPopMatrix();
	
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef((GLfloat) elbow, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0); 
	glutWireCube(1.0); 
	glPopMatrix();
	
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef((GLfloat)hand, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, -0.4);
	glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
	glTranslatef(0.35, 0.0, 0.0);
	glScalef(0.7, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, -0.125);
	glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
	glTranslatef(0.4, 0.0, 0.0);
	glScalef(0.8, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.125);
	glRotatef((GLfloat)arm3, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.4);
	glRotatef((GLfloat)arm4, 0.0, 0.0, 1.0);
	glTranslatef(0.4, 0.0, 0.0);
	glScalef(0.8, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.5);
	glRotatef((GLfloat)arm5, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.0, 0.25);
	glScalef(0.4, 0.2, 0.5);
	glutWireCube(1.0);
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();
}

void reshape(int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity ();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0); 
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
		case 'a': shoulder1 = (shoulder1 + 5) % 360; 
            glutPostRedisplay();
            break;
        case 'A': shoulder1 = (shoulder1 - 5) % 360;
            glutPostRedisplay();
			break;
		case 's': shoulder2 = (shoulder2 + 5) % 360;
			glutPostRedisplay();
			break;
		case 'S': shoulder2 = (shoulder2 - 5) % 360;
			glutPostRedisplay();
			break;
		case 'd': shoulder3 = (shoulder3 + 5) % 360;
			glutPostRedisplay();
			break;
		case 'D': shoulder3 = (shoulder3 - 5) % 360;
			glutPostRedisplay();
			break;
		case 'z': elbow = (elbow + 5) % 360;
            glutPostRedisplay();
            break;
		case 'Z': elbow = (elbow - 5) % 360;
			glutPostRedisplay();
			break;
		case 'x': hand = (hand + 5) % 360;
			glutPostRedisplay();
			break;
		case 'X': hand = (hand - 5) % 360;
			glutPostRedisplay();
			break;
		case 'q': arm1 = (arm1 + 5) % 360;
			glutPostRedisplay();
			break;
		case 'Q': arm1 = (arm1 - 5) % 360;
			glutPostRedisplay();
			break;
		case 'w': arm2 = (arm2 + 5) % 360;
			glutPostRedisplay();
			break;
		case 'W': arm2 = (arm2 - 5) % 360;
			glutPostRedisplay();
			break;
		case 'e': arm3 = (arm3 + 5) % 360;
			glutPostRedisplay();
			break;
		case 'E': arm3 = (arm3 - 5) % 360;
			glutPostRedisplay();
			break;
		case 'r': arm4 = (arm4 + 5) % 360;
			glutPostRedisplay();
			break;
		case 'R': arm4 = (arm4 - 5) % 360;
			glutPostRedisplay();
			break;
		case 't': arm5 = (arm5 - 5) % 360;
			glutPostRedisplay();
			break;
		case 'T': arm5 = (arm5 + 5) % 360;
			glutPostRedisplay();
			break;
		case 27: exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
	glutInitWindowSize (700, 600); 
	glutInitWindowPosition (100, 100); 
	glutCreateWindow (argv[0]); 
	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape); 
	glutKeyboardFunc(keyboard); 
	glutMainLoop();
}
