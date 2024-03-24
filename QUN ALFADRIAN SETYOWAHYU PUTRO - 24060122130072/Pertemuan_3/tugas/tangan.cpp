/*
Nama	: Qun Alfadrian S. P.
NIM		: 24060122130072 


=============== KEYBIND ===============
KELINGKING 		: w, s, q, W, S, Q
JARI MANIS		: e, d, c, E, D, C
JARI TENGAH		: r, f, v, R, F, V
JARI TELUNJUK	: t, g, b, T, G, B
JEMPOL			: y, h, n, Y, H, N,

RESET			: TAB
SET MAX			: q
PRESET			: 1, 2, 3
*/
#include <GL/glut.h>

static int yPalmRot = 0, yPalmDir = 0;
static int shoulder = 0, elbow = 0;

static int minRot = 5, maxRot = 60;
static int thumbT = 5, thumbM = 5, thumbB = 5;
static int indexT = 5, indexM = 5, indexB = 5;
static int middleT = 5, middleM = 5, middleB = 5;
static int ringT = 5, ringM = 5, ringB = 5;
static int pinkyT = 5, pinkyM = 5, pinkyB = 5;

void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0); 
	glShadeModel (GL_FLAT);
}

int addRotation(int startRotation, int maxRotation, int rotateAmount) {
	if ((startRotation + rotateAmount) % 360 <= maxRotation) {
		return (startRotation + rotateAmount) % 360;
	} else {
		return startRotation;
	}
}

int substractRotation(int startRotation, int minRotation, int rotateAmount) {
	if ((startRotation - rotateAmount) % 360 >= minRotation) {
		return (startRotation - rotateAmount) % 360;
	} else {
		return startRotation;
	}
}

void palm(void) {
	glPushMatrix();
		glTranslatef(0.0, -1.0, 0.0);
		glRotatef(25.0, 0.0, -1.0, 0.0);
		glScalef(2.2f, 1.5f, 0.5f);
		glutWireCube(1.0);
	glPopMatrix();
}

void thumb(void) {
	glPushMatrix();
		glRotatef(25, 0.0, -1.0, 0.0);
		
		// Rotate 90 degrees
			glTranslatef(1.35, 0.0, 0.0);
			glRotatef(90, 0.0, 0.0, -1.0);
			glTranslatef(-1.35, 0.0, 0.0);
			glTranslatef(1.5, 0.0, 0.0);
		
	 	// bottom section
	 	glTranslatef(0.9, 0.05, 0.0);
	 	glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) thumbB, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.6f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();

		// middle section
		glTranslatef(0.0, 0.6, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) thumbM, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.6f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
		
		// top section
		glTranslatef(0.0, 0.6, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) thumbT, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.6f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
	glPopMatrix();
}

void indexFinger(void) {
	glPushMatrix();
		glRotatef(25, 0.0, -1.0, 0.0);
	 	// bottom section
	 	glTranslatef(0.9, 0.05, 0.0);
	 	glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) indexB, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();

		// middle section
		glTranslatef(0.0, 0.6, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) indexM, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
		
		// top section
		glTranslatef(0.0, 0.6, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) indexT, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
	glPopMatrix();
}

void middleFinger(void) {
	glPushMatrix();
		glRotatef(25, 0.0, -1.0, 0.0);
	 	// bottom section
	 	glTranslatef(0.3, 0.1, 0.0);
	 	glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) middleB, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.7f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();

		// middle section
		glTranslatef(0.0, 0.7, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) middleM, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.7f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
		
		// top section
		glTranslatef(0.0, 0.7, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) middleT, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.7f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
	glPopMatrix();
}

void ringFinger(void) {
	glPushMatrix();
		glRotatef(25, 0.0, -1.0, 0.0);
	 	// bottom section
	 	glTranslatef(-0.3, 0.05, 0.0);
	 	glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) ringB, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();

		// middle section
		glTranslatef(0.0, 0.6, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) ringM, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
		
		// top section
		glTranslatef(0.0, 0.6, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) ringT, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.6f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
	glPopMatrix();
}

void pinkyFinger(void) {
	glPushMatrix();
		glRotatef(25, 0.0, -1.0, 0.0);
	 	// bottom section
	 	glTranslatef(-0.9, 0.0, 0.0);
	 	glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) pinkyB, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.5f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();

		// middle section
		glTranslatef(0.0, 0.5, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) pinkyM, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.5f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
		
		// top section
		glTranslatef(0.0, 0.5, 0.0);
		glTranslatef(0.0, -0.25, 0.2);
		glRotatef((GLfloat) pinkyT, 1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.25, -0.2);
		glPushMatrix();
			glScalef(0.4f, 0.5f, 0.5f);
			glutWireCube(1.0);
		glPopMatrix();
	glPopMatrix();
}

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		glRotatef((GLfloat) yPalmRot, 0.0, 1.0, 0.0);
		palm();
		thumb();
		indexFinger();
		middleFinger();
		pinkyFinger();
		ringFinger();
//		contoh();
	glPopMatrix();
	glutSwapBuffers();
}

