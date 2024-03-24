/*
File     : tanganBergerak.cpp
Tanggal  : 11 Maret 2024
Pembuat  : Syakira Nada Nirwana - 24060122130049
Deskripsi: Tugas praktikum 3 (membuat lengan, telapak tangan, dan jari-jari yang dapat digerakkan)
			Gerakan:
			Shoulder: s, S
			Elbow: e, E
			Palm: d, D
			Thumb: t, T, y, Y, u, U
			Index finger: i, I, o, O, p, P
			Middle finger: f, F, g, G, h, H
			Ring finger: j, J, k, K, l, L
			Pinky: b, B, n, N, m, M
*/

#include <gl/glut.h>

static int shoulder = 0, elbow = 0, palm = 0,
thumb1 = 0, thumb2 = 0, thumb3 = 0,
index1 = 0, index2 = 0, index3 = 0,
middle1 = 0, middle2 = 0, middle3 = 0,
ring1 = 0, ring2 = 0, ring3 = 0,
pinky1 = 0, pinky2 = 0, pinky3 = 0;

void init(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);

    //shoulder
    glPushMatrix();
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //elbow
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //palm
    glTranslatef(0.1, 0.0, 0.0);
    glRotatef((GLfloat)palm, 1.0, 0.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.9, 0.4, 0.55);
    glutWireCube(1.0);
    glPopMatrix();

    //thumb / ibu jari
    glPushMatrix();
    glTranslatef(0, 0, 0.4);
    glRotatef((GLfloat)-thumb1, 1, 0, 0);
    glRotatef((GLfloat)thumb2, 0, 1, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0, 0, 0.2);
    glRotatef((GLfloat)-thumb3, 1, 0, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.25);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //index / telunjuk
    glPushMatrix();
    glTranslatef(0.4, 0, 0.2);
    glRotatef((GLfloat)index1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.23, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)index2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)index3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //middle / tengah
    glPushMatrix();
    glTranslatef(0.4, 0, 0.05);
    glRotatef((GLfloat)middle1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)middle2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.4, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)middle3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.4, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //ring / jari manis
    glPushMatrix();
    glTranslatef(0.4, 0, -0.1);
    glRotatef((GLfloat)ring1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.23, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)ring2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)ring3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //pinky / kelingking
    glPushMatrix();
    glTranslatef(0.4, 0, -0.25); 
    glRotatef((GLfloat)pinky1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.22, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.15, 0, 0);
    glRotatef((GLfloat)pinky2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.22, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(0.1, 0, 0);
    glRotatef((GLfloat)pinky3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.22, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();


    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat) w / (GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
	    //shoulder
	    case 's': shoulder = (shoulder + 5) % 360;
	        glutPostRedisplay();
	        break;
	    case 'S': shoulder = (shoulder - 5) % 360;
	        glutPostRedisplay();
	        break;
	
	    //elbow
	    case 'e': elbow = (elbow + 5) % 360;
	        glutPostRedisplay();
	        break;
	    case 'E': elbow = (elbow - 5) % 360;
	        glutPostRedisplay();
	        break;
	
	    //palm
	    case 'd': palm = (palm + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'D': palm = (palm - 5) % 90;
	        glutPostRedisplay();
	        break;
	
	    //thumb
	    case 't': thumb1 = (thumb1 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'T': thumb1 = (thumb1 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'y': thumb2 = (thumb2 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'Y': thumb2 = (thumb2 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'u': thumb3 = (thumb3 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'U': thumb3 = (thumb3 - 5) % 90;
	        glutPostRedisplay();
	        break;
	
	    //index
	    case 'i': index1 = (index1 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'I': index1 = (index1 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'o': index2 = (index2 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'O': index2 = (index2 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'p': index3 = (index3 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'P': index3 = (index3 - 5) % 90;
	        glutPostRedisplay();
	        break;
	
	    //middle
	    case 'f': middle1 = (middle1 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'F': middle1 = (middle1 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'g': middle2 = (middle2 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'G': middle2 = (middle2 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'h': middle3 = (middle3 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'H': middle3 = (middle3 - 5) % 90;
	        glutPostRedisplay();
	        break;
	
	    //ring
	    case 'j': ring1 = (ring1 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'J': ring1 = (ring1 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'k': ring2 = (ring2 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'K': ring2 = (ring2 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'l': ring3 = (ring3 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'L': ring3 = (ring3 - 5) % 90;
	        glutPostRedisplay();
	        break;
	
	    //pinky
	    case 'b': pinky1 = (pinky1 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'B': pinky1 = (pinky1 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'n': pinky2 = (pinky2 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'N': pinky2 = (pinky2 - 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'm': pinky3 = (pinky3 + 5) % 90;
	        glutPostRedisplay();
	        break;
	    case 'M': pinky3 = (pinky3 - 5) % 90;
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
