#include <GL/glut.h>

/* Nama : Yusuf Zaenul Mustofa
 * NIM  : 24060122120021
 * Lab  : GKV D2
 * Program membuat telapak tangan beserta jarinya dengan objek 3d
 Petunjuk :
 * untuk memutar layar gunakan 'u', 'j', 'n', uppercase untuk membaliknya
 * untuk menggerakkan sendi siku gunakan 'i' uppercase untuk membaliknya
 * untuk menggerakkan sendi tangan gunakan 'o' unppercase untuk membaliknya
 * untuk menggerakkan sendi jari telunjuk gunakan 'q', 'a', 'z', uppercase untuk membaliknya
 * untuk menggerakkan sendi jari tengah gunakan 'w', 's', 'x', uppercase untuk membaliknya
 * untuk menggerakkan sendi jari manis gunakan 'e', 'd', 'c', uppercase untuk membaliknya
 * untuk menggerakkan sendi jari kelingking gunakan 'r', 'f', 'v', uppercase untuk membaliknya
 * untuk menggerakkan sendi ibu jari gunakan 't', 'g', uppercase untuk membaliknya
*/

static int telapak = 0, telunjuk1 = 0, telunjuk2 = 0, telunjuk3 = 0, tengah1 = 0, tengah2 = 0, tengah3 = 0,
		   manis1 = 0, manis2 = 0, manis3 = 0, kelingking1 = 0, kelingking2 = 0, kelingking3 = 0, jempol1 = 0, jempol2 = 0,
		   bahu1 = 0, bahu2 = 0, bahu3 = 0, tangan = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
	    glRotatef((GLfloat)bahu1, 1.0, 0.0, 0.0);
	    glRotatef((GLfloat)bahu2, 0.0, 1.0, 0.0);
	    glRotatef((GLfloat)bahu3, 0.0, 0.0, 1.0);
	    glColor3f(0.3, 0.3, 0.3); 
	    glLineWidth(1.0);
	    glPushMatrix();
	        for (float i = -5.0; i <= 5.0; i += 1.0) {
	            glPushMatrix();
	                glTranslatef(i, 0.0, 0.0);
	                glScalef(0.1, 10.0, 10.0); 
	                glutWireCube(1.0);
	            glPopMatrix();
	        }
	        for (float i = -5.0; i <= 5.0; i += 1.0) {
	            glPushMatrix();
	                glTranslatef(0.0, i, 0.0);
	                glScalef(10.0, 0.1, 10.0); 
	                glutWireCube(1.0);
	            glPopMatrix();
	        }
	        for (float i = -5.0; i <= 5.0; i += 1.0) {
	            glPushMatrix();
	                glTranslatef(0.0, 0.0, i);
	                glScalef(10.0, 10.0, 0.1); 
	                glutWireCube(1.0);
	            glPopMatrix();
	        }
	    glPopMatrix();
	    glLineWidth(2.0);
    	glTranslatef(0.0, -2.0, 0.0);
    	glPushMatrix();
    		glColor3f(1.0, 0.0, 0.0);
    		glScalef(0.7, 1.5, 0.2);
    		glutWireCube(1.0);
    	glPopMatrix();
    	glPushMatrix();
	    	glTranslatef(0.0, 0.75, 0.0);
	    	glRotatef((GLfloat)tangan, 1.0, 0.0, 0.0);
	    	glTranslatef(0.0, 0.75, 0.0);
	    	glPushMatrix();
	    		glColor3f(1.0, 0.0, 0.0);
	    		glScalef(0.7, 1.5, 0.2);
	    		glutWireCube(1.0);
	    	glPopMatrix();
		    glPushMatrix();
		    	//Telapak tangan
		    	glTranslatef(0.0, 0.8, 0.0);
		    	glRotatef((GLfloat)telapak, 1.0, 0.0, 0.0);
		    	glTranslatef(0.0, 0.35, 0.0);
		    	glPushMatrix();
		    		glColor3f(1.0, 0.2, 0.0);
		    		glScalef(1.1, 0.8, 0.2);
		    		glutWireCube(1.0);
		   	 	glPopMatrix();
		   	 	//Telunjuk 
		    	glPushMatrix();
		    		glTranslatef(-0.225, 0.4, 0.0);
					glRotatef((GLfloat)telunjuk1, 1.0, 0.0, 0.0); 
					glTranslatef(-0.225, 0.25, 0.0); 
			    	glPushMatrix();
			    		glColor3f(1.0, 0.5, 0.0);
				    	glScalef(0.2, 0.5, 0.2);
				    	glutWireCube(1.0);
				    glPopMatrix();
					glPushMatrix();	
				    	glTranslatef(0.0, 0.25, 0.0); 
						glRotatef((GLfloat)telunjuk2, 1.0, 0.0, 0.0); 
						glTranslatef(0.0, 0.2, 0.0);   	
				    	glPushMatrix();
				    		glColor3f(1.0, 0.7, 0.0);
				    		glScalef(0.2, 0.4, 0.2);
				    		glutWireCube(1.0);
				    	glPopMatrix();
				    	glPushMatrix();
					    	glTranslatef(0.0, 0.2, 0.0); 
							glRotatef((GLfloat)telunjuk3, 1.0, 0.0, 0.0); 
							glTranslatef(0.0, 0.15, 0.0);     	
					    	glPushMatrix();
					    		glColor3f(1.0, 1.0, 0.0);
					    		glScalef(0.2, 0.3, 0.2);
					    		glutWireCube(1.0);
					    	glPopMatrix();
			    		glPopMatrix();
			    	glPopMatrix();
		    	glPopMatrix();
		    	
		    	//Jari Tengah 
		    	glPushMatrix();
		    		glTranslatef(-0.075, 0.4, 0.0);
					glRotatef((GLfloat)tengah1, 1.0, 0.0, 0.0);
					glTranslatef(-0.075, 0.25, 0.0);   	
			    	glPushMatrix();
			    		glColor3f(1.0, 0.5, 0.0);
			    		glScalef(0.2, 0.5, 0.2);
			    		glutWireCube(1.0);
			    	glPopMatrix();
			    	glPushMatrix();	
				    	glTranslatef(0.0, 0.25, 0.0); 
						glRotatef((GLfloat)tengah2, 1.0, 0.0, 0.0); 
						glTranslatef(0.0, 0.2, 0.0);   	
				    	glPushMatrix();
				    		glColor3f(1.0, 0.7, 0.0);
				    		glScalef(0.2, 0.4, 0.2);
				    		glutWireCube(1.0);
				    	glPopMatrix();
				    	glPushMatrix();
					    	glTranslatef(0.0, 0.2, 0.0); 
							glRotatef((GLfloat)tengah3, 1.0, 0.0, 0.0); 
							glTranslatef(0.0, 0.15, 0.0);     	
					    	glPushMatrix();
					    		glColor3f(1.0, 1.0, 0.0);
					    		glScalef(0.2, 0.3, 0.2);
					    		glutWireCube(1.0);
					    	glPopMatrix();
			    		glPopMatrix();
			    	glPopMatrix();
		    	glPopMatrix();
		    	
		    	//Jari Manis
				glPushMatrix(); 
					glTranslatef(0.075, 0.4, 0.0);
					glRotatef((GLfloat)manis1, 1.0, 0.0, 0.0);  
					glTranslatef(0.075, 0.25, 0.0); 	
			    	glPushMatrix();
			    		glColor3f(1.0, 0.5, 0.0);
			    		glScalef(0.2, 0.5, 0.2);
			    		glutWireCube(1.0);
			    	glPopMatrix();
			    	glPushMatrix();	
				    	glTranslatef(0.0, 0.25, 0.0); 
						glRotatef((GLfloat)manis2, 1.0, 0.0, 0.0); 
						glTranslatef(0.0, 0.2, 0.0);   	
				    	glPushMatrix();
				    		glColor3f(1.0, 0.7, 0.0);
				    		glScalef(0.2, 0.4, 0.2);
				    		glutWireCube(1.0);
				    	glPopMatrix();
				    	glPushMatrix();
					    	glTranslatef(0.0, 0.2, 0.0); 
							glRotatef((GLfloat)manis3, 1.0, 0.0, 0.0); 
							glTranslatef(0.0, 0.15, 0.0);     	
					    	glPushMatrix();
					    		glColor3f(1.0, 1.0, 0.0);
					    		glScalef(0.2, 0.3, 0.2);
					    		glutWireCube(1.0);
					    	glPopMatrix();
			    		glPopMatrix();
			    	glPopMatrix();
		    	glPopMatrix();
		    	
		    	//jari Kelingking
				glPushMatrix(); 
					glTranslatef(0.225, 0.4, 0.0);
					glRotatef((GLfloat)kelingking1, 1.0, 0.0, 0.0); 
					glTranslatef(0.225, 0.25, 0.0);  	
			    	glPushMatrix();
			    		glColor3f(1.0, 0.5, 0.0);
			    		glScalef(0.2, 0.5, 0.2);
			    		glutWireCube(1.0);
			    	glPopMatrix();
			    	glPushMatrix();	
				    	glTranslatef(0.0, 0.25, 0.0); 
						glRotatef((GLfloat)kelingking2, 1.0, 0.0, 0.0); 
						glTranslatef(0.0, 0.2, 0.0);   	
				    	glPushMatrix();
				    		glColor3f(1.0, 0.7, 0.0);
				    		glScalef(0.2, 0.4, 0.2);
				    		glutWireCube(1.0);
				    	glPopMatrix();
				    	glPushMatrix();
					    	glTranslatef(0.0, 0.2, 0.0); 
							glRotatef((GLfloat)kelingking3, 1.0, 0.0, 0.0); 
							glTranslatef(0.0, 0.15, 0.0);     	
					    	glPushMatrix();
					    		glColor3f(1.0, 1.0, 0.0);
					    		glScalef(0.2, 0.3, 0.2);
					    		glutWireCube(1.0);
					    	glPopMatrix();
			    		glPopMatrix();
			    	glPopMatrix();
		    	glPopMatrix();
		    	
		    	//Jari Jempol
		    	glPushMatrix();
			    	glTranslatef(-0.55, -0.1, 0.0); 
					glRotatef((GLfloat)jempol1, 0.0, 1.0, 0.0); 
					glTranslatef(-0.2, -0.2, 0.0);   	
			    	glPushMatrix();
			    		glColor3f(1.0, 0.7, 0.0);
			    		glScalef(0.4, 0.2, 0.2);
			    		glutWireCube(1.0);
			    	glPopMatrix();
			    	glPushMatrix();
			    		glTranslatef(-0.2, 0.0, 0.0);
			    		glRotatef((GLfloat)jempol2, 0.0, 1.0, 0.0); 
				    	glTranslatef(-0.15, 0.0, 0.0);    	
				    	glPushMatrix();
				    		glColor3f(1.0, 1.0, 0.0);
				    		glScalef(0.3, 0.2, 0.2);
				    		glutWireCube(1.0);
			    		glPopMatrix();
			    	glPopMatrix();
		    	glPopMatrix();	
		    glPopMatrix();
		glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'u':
        bahu1 = (bahu1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'j':
        bahu2 = (bahu2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'n':
        bahu3 = (bahu3 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'i':
        if (tangan < 150)
        	tangan += 5;
        glutPostRedisplay();
        break;
    case 'o':
    	if (telapak < 170)
    		telapak += 5;
        glutPostRedisplay();
        break;
    case 'q':
    	if(telunjuk1 < 110)
        	telunjuk1 += 5;
        glutPostRedisplay();
        break;
    case 'a':
    	if(telunjuk2 < 100)
        	telunjuk2 += 5;
        glutPostRedisplay();
        break;
    case 'z':
    	if(telunjuk3 < 70)
        	telunjuk3 += 5;
        glutPostRedisplay();
        break;
    case 'w':
    	if(tengah1 < 110)
        	tengah1 += 5;
        glutPostRedisplay();
        break;
    case 's':
    	if(tengah2 < 100)
        	tengah2 += 5;
        glutPostRedisplay();
        break;
    case 'x':
    	if(tengah3 < 70)
        	tengah3 += 5;
        glutPostRedisplay();
        break;
    case 'e':
    	if(manis1 < 110)
        	manis1 += 5;
        glutPostRedisplay();
        break;
    case 'd':
    	if(manis2 < 100)
        	manis2 += 5;
        glutPostRedisplay();
        break;
    case 'c':
    	if(manis3 < 70)
        	manis3 += 5;
        glutPostRedisplay();
        break;
    case 'r':
    	if(kelingking1 < 110)
        	kelingking1 += 5;
        glutPostRedisplay();
        break;
    case 'f':
    	if(kelingking2 < 100)
        	kelingking2 += 5;
        glutPostRedisplay();
        break;
    case 'v':
    	if(kelingking3 < 70)
       		kelingking3 += 5;
        glutPostRedisplay();
        break;
    case 't':
    	if(jempol1 < 140)
        	jempol1 += 5;
        glutPostRedisplay();
        break;
    case 'g':
    	if(jempol2 < 110)
        	jempol2 += 5;
        glutPostRedisplay();
        break;
    case 'U':
        bahu1 = (bahu1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'J':
        bahu2 = (bahu2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'N':
        bahu3 = (bahu3 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'I':
        if (tangan > 0)
        	tangan -= 5;
        glutPostRedisplay();
        break;
    case 'O':
    	if (telapak > 0)
    		telapak -= 5;
        glutPostRedisplay();
        break;
    case 'Q':
	    if(telunjuk1 > 0)
	        telunjuk1 -= 5;
	    glutPostRedisplay();
	    break;
	case 'A':
	    if(telunjuk2 > 0)
	        telunjuk2 -= 5;
	    glutPostRedisplay();
	    break;
	case 'Z':
	    if(telunjuk3 > 0)
	        telunjuk3 -= 5;
	    glutPostRedisplay();
	    break;
	case 'W':
	    if(tengah1 > 0)
	        tengah1 -= 5;
	    glutPostRedisplay();
	    break;
	case 'S':
	    if(tengah2 > 0)
	        tengah2 -= 5;
	    glutPostRedisplay();
	    break;
	case 'X':
	    if(tengah3 > 0)
	        tengah3 -= 5;
	    glutPostRedisplay();
	    break;
	case 'E':
	    if(manis1 > 0)
	        manis1 -= 5;
	    glutPostRedisplay();
	    break;
	case 'D':
	    if(manis2 > 0)
	        manis2 -= 5;
	    glutPostRedisplay();
	    break;
	case 'C':
	    if(manis3 > 0)
	        manis3 -= 5;
	    glutPostRedisplay();
	    break;
	case 'R':
	    if(kelingking1 > 0)
	        kelingking1 -= 5;
	    glutPostRedisplay();
	    break;
	case 'F':
	    if(kelingking2 > 0)
	        kelingking2 -= 5;
	    glutPostRedisplay();
	    break;
	case 'V':
	    if(kelingking3 > 0)
	        kelingking3 -= 5;
	    glutPostRedisplay();
	    break;
	case 'T':
	    if(jempol1 > 0)
	        jempol1 -= 5;
	    glutPostRedisplay();
	    break;
	case 'G':
	    if(jempol2 > 0)
	        jempol2 -= 5;
	    glutPostRedisplay();
	    break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
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

