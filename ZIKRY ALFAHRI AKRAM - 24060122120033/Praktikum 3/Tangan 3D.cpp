// Nama			: Zikry Alfahri Akram
// NIM			: 24060122120033
// Tanggal		: Selasa, 5 Maret 2024
// Deskripsi	: Membuat animasi tangan 3D yang dijalankan dengan menggunakan keyboard

#include <GL/glut.h>  

static int yshoulder = 0, zshoulder = 0; // Pergerakan lengan bahu
static int elbow = 0; // Pergerakan lengan siku
static int xpalm = 0, zpalm = 0; // Pergerakan telapak tangan
static int thumb_a = 0, ythumb_b = 0, zthumb_b = 0; // Pergerakan ibu jari
static int index_fg = 0, index_fga = 0, index_fgb = 0, index_fgc = 0; // Pergerakan jari telunjuk
static int mid_fg = 0, mid_fga = 0, mid_fgb = 0, mid_fgc = 0; // Pergerakan jari tengah
static int ring_fg = 0, ring_fga = 0, ring_fgb = 0, ring_fgc = 0; // Pergerakan jari manis
static int little_fg = 0, little_fga = 0, little_fgb = 0, little_fgc = 0; // Pergerakan jari kelingking

void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);   
}

void Grid() {
	glTranslatef(0.0, 0.0, -10.0);
    glColor3f(0.3, 0.3, 0.3);

    // Gambar garis horizontal
    for (int i = -20; i <= 20; ++i) {
        glBegin(GL_LINES);
	        glVertex2f(-50.0, i);
	        glVertex2f(50.0, i);
        glEnd();
    }

    // Gambar garis vertikal
    for (int i = -50; i <= 50; ++i) {
        glBegin(GL_LINES);
	        glVertex2f(i, -50.0);
	        glVertex2f(i, 50.0);
        glEnd();
    }
}   

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
		glPushMatrix();
			Grid();
		glPopMatrix();
		
		glTranslatef(-1.0, 0.18, 0.0);
		glColor3f(1.0, 1.0, 1.0);
		
        // Lengan bahu
        glTranslatef (-1.0, 0.0, 0.0);
        glRotatef ((GLfloat) yshoulder, 0.0, 1.0, 0.0);
        glRotatef ((GLfloat) zshoulder, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0);
        glPushMatrix();
            glScalef (2.5, 0.7, 1.0);
            glutWireCube(0.5);
        glPopMatrix();
        
        // Lengan siku
        glTranslatef (0.55, 0.0, 0.0);
        glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
        glTranslatef (0.57, 0.0, 0.0);
        glPushMatrix();
            glScalef (2.0, 0.7, 1.0);
            glutWireCube (0.5);
        glPopMatrix();
        
        // Telapak tangan
        glTranslatef (0.47, 0.0, 0.0);
        glRotatef ((GLfloat) xpalm, 1.0, 0.0, 0.0);
        glRotatef ((GLfloat) zpalm, 0.0, 0.0, 1.0);
        glTranslatef (0.28, 0.0, 0.0);
        glPushMatrix();
            glScalef (1.0, 0.6, 1.3);
            glutWireCube (0.5);
        glPopMatrix();
        
        // Ibu Jari
        glPushMatrix();
        	glTranslatef (0.0, 0.0, -0.41);
        	glRotatef ((GLfloat) ythumb_b, 0.0, 1.0, 0.0);
        	glRotatef ((GLfloat) zthumb_b, 0.0, 0.0, 1.0);
        	glPushMatrix();
				glScalef (0.45, 0.45, 0.3);
            	glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.115, 0.0, 0.0);
            glRotatef ((GLfloat) thumb_a, 0.0, 0.0, 1.0);
            glTranslatef (0.115, 0.0, 0.0);
			glScalef (0.45, 0.4, 0.3);
            glutWireCube (0.5);
        glPopMatrix();
        
        // Jari Telunjuk
        glPushMatrix();
        	glTranslatef (0.165, 0.0, -0.25);
        	glRotatef ((GLfloat) index_fg, 0.0, 1.0, 0.0);
        	glRotatef ((GLfloat) index_fga, 0.0, 0.0, 1.0);
			glTranslatef (0.165, 0.0, -0.0);        	
        	glPushMatrix();
	            glScalef (0.3, 0.45, 0.3);
	            glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.075, 0.0, 0.0);
            glRotatef ((GLfloat) index_fgb, 0.0, 0.0, 1.0);
            glTranslatef (0.075, 0.0, 0.0);
            glPushMatrix();
            	glScalef (0.3, 0.4, 0.3);
            	glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.075, 0.0, 0.0);
            glRotatef ((GLfloat) index_fgc, 0.0, 0.0, 1.0);
            glTranslatef (0.075, 0.0, 0.0);
            glScalef (0.3, 0.35, 0.3);
            glutWireCube (0.5);
        glPopMatrix();
        
        // Jari Tengah
        glPushMatrix();
        	glTranslatef (0.175, 0.0, -0.09);
        	glRotatef ((GLfloat) mid_fg, 0.0, 1.0, 0.0);
        	glRotatef ((GLfloat) mid_fga, 0.0, 0.0, 1.0);
        	glTranslatef (0.175, 0.0, 0.0);
        	glPushMatrix();
	            glScalef (0.4, 0.45, 0.3);
	            glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.1, 0.0, 0.0);
            glRotatef ((GLfloat) mid_fgb, 0.0, 0.0, 1.0);
            glTranslatef (0.1, 0.0, 0.0);
            glPushMatrix();
            	glScalef (0.4, 0.4, 0.3);
            	glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.1, 0.0, 0.0);
            glRotatef ((GLfloat) mid_fgc, 0.0, 0.0, 1.0);
            glTranslatef (0.1, 0.0, 0.0);
            glScalef (0.4, 0.35, 0.3);
            glutWireCube (0.5);
        glPopMatrix();
        
        // Jari Manis
        glPushMatrix();
        	glTranslatef (0.17, 0.0, 0.07);
        	glRotatef ((GLfloat) ring_fg, 0.0, 1.0, 0.0);
        	glRotatef ((GLfloat) ring_fga, 0.0, 0.0, 1.0);
        	glTranslatef (0.17, 0.0, 0.0);
        	glPushMatrix();
	            glScalef (0.35, 0.45, 0.3);
	            glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.085, 0.0, 0.0);
            glRotatef ((GLfloat) ring_fgb, 0.0, 0.0, 1.0);
            glTranslatef (0.085, 0.0, 0.0);
            glPushMatrix();
            	glScalef (0.35, 0.4, 0.3);
            	glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.085, 0.0, 0.0);
            glRotatef ((GLfloat) ring_fgc, 0.0, 0.0, 1.0);
            glTranslatef (0.085, 0.0, 0.0);
            glScalef (0.35, 0.35, 0.3);
            glutWireCube (0.5);
        glPopMatrix();
        
        // Jari Kelingking
        glPushMatrix();
        	glTranslatef (0.16, 0.0, 0.23);
        	glRotatef ((GLfloat) little_fg, 0.0, 1.0, 0.0);
        	glRotatef ((GLfloat) little_fga, 0.0, 0.0, 1.0);
        	glTranslatef (0.16, 0.0, 0.0);
        	glPushMatrix();
	            glScalef (0.25, 0.45, 0.3);
	            glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.065, 0.0, 0.0);
            glRotatef ((GLfloat) little_fgb, 0.0, 0.0, 1.0);
            glTranslatef (0.065, 0.0, 0.0);
            glPushMatrix();
            	glScalef (0.25, 0.4, 0.3);
            	glutWireCube (0.5);
            glPopMatrix();
            glTranslatef (0.065, 0.0, 0.0);
            glRotatef ((GLfloat) little_fgc, 0.0, 0.0, 1.0);
            glTranslatef (0.065, 0.0, 0.0);
            glScalef (0.25, 0.35, 0.3);
            glutWireCube (0.5);
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
    	// Lengan Bahu
    	case 'a': // Arah ke belakang
    		if (yshoulder < 100) {
    			yshoulder += 5;                   
            	glutPostRedisplay();	
        	}                    
            break;
    	case 'A': // Arah ke depan  
    		if (yshoulder > -80) {
    			yshoulder -= 5;                   
            	glutPostRedisplay();	
        	}                    
            break;
        case 's': // Arah ke atas
        	if (zshoulder < 90) {
        		zshoulder += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'S': // Arah ke bawah
            if (zshoulder > -90) {
            	zshoulder -= 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        
        // Lengan Siku
        case 'e': // Menekuk
        	if (elbow < 135) {
        		elbow += 5;                  
            	glutPostRedisplay();	
        	}                   
            break;   
        case 'E': // Melencangkan
        	if (elbow > 0) {
        		elbow -= 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        
        // Telapak Tangan            
        case 'p': // Mengangkat
        	if (zpalm < 90) {
        		zpalm += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'P': // Menurunkan
        	if (zpalm > 0) {
        		zpalm -= 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        case 'o': // Berputar searah jarum jam
        	if (xpalm < 180) {
        		xpalm += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'O': // Berputar berlawanan arah jarum jam
        	if (xpalm > 0) {
        		xpalm -= 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        
        // Ibu Jari 
        case 't': // Arah kiri
        	if (ythumb_b < 80) {
        		ythumb_b += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'T': // Arah kanan
        	if (ythumb_b > 0 && index_fg < ythumb_b) {
        		ythumb_b -= 5;                   
            	glutPostRedisplay();	
        	}                    
            break;
        case 'y': // Arah depan
        	if (zthumb_b < 80) {
        		zthumb_b += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'Y': // Arah belakang
        	if (zthumb_b > 0) {
        		zthumb_b -= 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'u': // Sendi ke arah depan
        	if (thumb_a < 90) {
        		thumb_a += 5;                
            	glutPostRedisplay();	
        	}                    
            break;
        case 'U': // Sendi ke arah belakang
        	if (thumb_a > 0) {
        		thumb_a -= 5;                
            	glutPostRedisplay();	
        	}                    
            break;
            
        // Jari Telunjuk 
        case 'i': // Arah kiri
        	if (index_fg < 15 && index_fg < ythumb_b) {
        		index_fg += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'I': // Arah kanan
        	if (index_fg > mid_fg) {
        		index_fg -= 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        case 'j': // Arah depan
        	if (index_fga < 80) {
        		index_fga += 5;                  
            	glutPostRedisplay();	
        	}
			else if (index_fgb < 50){
				index_fgb += 5;
				glutPostRedisplay();
			}
			else if (index_fgc < 50){
				index_fgc += 5;
				glutPostRedisplay();
			}
            break;
        case 'J': // Arah belakang
        	if (index_fga > 0) {
        		index_fga -= 5;                   
            	glutPostRedisplay();	
        	}
			else if (index_fgb > 0){
				index_fgb -= 5;
				glutPostRedisplay();
			}
			else if (index_fgc > 0){
				index_fgc -= 5;
				glutPostRedisplay();
			}
            break;
            
        // Jari Tengah 
        case 'm': // Arah kiri
        	if (mid_fg < index_fg) {
        		mid_fg += 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        case 'M': // Arah kanan
        	if (mid_fg > -5 && mid_fg > ring_fg) {
        		mid_fg -= 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        case 'n': // Arah depan
        	if (mid_fga < 80) {
        		mid_fga += 5;                 
            	glutPostRedisplay();	
        	}
			else if (mid_fgb < 50){
				mid_fgb += 5;
				glutPostRedisplay();
			}
			else if (mid_fgc < 50){
				mid_fgc += 5;
				glutPostRedisplay();
			}
            break;
        case 'N': // Arah belakang
        	if (mid_fga > 0) {
        		mid_fga -= 5;                  
            	glutPostRedisplay();	
        	}
			else if (mid_fgb > 0){
				mid_fgb -= 5;
				glutPostRedisplay();
			}
			else if (mid_fgc > 0){
				mid_fgc -= 5;
				glutPostRedisplay();
			}
            break;
            
        // Jari Manis 
        case 'r': // Arah kiri
        	if (ring_fg < mid_fg) {
        		ring_fg += 5;                  
            	glutPostRedisplay();	
        	}                    
            break;
        case 'R': // Arah kanan
        	if (ring_fg > little_fg) {
        		ring_fg -= 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        case 'f': // Arah depan
        	if (ring_fga < 80) {
        		ring_fga += 5;                
            	glutPostRedisplay();	
        	}
			else if (ring_fgb < 50){
				ring_fgb += 5;
				glutPostRedisplay();
			}
			else if (ring_fgc < 50){
				ring_fgc += 5;
				glutPostRedisplay();
			}
            break;
        case 'F': // Arah belakang
        	if (ring_fga > 0) {
        		ring_fga -= 5;                   
            	glutPostRedisplay();	
        	}
			else if (ring_fgb > 0){
				ring_fgb -= 5;
				glutPostRedisplay();
			}
			else if (ring_fgc > 0){
				ring_fgc -= 5;
				glutPostRedisplay();
			}
            break;
            
    	// Jari Kelingking
        case 'k': // Arah kiri
        	if (little_fg < 0) {
        		little_fg += 5;                 
            	glutPostRedisplay();	
        	}                    
            break;
        case 'K': // Arah kanan
        	if (little_fg > -15) {
        		little_fg -= 5;                   
            	glutPostRedisplay();	
        	}                    
            break;
        case 'l': // Arah depan
        	if (little_fga < 80) {
        		little_fga += 5;                  
            	glutPostRedisplay();	
        	}
			else if (little_fgb < 50){
				little_fgb += 5;
				glutPostRedisplay();
			}
			else if (little_fgc < 50){
				little_fgc += 5;
				glutPostRedisplay();
			}
            break;
        case 'L': // Arah belakang
        	if (little_fga > 0) {
        		little_fga -= 5;                
            	glutPostRedisplay();	
        	}
			else if (little_fgb > 0){
				little_fgb -= 5;
				glutPostRedisplay();
			}
			else if (little_fgc > 0){
				little_fgc -= 5;
				glutPostRedisplay();
			}
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
    glutInitWindowSize (700, 600);        
    glutInitWindowPosition (100, 100);        
    glutCreateWindow ("Tangan 3D");
    init();   
    glutDisplayFunc(display);        
    glutReshapeFunc(reshape);        
    glutKeyboardFunc(keyboard);        
    glutMainLoop();        
    return 0;  
}

