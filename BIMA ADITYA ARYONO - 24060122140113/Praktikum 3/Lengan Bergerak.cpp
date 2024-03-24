// Nama Program : Lengan Bergerak.cpp
// NIM / Nama pembuat : 24060122140113 / Bima Aditya Aryono
// Deskripsi : Mensimulasikan bagaimana tangan bergerak hingga jari - jari nya



#include <GL/glut.h> 
#include <cmath>
static int shoulder = 0, elbow = 0,finger1=0,finger1mid=0,finger1top=0,finger2=0,finger2mid=0,finger2top=0,finger3=0,finger4=0,thumb=0;
static int finger3mid=0,finger3top=0,finger4mid=0,finger4top=0,thumbtop=0,shoulder1=0,thumbin=0,thumbout=0;
const int MIN_ELBOW_ANGLE = -90; // 
const int MAX_ELBOW_ANGLE = 90;  
const int Max=90;

void init(void) { 
	glClearColor (1.0, 1.0, 1.0,1.0); 
	glShadeModel (GL_FLAT); 
} 

void display(void) { 
	glClear (GL_COLOR_BUFFER_BIT); 
	glColor3f(0.0f,0.0f,0.0f);
	glPushMatrix(); 
	//elbow
	 	glTranslatef (-1.0, 0.0, 0.0); 
	 	glRotatef ((GLfloat) shoulder, 0.0, 1.0, 0.0); 
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix(); 
	 		glScalef (2.0, 0.4, 1.0); 
			glutWireCube (1.0); 
		glPopMatrix(); 
		
		//telapak
	 	glTranslatef (1.0, 0.0, 0.0); 
	 	elbow = fmax(MIN_ELBOW_ANGLE, fmin(elbow, MAX_ELBOW_ANGLE));
		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0); 
		glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix(); 
		 	glScalef (1.0, 0.4, 1.4); 
			glutWireCube (1.0); 
		glPopMatrix();
		
		glPushMatrix();
		 //Middle Finger
			glTranslatef (0.41, 0.0, 0.14); 
			glRotatef ((GLfloat) finger1, 0.0, 0.0, 1.0); 
			glTranslatef (0.41, 0.0, 0.0); 
			glPushMatrix(); 
			 	glScalef (0.66, 0.4, 0.35); 
				glutWireCube (1.0); 
			glPopMatrix();
				// Middle Finger mid
				glPushMatrix(); 
					glTranslatef (0.23, 0.0, 0.0); 
					glRotatef ((GLfloat) finger1mid, 0.0, 0.0, 1.0); 
					glTranslatef (0.05, 0.0, 0.0); 
					glPushMatrix(); 
					 	glScalef (0.66, 0.4, 0.35); 
						glutWireCube (1.0); 
					glPopMatrix();
						// middle finger top
						glPushMatrix();
							glTranslatef (0.18, 0.0, 0.0); 
							glRotatef ((GLfloat) finger1top, 0.0, 0.0, 1.0); 
							glTranslatef (0.10, 0.0, 0.0); 
							glPushMatrix(); 
							 	glScalef (0.66, 0.4, 0.35); 
								glutWireCube (1.0); 
							glPopMatrix();
						glPopMatrix();
				glPopMatrix();
		glPopMatrix();	
		// index Finger
		glPushMatrix();
			glTranslatef (0.30, 0.0, -0.54); 
			glRotatef ((GLfloat) finger2, 0.0, 0.0, 1.0); 
			glTranslatef (0.33, 0.0, 0.0); 
			glPushMatrix(); 
			 	glScalef (0.25, 0.4, 0.35); 
				glutWireCube (1.0); 
			glPopMatrix();
			//index finger mid
				glPushMatrix();
					glTranslatef (0.0, 0.0, 0.0); 
					glRotatef ((GLfloat) finger2mid, 0.0, 0.0, 1.0); 
					glTranslatef (0.25, 0.0, 0.0); 
					glPushMatrix(); 
			 			glScalef (0.25, 0.4, 0.35); 
						glutWireCube (1.0); 
					glPopMatrix();
					// index finger top
						glPushMatrix();
							glTranslatef (0.0, 0.0, 0.0); 
							glRotatef ((GLfloat) finger2top, 0.0, 0.0, 1.0); 
							glTranslatef (0.25, 0.0, 0.0); 
							glPushMatrix(); 
					 			glScalef (0.25, 0.4, 0.35); 
								glutWireCube (1.0); 
							glPopMatrix();
						glPopMatrix();
				glPopMatrix();
		glPopMatrix();
		//sebelah index finger (jari manis)
		glPushMatrix();
			glTranslatef (0.30, 0.0, -0.2); 
			glRotatef ((GLfloat) finger3, 0.0, 0.0, 1.0); 
			glTranslatef (0.35, 0.0, 0.0); 
			glPushMatrix(); 
			 	glScalef (0.3, 0.4, 0.35); 
				glutWireCube (1.0); 
			glPopMatrix();
				// jari manis mid
				glPushMatrix();
					glTranslatef (0.0, 0.0, 0.0); 
					glRotatef ((GLfloat) finger3mid, 0.0, 0.0, 1.0); 
					glTranslatef (0.3, 0.0, 0.0); 
					glPushMatrix(); 
					 	glScalef (0.3, 0.4, 0.35); 
						glutWireCube (1.0); 
					glPopMatrix();
					//jari manis top
						glPushMatrix();
							glTranslatef (0.0, 0.0, 0.0); 
							glRotatef ((GLfloat) finger3top, 0.0, 0.0, 1.0); 
							glTranslatef (0.3, 0.0, 0.0); 
							glPushMatrix(); 
							 	glScalef (0.3, 0.4, 0.35); 
								glutWireCube (1.0); 
							glPopMatrix();
						glPopMatrix();
				glPopMatrix();
		glPopMatrix();
		
		//sebelah jari tengah
		glPushMatrix();
			glTranslatef (0.32, 0.0, 0.54); 
			glRotatef ((GLfloat) finger4, 0.0, 0.0, 1.0); 
			glTranslatef (0.32, 0.0, 0.0); 
			glPushMatrix(); 
			 	glScalef (0.28, 0.4, 0.35); 
				glutWireCube (1.0); 
			glPopMatrix();
				//jari telunjuk mid
				glPushMatrix();
					glTranslatef (0.0, 0.0, 0.0); 
					glRotatef ((GLfloat) finger4mid, 0.0, 0.0, 1.0); 
					glTranslatef (0.28, 0.0, 0.0); 
					glPushMatrix(); 
					 	glScalef (0.28, 0.4, 0.35); 
						glutWireCube (1.0); 
					glPopMatrix();
					//jari telunjuk top
						glPushMatrix();
							glTranslatef (0.0, 0.0, 0.0); 
							glRotatef ((GLfloat) finger4top, 0.0, 0.0, 1.0); 
							glTranslatef (0.28, 0.0, 0.0); 
							glPushMatrix(); 
							 	glScalef (0.28, 0.4, 0.35); 
								glutWireCube (1.0); 
							glPopMatrix();
						glPopMatrix();
				glPopMatrix();
		glPopMatrix();
		//jempol
		glPushMatrix();
			glTranslatef (0.0, 0.0, 0.85); 
			glRotatef ((GLfloat) thumb, 0.0, 1.0, 0.1); 
			glRotatef ((GLfloat) thumbin, -0.5, -0.5, 1.0); 
			glTranslatef (0.10, 0.0, 0.0); 
			glPushMatrix(); 
			 	glScalef (0.45, 0.4, 0.35); 
				glutWireCube (1.0); 
			glPopMatrix();
				glPushMatrix();
					glTranslatef (0.20, 0.0, 0.0); 
					glRotatef ((GLfloat) thumbtop, 0.0, 0.0, 1.0); 
					glTranslatef (0.13, 0.0, 0.0); 
					glPushMatrix(); 
					 	glScalef (0.35, 0.4, 0.35); 
						glutWireCube (1.0); 
					glPopMatrix();
				glPopMatrix();
		glPopMatrix();
		
	glPopMatrix(); 
	glutSwapBuffers(); 
}

 
void reshape (int w, int h) { 
 	glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
	glMatrixMode (GL_PROJECTION); glLoadIdentity (); 
 	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0); 
	glMatrixMode(GL_MODELVIEW); glLoadIdentity(); 
 	glTranslatef (0.0, 0.0, -7.0); 
} 
 
