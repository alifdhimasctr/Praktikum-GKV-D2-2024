/* Program   : main.cpp */
/* Deskripsi : Tugas Praktikum 1 */
/* NIM/Nama  : 24060122140182 / Ilham Rismawan Faadhi*/
/* Tanggal   : 26 Febuari 2024*/
/***********************************/

#include <GL/glut.h>
#include <stdlib.h>
#include <cmath> 

void jendela(void){
	// membersihkan layar dan menset dalam format
	glClear(GL_COLOR_BUFFER_BIT);
	// memastikan perintah teresekusi
	glFlush();	
}

void point(void){
	glClear(GL_COLOR_BUFFER_BIT);// diriset terlebih dahulu
	// membuat titik
	glPointSize(10.0f); // set ukuran titik
	
	glBegin(GL_POINTS); // prosses render titik dimulai
	
	glColor3f(1.0f,0.0f,0.0f); // warna
	glVertex3f(0.50,0.50,0.50); // koordinat
	
	glEnd(); // proses selesai
	
	glFlush();	// memastikan perintah teresekusi
}

void garis (void){
	glClear(GL_COLOR_BUFFER_BIT);// reset backgroud
	glLineWidth(2.0f); // panjang garis
	glBegin(GL_LINES); // mulai proses
	
	// proses menggambar
	glColor3f(1.0f,1.0f,1.0f);
	glVertex3f(0.00,0.20,0.0); // inisialisasi titik 1
	glVertex3f(0.50,0.30, 0.0); // inisialisasi titik 2
	glEnd(); // proses selesai
	glFlush(); //memastikan teresekusi
}

void segitiga(void){
	glClear(GL_COLOR_BUFFER_BIT);// reset backgroud
	glBegin(GL_TRIANGLES); // memulai proses pembuatan segitiga
	
	// membuat warna
	glColor3f(1.0f,0.0f, 0.0f); glVertex3f(-0.10,-0.10,0.00); 
	glColor3f(0.0f,1.0f, 0.0f); glVertex3f(0.10,-0.10,0.00);
	glColor3f(0.0f,0.0f, 1.0f); glVertex3f(0.00, 0.10,0.00);
	glEnd();
	glFlush();
}
void segiempat(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.18,0.18,0.18,-0.18);
	glFlush();
}
void garisStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINE_STRIP);
    
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-0.5, 0.5, 0.0);
    glVertex3f(-0.2, 0.8, 0.0);
    glVertex3f(0.2, 0.5, 0.0);
    glVertex3f(0.5, 0.8, 0.0);
    
    glEnd();
    glFlush();
}
void garisLoop(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(-0.2, -0.2, 0.0);
    glVertex3f(0.2, -0.5, 0.0);
    glVertex3f(0.5, -0.2, 0.0);
    
    glEnd();
    glFlush();
}

void segitigaFan(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0, 0.0, 0.0); // pusat lingkaran
    
    glColor3f(1.0f, 1.0f, 1.0f);
    for (float angle = 0.0; angle <= 360.0; angle += 10.0) {
        float radian = angle * 3.14159265 / 180.0;
        glVertex3f(0.2 * cos(radian), 0.2 * sin(radian), 0.0);
    }
    
    glEnd();
    glFlush();
}
void segitigaStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.5, 0.5, 0.0);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.2, 0.8, 0.0);
    glVertex3f(0.2, 0.5, 0.0);
    
    glEnd();
    glFlush();
}
void segiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.3, 0.3, 0.0);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.3, -0.3, 0.0);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.3, -0.3, 0.0);
    
    glEnd();
    glFlush();
}
void segiEmpatStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUAD_STRIP);
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.3, 0.3, 0.0);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.3, 0.3, 0.0);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.3, -0.3, 0.0);
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.3, -0.3, 0.0);
    
    glEnd();
    glFlush();
}

void segiempatBanyak(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    
    // tembok
    glColor3f(1.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(0.0, 0.0, 0.0);
    glRectf(-0.50, 0.50, 0.50, -0.50);
    glPopMatrix();
    // atap
    glColor3f(0.5f, 0.5f, 0.5f);
    glPushMatrix();
    glTranslated(0.0, 0.5, 0.0);
    glRectf(-0.55, 0.10, 0.55, -0.10);
    glPopMatrix();
    
    // Kotak pertama
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(0.3, -0.2, 0.0);
    glRectf(-0.06, 0.10, 0.06, -0.10);
    glPopMatrix();
    
    // Kotak kedua
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(0.0, -0.2, 0.0);
    glRectf(-0.06, 0.10, 0.06, -0.10);
    glPopMatrix();

    // Kotak ketiga
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(-0.3, -0.2, 0.0);
    glRectf(-0.06, 0.10, 0.06, -0.10);
    glPopMatrix();

    // Kotak keempat
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(0.3, 0.2, 0.0);
    glRectf(-0.06, 0.10, 0.06, -0.10);
    glPopMatrix();
    
    // Kotak kelima
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(0.0, 0.2, 0.0);
    glRectf(-0.06, 0.10, 0.06, -0.10);
    glPopMatrix();

    // Kotak keenam
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslated(-0.3, 0.2, 0.0);
    glRectf(-0.06, 0.10, 0.06, -0.10);
    glPopMatrix();
    
    
    glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("biru");
	
	// -- memanggil fungsi ke display -- //
	
	// no 1
	//glutDisplayFunc(jendela);
	//glutDisplayFunc(point);
	//glutDisplayFunc(garis);
	//glutDisplayFunc(segitiga);
	//glutDisplayFunc(segiempat);
	
	// no 2
	//glutDisplayFunc(garisStrip);
	//glutDisplayFunc(garisLoop);
	//glutDisplayFunc(segitigaFan);
	//glutDisplayFunc(segiEmpat);
	//glutDisplayFunc(segitigaStrip);
	//glutDisplayFunc(segiEmpatStrip);
	//glutDisplayFunc(segiEmpatStrip);
	
	// no 3
	glutDisplayFunc(segiempatBanyak);
	

	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
