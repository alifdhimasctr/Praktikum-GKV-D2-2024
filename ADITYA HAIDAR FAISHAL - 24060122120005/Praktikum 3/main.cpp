//Nama	: Aditya Haidar Faishal
//NIM	: 24060122120005
//Lab	: D2


#include <GL/glut.h>
static int xshoulder = 0;
static int yshoulder = 0;
static int zshoulder = 0;
static int elbow = 0;
static int telapak = 0;
static int kelingking = 0;
static int manis = 0;
static int tengah = 0;
static int telunjuk = 0;
static int jempol = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		// bahu
		glTranslatef (-4.0, 0.0, 0.0);
		glRotatef ((GLfloat) xshoulder, 1.0, 0.0, 0.0);
		glRotatef ((GLfloat) yshoulder, 0.0, 1.0, 0.0);
		glRotatef ((GLfloat) zshoulder, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
		glScalef (2.5, 0.4, 1.5);
		glutWireCube (1.0); 
		glPopMatrix();
		// siku
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
		glTranslatef (1.5, 0.0, 0.0); 
		glPushMatrix();
		glScalef (2.5, 0.4, 1.5);
		glutWireCube (1.0);
		glPopMatrix(); 
       // telapak tangan
        glTranslatef (1.0, 0.0, 0.0);
        glRotatef ((GLfloat) telapak, 0.0, 0.0, 1.0);
        glTranslatef (1.25, 0.0, 0.0); 
        glPushMatrix();
        glScalef (2.0, 0.5, 2.0);
        glutWireCube (1.0);
        glPopMatrix(); 
		// jempol
		glPushMatrix();
	    glTranslatef (-0.2, 0.0, -0.1);
	    glRotatef ((GLfloat) jempol, 0.0, 0.0, 1.0);
	    glTranslatef (1.25, 0.0, 1.35); 
	    glPushMatrix();
	    glScalef (1.3, 0.5, 0.5);
	    glutWireCube (1.0);
	    glPopMatrix();
		glPopMatrix(); 
        // telunjuk
		glPushMatrix();
	    glTranslatef (0.55, 0.0, 0.4);
	    glRotatef ((GLfloat) telunjuk, 0.0, 0.0, 1.0);
	    glTranslatef (1.466, 0.0, 0.37); 
	    glPushMatrix();
	    glScalef (2.0, 0.5, 0.5);
	    glutWireCube (1.0);
	    glPopMatrix(); 
		glPopMatrix(); 
        // tengah
		glPushMatrix();
	    glTranslatef (0.65, 0.0, 0.0);
	    glRotatef ((GLfloat) tengah, 0.0, 0.0, 1.0);
	    glTranslatef (1.614, 0.0, 0.26); 
	    glPushMatrix();
	    glScalef (2.5, 0.5, 0.5);
	    glutWireCube (1.0);
	    glPopMatrix(); 
		glPopMatrix();
        // manis
		glPushMatrix();
	    glTranslatef (0.525, 0.0, -0.3);
	    glRotatef ((GLfloat) manis, 0.0, 0.0, 1.0);
	    glTranslatef (1.477, 0.0, 0.06); 
	    glPushMatrix();
	    glScalef (2.0, 0.5, 0.5);
	    glutWireCube (1.0);
	    glPopMatrix(); 
		glPopMatrix();
        // kelingking
		glPushMatrix();
	    glTranslatef (0.45, 0.0, -0.6);
	    glRotatef ((GLfloat) kelingking, 0.0, 0.0, 1.0);
	    glTranslatef (1.3, 0.0, -0.15); 
	    glPushMatrix();
	    glScalef (1.5, 0.5, 0.5);
	    glutWireCube (1.0);
	    glPopMatrix(); 
		glPopMatrix();

	glPopMatrix();
	
	glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case '1':
        zshoulder = (zshoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case '2':
        zshoulder = (zshoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case '3':
        yshoulder = (yshoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case '4':
        yshoulder = (yshoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case '5':
        xshoulder = (xshoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case '6':
        xshoulder = (xshoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case 'a':
        elbow = (elbow - 5) % 360;
        glutPostRedisplay();
        break;
    case 's':
        elbow = (elbow + 5) % 360;
        glutPostRedisplay();
        break;
    case 'd':
        telapak = (telapak - 5) % 360;
        glutPostRedisplay();
        break;
    case 'f':
        telapak = (telapak + 5) % 360;
        glutPostRedisplay();
        break;
    case 'q':
        kelingking = (kelingking - 5) % 360;
        glutPostRedisplay();
        break;
    case 'w':
        manis = (manis - 5) % 360;
        glutPostRedisplay();
        break;
    case 'e':
        tengah = (tengah - 5) % 360;
        glutPostRedisplay();
        break;
    case 'r':
        telunjuk = (telunjuk - 5) % 360;
        glutPostRedisplay();
        break;
    case 't':
        jempol = (jempol - 5) % 360;
        glutPostRedisplay();
        break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