void keyboard(unsigned char key, int x, int y) { 
	switch (key) { 
 		case 's': shoulder = (shoulder + 5) % 360; 
		glutPostRedisplay(); break; 
 		case 'S': shoulder = (shoulder - 5) % 360; 
		glutPostRedisplay(); break; 
		
		case 'd': shoulder1 = (shoulder1 + 5) % 360; 
		glutPostRedisplay(); break; 
 		case 'D': shoulder1 = (shoulder1 - 5) % 360; 
		glutPostRedisplay(); break;
		
 		case 'w': elbow = fmin(elbow + 5, MAX_ELBOW_ANGLE);
		glutPostRedisplay(); break; 
 		case 'W': elbow = fmax(elbow - 5, MIN_ELBOW_ANGLE);
		glutPostRedisplay(); break; 
		
		case 'a': finger1 = fmax(finger1 - 5,-90); 
		glutPostRedisplay(); break; 
		case 'A': finger1 = fmin(finger1 + 5,0); 
		glutPostRedisplay(); break;
		
		case 'z': finger1mid = fmax(finger1mid - 5,-90) ; 
		glutPostRedisplay(); break;
		case 'Z': finger1mid = fmin(finger1mid + 5,0) ; 
		glutPostRedisplay(); break;
		
		case 'x': finger1top = fmax(finger1top - 5,-90) ; 
		glutPostRedisplay(); break;
		case 'X': finger1top = fmin(finger1top + 5,0); 
		glutPostRedisplay(); break;
		
		case 'c': finger2 = fmax(finger2 - 5,-90); 
		glutPostRedisplay(); break; 
		case 'C': finger2 = fmin(finger2 + 5,0); 
		glutPostRedisplay(); break;
		
		case 'v': finger2mid = fmax(finger2mid - 5,-90); 
		glutPostRedisplay(); break; 
		case 'V': finger2mid = fmin(finger2mid + 5,0); 
		glutPostRedisplay(); break;
		
		case 'b': finger2top = fmax(finger2top - 5,-90); 
		glutPostRedisplay(); break; 
		case 'B': finger2top = fmin(finger2top + 5,0); 
		glutPostRedisplay(); break;
		
		case 'r': finger3 = fmax(finger3 - 5,-90); 
		glutPostRedisplay(); break; 
		case 'R': finger3 = fmin(finger3 + 5,0); 
		glutPostRedisplay(); break;
		
		case 't': finger3mid = fmax(finger3mid - 5,-90); 
		glutPostRedisplay(); break; 
		case 'T': finger3mid = fmin(finger3mid + 5,0); 
		glutPostRedisplay(); break;
		
		case 'y': finger3top = fmax(finger3top - 5,-90); 
		glutPostRedisplay(); break; 
		case 'Y': finger3top = fmin(finger3top + 5,0); 
		glutPostRedisplay(); break;
		
		case 'u': finger4 = fmax(finger4 - 5,-90); 
		glutPostRedisplay(); break; 
		case 'U': finger4 = fmin(finger4 + 5,0); 
		glutPostRedisplay(); break;
		
		case 'i': finger4mid = fmax(finger4mid - 5,-90); 
		glutPostRedisplay(); break; 
		case 'I': finger4mid = fmin(finger4mid + 5,0); 
		glutPostRedisplay(); break;
		
		case 'o': finger4top = fmax(finger4top - 5,-90); 
		glutPostRedisplay(); break; 
		case 'O': finger4top = fmin(finger4top + 5,0); 
		glutPostRedisplay(); break;
		
		case 'p': thumb = fmax(thumb - 5,-30); 
		glutPostRedisplay(); break; 
		case 'P': thumb = fmin(thumb + 5,0); 
		glutPostRedisplay(); break;
		
		case 'm': thumbin = fmax(thumbin - 5,-90); 
		glutPostRedisplay(); break; 
		case 'M': thumbin = fmin(thumbin + 5,0); 
		glutPostRedisplay(); break;
		
		case 'n': thumbtop = fmax(thumbtop - 5,-90); 
		glutPostRedisplay(); break; 
		case 'N': thumbtop = fmin(thumbtop + 5,15); 
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
	glutMainLoop(); 
	return 0; 
}
