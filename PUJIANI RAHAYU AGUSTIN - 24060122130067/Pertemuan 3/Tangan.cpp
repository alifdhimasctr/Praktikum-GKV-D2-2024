/*Nama	: Pujiani Rahayu Agustin
NIM		: 24060122130067
Tugas Praktikum GKV D2 Pertemuan 3*/

#include <GL/glut.h> 
static int shoulder = 0, elbow = 0, elbow2 = 0, telapak = 0, ruas = 0, ibujari = 0, telunjuk = 0, tengah = 0, manis = 0, kelingking = 0; 
 
void init(void) { 
	glClearColor (0.0, 0.0, 0.0, 0.0); 
	glShadeModel (GL_FLAT); 
} 
 
void display(void) { 
	glClear (GL_COLOR_BUFFER_BIT); 
	glPushMatrix(); 
	glTranslatef (-3.0, 0.0, 0.0); 
	glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0); 
	glTranslatef (1.0, 0.0, 0.0); 
	glPushMatrix(); 
	glScalef (2.0, 0.4, 0.3); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	
	glTranslatef (1.0, 0.0, 0.0); 
	glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0); 
	glTranslatef (1.0, 0.0, 0.0); 
	glPushMatrix(); 
	glRotatef ((GLfloat) elbow2, 1.0, 0.0, 0.0); 
	glScalef (2.0, 0.4, 0.3); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	
	glTranslatef (0.25, 0.0, 0.0); 
	glRotatef ((GLfloat) elbow2, 1.0, 0.0, 0.0); 
	glRotatef ((GLfloat) telapak, 0.0, 0.0, 1.0); 
	glTranslatef (1.0, 0.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.5, 0.7, 0.2); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	
	glTranslatef (0.0, 0.45, 0.0); 
	glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.2, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	glTranslatef (-0.25, 0.0, 0.0); 
	glPushMatrix();
	glRotatef ((GLfloat) ibujari, 0.0, 1.0, 0.0); 
	glTranslatef (0.5, 0.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.3, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	
	glTranslatef (0.6, -0.2, 0.0); 
	glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.2, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	glTranslatef (0.1, 0.0, 0.0); 
	glPushMatrix(); 
	glRotatef ((GLfloat) telunjuk, 0.0, 1.0, 0.0); 
	glTranslatef (0.155, 0.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.33, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	
	glTranslatef (-0.1, -0.2, 0.0); 
	glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.2, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	glTranslatef (0.17, 0.0, 0.0); 
	glPushMatrix();
	glRotatef ((GLfloat) tengah, 0.0, 1.0, 0.0); 
	glTranslatef (0.155, 0.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.45, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	
	glTranslatef (-0.17, -0.2, 0.0); 
	glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.2, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	glTranslatef (0.1, 0.0, 0.0); 
	glPushMatrix();
	glRotatef ((GLfloat) manis, 0.0, 1.0, 0.0); 
	glTranslatef (0.155, 0.0, 0.0);
	glPushMatrix(); 
	glScalef (0.3, 0.2, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	
	glTranslatef (-0.1, -0.15, 0.0); 
	glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0); 
	glPushMatrix(); 
	glScalef (0.2, 0.1, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix(); 
	glTranslatef (0.05, 0.0, 0.0); 
	glPushMatrix();
	glRotatef ((GLfloat) kelingking, 0.0, 1.0, 0.0); 
	glTranslatef (0.155, 0.0, 0.0);
	glPushMatrix(); 
	glScalef (0.2, 0.1, 0.1); 
	glutWireCube (1.0); 
	glPopMatrix();
	glPopMatrix();
	
	glPopMatrix(); 
	glutSwapBuffers(); 
} 


void reshape (int w, int h) { 
	glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0); 
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity(); 
	glTranslatef (0.0, 0.0, -5.0); 
} 
 
void keyboard(unsigned char key, int x, int y) { 
    switch (key) { 
        case 's': shoulder = (shoulder + 5) % 360; 
            glutPostRedisplay(); 
            break; 
        case 'S': shoulder = (shoulder - 5) % 360; 
            glutPostRedisplay(); 
            break; 
        case 'e': elbow = (elbow + 5) % 120; 
            glutPostRedisplay(); 
            break; 
        case 'E': elbow = (elbow - 5) % 120; 
            glutPostRedisplay(); 
        case 'w': elbow2 = (elbow2 + 5) % 120; 
            glutPostRedisplay(); 
            break; 
        case 'W': elbow2 = (elbow2 - 5) % 120; 
            glutPostRedisplay(); 
            break; 
        case 'j': ruas = (ruas + 5) % 70; 
            glutPostRedisplay(); 
            break; 
        case 'J': ruas = (ruas - 5) % 10; 
            glutPostRedisplay(); 
            break; 
        case 'i': ibujari = (ibujari + 5) % 40; 
            glutPostRedisplay(); 
            break; 
        case 'I': ibujari = (ibujari - 5) % 20; 
            glutPostRedisplay(); 
            break; 
        case 't': telunjuk = (telunjuk + 5) % 90; 
            glutPostRedisplay(); 
            break; 
        case 'T': telunjuk = (telunjuk - 5) % 20; 
            glutPostRedisplay(); 
            break; 
        case 'm': tengah = (tengah + 5) % 90; 
            glutPostRedisplay(); 
            break; 
        case 'M': tengah = (tengah - 5) % 20; 
            glutPostRedisplay(); 
            break; 
        case 'r': manis = (manis + 5) % 90; 
            glutPostRedisplay(); 
            break; 
        case 'R': manis = (manis - 5) % 20; 
            glutPostRedisplay(); 
            break; 
        case 'k': kelingking = (kelingking + 5) % 90; 
            glutPostRedisplay(); 
            break; 
        case 'K': kelingking = (kelingking - 5) % 20; 
            glutPostRedisplay(); 
            break; 
        case 'o': telapak = (telapak + 5) % 20; 
            glutPostRedisplay(); 
            break; 
        case 'O': telapak = (telapak - 5) % 20; 
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
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
	glutInitWindowSize (900, 800); 
	glutInitWindowPosition (100, 100); 
	glutCreateWindow ("Tangan");

	glutDisplayFunc(display); 
	glutReshapeFunc(reshape); 
	glutKeyboardFunc(keyboard); 
	glutMainLoop(); return 0; 
} 