void reshape (int w, int h) {
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
		// pinky Finger
		case 'x': 
			pinkyB = addRotation(pinkyB, 100, 5);
			glutPostRedisplay();
			break;
		case 'X': 
			pinkyB = substractRotation(pinkyB, minRot, 5);
			glutPostRedisplay();
			break;	
		case 's':
			pinkyM = addRotation(pinkyM, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'S':
			pinkyM = substractRotation(pinkyM, minRot, 5);
			glutPostRedisplay();
			break;
		case 'w':
			pinkyT = addRotation(pinkyT, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'W':
			pinkyT = substractRotation(pinkyT, minRot, 5);
			glutPostRedisplay();
			break;
			
		// ring Finger
		case 'c':
			ringB = addRotation(ringB, 100, 5);
			glutPostRedisplay();
			break;
		case 'C':
			ringB = substractRotation(ringB, minRot, 5);
			glutPostRedisplay();
			break;
		case 'd':
			ringM = addRotation(ringM, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'D':
			ringM = substractRotation(ringM, minRot, 5);
			glutPostRedisplay();
			break;
		case 'e':
			ringT = addRotation(ringT, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'E':
			ringT = substractRotation(ringT, minRot, 5);
			glutPostRedisplay();
			break;
			
		// middle Finger
		case 'v':
			middleB = addRotation(middleB, 100, 5);
			glutPostRedisplay();
			break;
		case 'V':
			middleB = substractRotation(middleB, minRot, 5);
			glutPostRedisplay();
			break;
		case 'f':
			middleM = addRotation(middleM, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'F':
			middleM = substractRotation(middleM, minRot, 5);
			glutPostRedisplay();
			break;
		case 'r':
			middleT = addRotation(middleT, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'R':
			middleT = substractRotation(middleT, minRot, 5);
			glutPostRedisplay();
			break;
			
		// index Finger
		case 'b':
			indexB = addRotation(indexB, 100, 5);
			glutPostRedisplay();
			break;
		case 'B':
			indexB = substractRotation(indexB, minRot, 5);
			glutPostRedisplay();
			break;
		case 'g':
			indexM = addRotation(indexM, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'G':
			indexM = substractRotation(indexM, minRot, 5);
			glutPostRedisplay();
			break;
		case 't':
			indexT = addRotation(indexT, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'T':
			indexT = substractRotation(indexT, minRot, 5);
			glutPostRedisplay();
			break;
			
		// thumb
		case 'n':
			thumbB = addRotation(thumbB, 100, 5);
			glutPostRedisplay();
			break;
		case 'N':
			thumbB = substractRotation(thumbB, minRot, 5);
			glutPostRedisplay();
			break;
		case 'h':
			thumbM = addRotation(thumbM, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'H':
			thumbM = substractRotation(thumbM, minRot, 5);
			glutPostRedisplay();
			break;
		case 'y':
			thumbT = addRotation(thumbT, maxRot, 5);
			glutPostRedisplay();
			break;
		case 'Y':
			thumbT = substractRotation(thumbT, minRot, 5);
			glutPostRedisplay();
			break;
			
		// preset
		case '1':
			pinkyM = pinkyT = maxRot;
			ringM = ringT = maxRot;
			ringB = pinkyB = 100;
			thumbM = thumbT = maxRot;
			thumbB = 100;
			glutPostRedisplay();
			break;
		case '2':
			pinkyM = pinkyT = maxRot;
			ringM = ringT = maxRot;
			indexM = indexT = maxRot;
			ringB = pinkyB = indexB = 100;
			thumbB = thumbM = thumbT = minRot;
			glutPostRedisplay();
			break;
		case '3':
			indexM = indexT = maxRot;
			thumbM = thumbT = maxRot;
			indexB = 100;
			thumbB = 60;
			glutPostRedisplay();
			break;
			
		// other
		case 9:
			// reset to min rotation
			ringT = ringM = ringB = minRot;
			pinkyT = pinkyM = pinkyB = minRot;
			indexT = indexM = indexB = minRot;
			middleT = middleM = middleB = minRot;
			thumbT = thumbM = thumbB = minRot;
			glutPostRedisplay();
			break;
		case 'q':
			// set to max rotation
			
			ringM = ringT = maxRot;
			pinkyM = pinkyT = maxRot;
			indexM = indexT = maxRot;
			middleM = middleT = maxRot;
			thumbM = thumbT = maxRot;
			indexB = middleB = ringB = pinkyB = 100;
			thumbB = 60;
			glutPostRedisplay();
			break;
		case 27: 
			exit(0); 
			break; 
		default: 
			break;
	}
}

void specialInput(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_RIGHT:
			yPalmRot = (yPalmRot + 5) % 360;
			glutPostRedisplay();
			break;
		case GLUT_KEY_LEFT:
			yPalmRot = (yPalmRot - 5) % 360;
			glutPostRedisplay();
			break;
		default:
			break;
	}
}

int main(int argc, char** argv) { 
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
	glutInitWindowSize (1400, 1000); 
	glutInitWindowPosition (100, 100); 
	glutCreateWindow (argv[0]); 
	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape); 
	glutKeyboardFunc(keyboard); 
	glutSpecialFunc(specialInput);
	glutMainLoop(); 
	return 0;
}

