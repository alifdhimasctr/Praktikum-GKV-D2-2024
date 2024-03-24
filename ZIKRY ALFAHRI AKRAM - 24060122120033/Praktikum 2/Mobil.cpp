// Nama		: Zikry Alfahri Akram
// NIM		: 24060122120033
// Tanggal	: Selasa, 27 Februari 2024
// Deskripsi: Tugas 3 Membuat Mobil

#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void Mobil(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    #define PI 3.1415926535898
    
	// RODA DEPAN (BAGIAN PALING BELAKANG LAYAR)
    glPushMatrix();
    	glTranslatef(-0.35, -0.35, 0);
	    glBegin(GL_POLYGON);
			glColor3f(0.2f, 0.2f, 0.2f);
	    	int i;
	    	float angle;
	    	for (i = 0; i < 360; i++){
	    		angle = 2*PI*i/360;
	    		glVertex2f(0.1*cos(angle), 0.1*sin(angle));
	    	}
	    glEnd();
    glPopMatrix();

    // RODA BELAKANG (BAGIAN PALING BELAKANG LAYAR)
    glPushMatrix();
    	glTranslatef(0.35, -0.35, 0);
		glBegin(GL_POLYGON);
		   	glColor3f(0.2f, 0.2f, 0.2f);
		   	for (i = 0; i < 360; i++){
		   		angle = 2*PI*i/360;
		   		glVertex2f(0.1*cos(angle), 0.1*sin(angle));
		   	}
		glEnd();
    glPopMatrix();
    
    // BADAN MOBIL (BAGIAN BELAKANG LAYAR)
    glPushMatrix();
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.7f);
    		glVertex2f(0.6, -0.25);
    		glVertex2f(-0.7, -0.25);
    		glVertex2f(-0.7, -0.35);
    		glVertex2f(0.6, -0.35);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.9f);
    		glVertex2f(0.5, -0.1);
    		glVertex2f(-0.65, -0.1);
    		glVertex2f(-0.7, -0.25);
    		glVertex2f(0.6, -0.25);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.9f);
    		glVertex2f(0.3, -0.07);
    		glVertex2f(-0.5, -0.07);
    		glVertex2f(-0.65, -0.1);
    		glVertex2f(0.5, -0.1);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.9f);
    		glVertex2f(0.3, -0.07);
    		glVertex2f(-0.5, -0.07);
    		glVertex2f(-0.65, -0.1);
    		glVertex2f(0.5, -0.1);
    	glEnd();
    glPopMatrix();
    
    // ATAP DAN MOBIL 
    glPushMatrix();
    	glLineWidth(4.0f);
    	glBegin(GL_LINE_LOOP);
    		glColor3f(0.0f, 0.0f, 0.0f);
    		glVertex2f(0.1, 0.2);
    		glVertex2f(-0.37, 0.2);
    		glVertex2f(-0.5, -0.07);
    		glVertex2f(0.3, -0.07);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.6f, 0.9f, 1.0f);
    		glVertex2f(0.099, 0.19);
    		glVertex2f(-0.369, 0.19);
    		glVertex2f(-0.495, -0.069);
    		glVertex2f(0.295, -0.069);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.1f, 0.1f, 0.2f);
    		glVertex2f(-0.17, 0.2);
    		glVertex2f(-0.19, 0.2);
    		glVertex2f(-0.19, -0.069);
    		glVertex2f(-0.17, -0.069);
    	glEnd();
    glPopMatrix();
    
    // BADAN MOBIL (BAGIAN DEPAN LAYAR)
    glPushMatrix();
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.7f);
    		glVertex2f(0.6, -0.25);
    		glVertex2f(-0.7, -0.25);
    		glVertex2f(-0.7, -0.35);
    		glVertex2f(0.6, -0.35);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.9f);
    		glVertex2f(0.5, -0.1);
    		glVertex2f(-0.65, -0.1);
    		glVertex2f(-0.7, -0.25);
    		glVertex2f(0.6, -0.25);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.9f);
    		glVertex2f(0.3, -0.07);
    		glVertex2f(-0.5, -0.07);
    		glVertex2f(-0.65, -0.1);
    		glVertex2f(0.5, -0.1);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.0f, 0.0f, 0.9f);
    		glVertex2f(0.3, -0.07);
    		glVertex2f(-0.5, -0.07);
    		glVertex2f(-0.65, -0.1);
    		glVertex2f(0.5, -0.1);
    	glEnd();
    	
		glBegin(GL_QUADS);
    		glColor3f(0.1f, 0.1f, 0.2f);
    		glVertex2f(-0.172, -0.069);
    		glVertex2f(-0.183, -0.069);
    		glVertex2f(-0.183, -0.35);
    		glVertex2f(-0.172, -0.35);
    	glEnd();
    	
    	glBegin(GL_QUADS);
    		glColor3f(0.1f, 0.1f, 0.2f);
    		glVertex2f(0.30, -0.069);
    		glVertex2f(0.31, -0.069);
    		glVertex2f(0.31, -0.35);
    		glVertex2f(0.30, -0.35);
    	glEnd();
    	
    	glLineWidth(4.0f);
    	glBegin(GL_LINE_LOOP);
    		glColor3f(0.0f, 0.0f, 0.0f);
    		glVertex2f(0.1, 0.2);
    		glVertex2f(-0.37, 0.2);
    		glVertex2f(-0.5, -0.07);
    		glVertex2f(0.3, -0.07);
    	glEnd();
    	
    	// Lampu Belakang
    	glBegin(GL_QUADS);
    		glColor3f(0.5f, 0.0f, 0.0f);
    		glVertex2f(-0.6, -0.15);
    		glVertex2f(-0.665, -0.15);
    		glVertex2f(-0.68, -0.2);
    		glVertex2f(-0.6, -0.2);
    	glEnd();
    	
    	// Gagang Pintu
    	glBegin(GL_QUADS);
    		glColor3f(0.5f, 0.5f, 1.0f);
    		glVertex2f(-0.05, -0.12);
    		glVertex2f(-0.15, -0.12);
    		glVertex2f(-0.15, -0.15);
    		glVertex2f(-0.05, -0.15);
    	glEnd();
    	
    	// Lampu Belakang
    	glRotated(90, 0.0, 0.0, 1.0);
    	glBegin(GL_QUADS);
    		glColor3f(0.8f, 0.9f, 0.9f);
    		glVertex2f(-0.2, -0.45);
    		glVertex2f(-0.15, -0.45);
    		glVertex2f(-0.15, -0.535);
    		glVertex2f(-0.2, -0.57);
    	glEnd();
    glPopMatrix();

	// RODA DEPAN (BAGIAN PALING DEPAN LAYAR)
    glPushMatrix();
    	glTranslatef(-0.4, -0.35, 0);
	    glBegin(GL_POLYGON);
			glColor3f(0.0f, 0.0f, 0.0f);
	    	for (i = 0; i < 360; i++){
	    		angle = 2*PI*i/360;
	    		glVertex2f(0.1*cos(angle), 0.1*sin(angle));
	    	}
	    glEnd();
    glPopMatrix();

    // RODA BELAKANG (BAGIAN PALING DEPAN LAYAR)
    glPushMatrix();
    	glTranslatef(0.3, -0.35, 0);
		glBegin(GL_POLYGON);
		   	glColor3f(0.0f, 0.0f, 0.0f);
		   	for (i = 0; i < 360; i++){
		   		angle = 2*PI*i/360;
		   		glVertex2f(0.1*cos(angle), 0.1*sin(angle));
		   	}
		glEnd();
    glPopMatrix();
    
	// PELEK RODA DEPAN (BAGIAN PALING DEPAN LAYAR)
    glPushMatrix();
    	glTranslatef(-0.4, -0.35, 0);
	    glBegin(GL_POLYGON);
			glColor3f(1.0f, 1.0f, 1.0f);
	    	for (i = 0; i < 360; i++){
	    		angle = 2*PI*i/360;
	    		glVertex2f(0.05*cos(angle), 0.05*sin(angle));
	    	}
	    glEnd();
    glPopMatrix();

    // PELEK RODA BELAKANG (BAGIAN PALING DEPAN LAYAR)
    glPushMatrix();
    	glTranslatef(0.3, -0.35, 0);
		glBegin(GL_POLYGON);
		   	glColor3f(1.0f, 1.0f, 1.0f);
		   	for (i = 0; i < 360; i++){
		   		angle = 2*PI*i/360;
		   		glVertex2f(0.05*cos(angle), 0.05*sin(angle));
		   	}
		glEnd();
    glPopMatrix();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil");
    glutDisplayFunc(Mobil);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
