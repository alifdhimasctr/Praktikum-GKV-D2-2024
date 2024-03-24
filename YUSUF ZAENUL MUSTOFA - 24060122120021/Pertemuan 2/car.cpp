/*
  Nama : Yusuf Zaenul Mustofa 
  NIM  : 24060122120021
  Lab  : GKV D2
  Membuat Gambar Mobil Menggunakan Objek Primitif dan Transformasi  - 27/2/2024
*/

#include <GL/glut.h>
#include <math.h>


void Car(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //Body Mobil
    glPushMatrix();
    	glBegin(GL_POLYGON);
    		glColor3f(0.96, 0.72, 0.16);
    		glVertex3f(0.50, -0.10, 0.00);
    		glVertex3f(0.79, -0.10, 0.00);
    		glVertex3f(0.76, -0.09, 0.00);
    		glVertex3f(0.74, -0.07, 0.00);
    		glVertex3f(0.74, -0.01, 0.00);
    		glVertex3f(0.76, 0.00, 0.00);
    		glVertex3f(0.70, 0.05, 0.00);
    		glVertex3f(0.66, 0.08, 0.00);
    		glVertex3f(0.28, 0.10, 0.00);
    		glVertex3f(0.10, 0.18, 0.00);
    		glVertex3f(0.00, 0.22, 0.00);
    		glVertex3f(-0.14, 0.23, 0.00);
    		glVertex3f(-0.30, 0.22, 0.00);
    		glVertex3f(-0.40, 0.20, 0.00);
    		glVertex3f(-0.60, 0.10, 0.00);
    		glVertex3f(-0.70, 0.10, 0.00);
    		glVertex3f(-0.70, 0.02, 0.00);
    		glVertex3f(-0.72, 0.00, 0.00);
    		glVertex3f(-0.72, -0.10, 0.00);
    		glVertex3f(0.79, -0.10, 0.00);
    		glVertex3f(0.50, -0.10, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Outline Body Mobil
    glPushMatrix();
    	glLineWidth(3.0);
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(0.79, -0.10, 0.00);
    		glVertex3f(0.76, -0.09, 0.00);
    		glVertex3f(0.74, -0.07, 0.00);
    		glVertex3f(0.74, -0.01, 0.00);
    		glVertex3f(0.76, 0.00, 0.00);
    		glVertex3f(0.70, 0.05, 0.00);
    		glVertex3f(0.66, 0.08, 0.00);
    		glVertex3f(0.28, 0.10, 0.00);
    		glVertex3f(0.10, 0.18, 0.00);
    		glVertex3f(0.00, 0.22, 0.00);
    		glVertex3f(-0.14, 0.23, 0.00);
    		glVertex3f(-0.30, 0.22, 0.00);
    		glVertex3f(-0.40, 0.20, 0.00);
    		glVertex3f(-0.60, 0.10, 0.00);
    		glVertex3f(-0.70, 0.10, 0.00);
    		glVertex3f(-0.70, 0.02, 0.00);
    		glVertex3f(-0.72, 0.00, 0.00);
    		glVertex3f(-0.72, -0.10, 0.00);
    		glVertex3f(0.79, -0.10, 0.00);
    	glEnd();
    	glBegin(GL_LINE_STRIP);
    		glVertex3f(0.20, 0.10, 0.00);
    		glVertex3f(0.22, 0.05, 0.00);
    		glVertex3f(0.22, 0.00, 0.00);
    		glVertex3f(0.20, -0.07, 0.00);
    		glVertex3f(-0.22, -0.07, 0.00);
    		glVertex3f(-0.25, 0.00, 0.00);
    		glVertex3f(-0.25, 0.05, 0.00);
    		glVertex3f(-0.23, 0.10, 0.00);
    	glEnd();
    	glBegin(GL_LINE_STRIP);
    		glVertex3f(-0.22, 0.05, 0.0);
    		glVertex3f(-0.17, 0.05, 0.0);
    		glVertex3f(-0.16, 0.04, 0.0);
    		glVertex3f(-0.17, 0.03, 0.0);
    		glVertex3f(-0.22, 0.03, 0.0);
    		glVertex3f(-0.23, 0.04, 0.0);
    		glVertex3f(-0.22, 0.05, 0.0);
    	glEnd();
    	glBegin(GL_LINES);
    		glVertex3f(0.28, 0.04, 0.00);
    		glVertex3f(0.34, 0.04, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glVertex3f(0.28, 0.055, 0.00);
    		glVertex3f(0.34, 0.055, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glVertex3f(0.28, 0.028, 0.00);
    		glVertex3f(0.34, 0.028, 0.00);
    	glEnd();
    	
    	glBegin(GL_LINES);
    		glVertex3f(0.74, -0.05, 0.00);
    		glVertex3f(0.71, -0.05, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glVertex3f(0.74, -0.03, 0.00);
    		glVertex3f(0.71, -0.03, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glVertex3f(0.74, -0.07, 0.00);
    		glVertex3f(0.71, -0.07, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glVertex3f(0.45, 0.095, 0.00);
    		glVertex3f(0.38, 0.05, 0.00);
    	glEnd();
    	glLineWidth(2.0);
    	glBegin(GL_LINES);
    		glVertex3f(0.38, 0.05, 0.00);
    		glVertex3f(0.35, 0.00, 0.00);
    	glEnd();
    	glLineWidth(1.0);
    	glBegin(GL_LINES);
    		glVertex3f(0.35, 0.00, 0.00);
    		glVertex3f(0.35, -0.05, 0.00);
    	glEnd();
    	glLineWidth(2.0);
		glBegin(GL_LINE_STRIP);
			glVertex3f(-0.58, 0.075, 0.00);
    		glVertex3f(-0.53, 0.09, 0.00);
    		glVertex3f(-0.48, 0.1, 0.00);
    	glEnd();
    	glLineWidth(1.0);
		glBegin(GL_LINE_STRIP);
			glVertex3f(-0.48, 0.1, 0.00);
			glVertex3f(-0.40, 0.1, 0.00);
    		glVertex3f(-0.35, 0.09, 0.00);
    	glEnd();
    	
    	
    glPopMatrix();
    
    //Kaca
    glPushMatrix();
    	glBegin(GL_POLYGON);
    		glColor3f(0.16, 0.82, 0.91);
    		glVertex3f(0.20, 0.10, 0.00);
    		glVertex3f(0.00, 0.19, 0.00);
    		glVertex3f(-0.10, 0.20, 0.00);
    		glVertex3f(-0.20, 0.20, 0.00);
    		glVertex3f(-0.26, 0.19, 0.00);
    		glVertex3f(-0.30, 0.17, 0.00);
    		glVertex3f(-0.34, 0.14, 0.00);
    		glVertex3f(-0.30, 0.11, 0.00);
    		glVertex3f(-0.26, 0.10, 0.00);
    		glVertex3f(0.20, 0.10, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Outline Kaca
    glPushMatrix();
    	glLineWidth(3.0);
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(0.20, 0.10, 0.00);
    		glVertex3f(0.00, 0.19, 0.00);
    		glVertex3f(-0.10, 0.20, 0.00);
    		glVertex3f(-0.20, 0.20, 0.00);
    		glVertex3f(-0.26, 0.19, 0.00);
    		glVertex3f(-0.30, 0.17, 0.00);
    		glVertex3f(-0.34, 0.14, 0.00);
    		glVertex3f(-0.30, 0.11, 0.00);
    		glVertex3f(-0.26, 0.10, 0.00);
    		glVertex3f(0.20, 0.10, 0.00);
    	glEnd();
    	glLineWidth(2.0);
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(-0.25, 0.19, 0.00);
    		glVertex3f(-0.23, 0.10, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Lampu Depan
    glPushMatrix();
    	glBegin(GL_POLYGON);
    		glColor3f(0.98, 0.96, 0.77);
    		glVertex3f(0.76, 0.00, 0.00);
    		glVertex3f(0.70, 0.05, 0.00);
    		glVertex3f(0.66, 0.08, 0.00);
    		glVertex3f(0.64, 0.08, 0.00);
    		glVertex3f(0.68, 0.03, 0.00);
    		glVertex3f(0.69, 0.02, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Outline Lampu Depan
    glPushMatrix();
    	glLineWidth(3.0);
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(0.76, 0.00, 0.00);
    		glVertex3f(0.70, 0.05, 0.00);
    		glVertex3f(0.66, 0.08, 0.00);
    		glVertex3f(0.64, 0.08, 0.00);
    		glVertex3f(0.68, 0.03, 0.00);
    		glVertex3f(0.69, 0.02, 0.00);
    		glVertex3f(0.76, 0.00, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Lampu Belakang
    glPushMatrix();
    	glBegin(GL_POLYGON);
    		glColor3f(1.0, 0.26, 0.29);
    		glVertex3f(-0.67, 0.075, 0.00);
    		glVertex3f(-0.67, 0.03, 0.00);
    		glVertex3f(-0.70, 0.02, 0.00);
    		glVertex3f(-0.70, 0.08, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Outline Lampu Belakang
    glPushMatrix();
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(-0.67, 0.075, 0.00);
    		glVertex3f(-0.67, 0.03, 0.00);
    		glVertex3f(-0.70, 0.02, 0.00);
    		glVertex3f(-0.70, 0.075, 0.00);
    		glVertex3f(-0.67, 0.075, 0.00);
    		glVertex3f(-0.58, 0.075, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Spion
    glPushMatrix();
    	glBegin(GL_POLYGON);
    		glColor3f(0.96, 0.72, 0.16);
    		glVertex3f(0.185, 0.10, 0.00);
    		glVertex3f(0.12, 0.14, 0.00);
    		glVertex3f(0.10, 0.14, 0.00);
    		glVertex3f(0.09, 0.12, 0.00);
    		glVertex3f(0.10, 0.085, 0.00);
    		glVertex3f(0.14, 0.08, 0.00);
    		glVertex3f(0.185, 0.10, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Outline Spion
    glPushMatrix();
    	glLineWidth(3.0);
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(0.185, 0.10, 0.00);
    		glVertex3f(0.12, 0.14, 0.00);
    		glVertex3f(0.10, 0.14, 0.00);
    		glVertex3f(0.09, 0.12, 0.00);
    		glVertex3f(0.10, 0.085, 0.00);
    		glVertex3f(0.14, 0.08, 0.00);
    		glVertex3f(0.185, 0.10, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Spoiler
    glPushMatrix();
    	glBegin(GL_POLYGON);
    		glColor3f(0.96, 0.72, 0.16);
    		glVertex3f(-0.61, 0.09, 0.00);
    	    glVertex3f(-0.62, 0.12, 0.00);
    		glVertex3f(-0.67, 0.15, 0.00);
    		glVertex3f(-0.73, 0.15, 0.00);
    		glVertex3f(-0.68, 0.12, 0.00);
    		glVertex3f(-0.67, 0.09, 0.00);
    		glVertex3f(-0.61, 0.09, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Outline Spoiler
    glPushMatrix();
    	glBegin(GL_LINE_STRIP);
    		glColor3f(0.19,0.01,0.19);
    		glVertex3f(-0.61, 0.09, 0.00);
    	    glVertex3f(-0.62, 0.12, 0.00);
    		glVertex3f(-0.67, 0.15, 0.00);
    		glVertex3f(-0.73, 0.15, 0.00);
    		glVertex3f(-0.68, 0.12, 0.00);
    		glVertex3f(-0.67, 0.09, 0.00);
    		glVertex3f(-0.61, 0.09, 0.00);
    	glEnd();
    glPopMatrix();
    
    
    //Roda yang Menggunakan Translasi
	glPushMatrix();
        glTranslatef(0.50, -0.05, 0.00);
        glScalef(0.12, 0.12, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_POLYGON);
            glColor3f(0.19,0.01,0.19); 
            GLint circle_points = 100;
            int i;
            float angle;
            for (i = 0; i < circle_points; i++){
                angle = 2*PI*i/circle_points;
                glVertex2f(cos(angle), sin(angle));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.43f, -0.05f, 0.0f);
        glScalef(0.12, 0.12, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_POLYGON);
            glColor3f(0.19,0.01,0.19); 
            GLint circle_points2 = 100;
            int j;
            float angle2;
            for (j = 0; j < circle_points2; j++){
                angle2 = 2*PI*j/circle_points2;
                glVertex2f(cos(angle2), sin(angle2));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(0.50, -0.05, 0.00);
        glScalef(0.10, 0.10, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_LINE_LOOP);
            glColor3f(0.44,0.36,0.37); 
            GLint circle_points3 = 100;
            int k;
            float angle3;
            for (k = 0; k < circle_points3; k++){
                angle3 = 2*PI*k/circle_points3;
                glVertex2f(cos(angle3), sin(angle3));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.43f, -0.05f, 0.0f);
        glScalef(0.10, 0.10, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_LINE_LOOP);
            glColor3f(0.44,0.36,0.37); 
            GLint circle_points4 = 100;
            int l;
            float angle4;
            for (l = 0; l < circle_points4; l++){
                angle4 = 2*PI*l/circle_points4;
                glVertex2f(cos(angle4), sin(angle4));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(0.50, -0.05, 0.00);
        glScalef(0.05, 0.05, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_POLYGON);
            glColor3f(0.44,0.36,0.37); 
            GLint circle_points5 = 100;
            int m;
            float angle5;
            for (m = 0; m < circle_points5; m++){
                angle5 = 2*PI*m/circle_points5;
                glVertex2f(cos(angle5), sin(angle5));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.43f, -0.05f, 0.0f);
        glScalef(0.05, 0.05, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_POLYGON);
            glColor3f(0.44,0.36,0.37); 
            GLint circle_points6 = 100;
            int n;
            float angle6;
            for (n = 0; n < circle_points6; n++){
                angle6 = 2*PI*n/circle_points6;
                glVertex2f(cos(angle6), sin(angle6));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(0.50, -0.05, 0.00);
        glScalef(0.03, 0.03, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_POLYGON);
            glColor3f(0.19,0.01,0.19); 
            GLint circle_points7 = 100;
            int o;
            float angle7;
            for (o = 0; o < circle_points7; o++){
                angle7 = 2*PI*o/circle_points7;
                glVertex2f(cos(angle7), sin(angle7));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.43f, -0.05f, 0.0f);
        glScalef(0.03, 0.03, 1.0);
        #define PI 3.1415926535898
        glBegin(GL_POLYGON);
            glColor3f(0.19,0.01,0.19); 
            GLint circle_points8 = 100;
            int p;
            float angle8;
            for (p = 0; p < circle_points8; p++){
                angle8 = 2*PI*p/circle_points8;
                glVertex2f(cos(angle8), sin(angle8));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.43f, -0.05f, 0.0f);
    	glRotatef(30.0, 0.0, 0.0, 1.0);
    	glTranslatef(0.43f, 0.05f, 0.0f);
    	glLineWidth(2.0);
    	glBegin(GL_LINES);
    		glColor3f(0.7, 0.7, 0.7);
    		glVertex3f(-0.43, -0.00, 0.00);
    		glVertex3f(-0.43, -0.10, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glColor3f(0.7, 0.7, 0.7);
    		glVertex3f(-0.48, -0.05, 0.00);
    		glVertex3f(-0.38, -0.05, 0.00);
    	glEnd();
    glPopMatrix();
    
    //Garis di Roda Menggunakan Translasi dan Rotasi
    glPushMatrix();
    	glTranslatef(0.5f, -0.05f, 0.0f);
    	glRotatef(30.0, 0.0, 0.0, 1.0);
    	glTranslatef(-0.5f, 0.05f, 0.0f);
    	glLineWidth(2.0);
    	glBegin(GL_LINES);
    		glColor3f(0.7, 0.7, 0.7);
    		glVertex3f(0.50, -0.00, 0.00);
    		glVertex3f(0.50, -0.10, 0.00);
    	glEnd();
    	glBegin(GL_LINES);
    		glColor3f(0.7, 0.7, 0.7);
    		glVertex3f(0.55, -0.05, 0.00);
    		glVertex3f(0.45, -0.05, 0.00);
    	glEnd();
    glPopMatrix();
	
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Car");
    glutDisplayFunc(Car);
    glClearColor(0.96f, 0.26f, 0.29f, 1.0f);
    glutMainLoop();
    return 0;
}
