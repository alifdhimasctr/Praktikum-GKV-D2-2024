#include <gl/glut.h>
void linestrip(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.4f,0.1f);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.2f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.4f,0.3f);
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.2f,0.4f);
	glVertex2f(0.2f,0.5f);
	glVertex2f(0.4f,0.5f);
	glVertex2f(0.4f,0.6f);
	glVertex2f(0.4f,0.6f);
	glVertex2f(0.1f,0.6f);
	glVertex2f(0.1f,0.1f);
	glEnd();
	glFlush();
}

void triangleFan(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.5f,0.5f,1.0f);
	glVertex2f(0.3f,0.3f);
	glVertex2f(0.6f,0.2f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.3f,0.01f);
	glVertex2f(0.1f,0.1f);
	
	glColor3f(1.0f,0.5f,1.0f);
	glVertex2f(0.01f,0.3f);
	glVertex2f(0.1f,0.5f);
	glVertex2f(0.3f,0.58f);
	glVertex2f(0.5f,0.5f);
	glVertex2f(0.6f,0.38f);
	
	glEnd();
	glPointSize(30.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(0.2f,0.4f);
	glEnd();
	glFlush();
}

void triangleStrip(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.1f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.3f,0.2f);
	
	glEnd();
	glFlush();
}

void quad(void){
	//
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.3f,0.6f);
	glVertex2f(0.4f,0.6f);
	glVertex2f(0.4f,0.5f);
	glVertex2f(0.3f,0.5f);
	
	glColor3f(0.2f,0.4f,0.0f); //hijau tua
	glVertex2f(0.4f,0.6f);
	glVertex2f(0.5f,0.6f);
	glVertex2f(0.5f,0.5f);
	glVertex2f(0.4f,0.5f);
	
	//
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.2f,0.5f);
	glVertex2f(0.3f,0.5f);
	glVertex2f(0.3f,0.4f);
	glVertex2f(0.2f,0.4f);

	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.3f,0.5f);
	glVertex2f(0.4f,0.5f);
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.3f,0.4f);

	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.4f,0.5f);
	glVertex2f(0.5f,0.5f);
	glVertex2f(0.5f,0.4f);
	glVertex2f(0.4f,0.4f);
	
	glColor3f(0.2f,0.4f,0.0f); //hijau tua
	glVertex2f(0.5f,0.5f);
	glVertex2f(0.6f,0.5f);
	glVertex2f(0.6f,0.4f);
	glVertex2f(0.5f,0.4f);
	
	//
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.1f,0.4f);
	glVertex2f(0.2f,0.4f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.1f,0.3f);

	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.2f,0.4f);
	glVertex2f(0.3f,0.4f);
	glVertex2f(0.3f,0.3f);
	glVertex2f(0.2f,0.3f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.3f,0.4f);
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.4f,0.3f);
	glVertex2f(0.3f,0.3f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.5f,0.4f);
	glVertex2f(0.5f,0.3f);
	glVertex2f(0.4f,0.3f);

	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.5f,0.4f);
	glVertex2f(0.6f,0.4f);
	glVertex2f(0.6f,0.3f);
	glVertex2f(0.5f,0.3f);
	
	glColor3f(0.2f,0.4f,0.0f); //hijau tua
	glVertex2f(0.6f,0.4f);
	glVertex2f(0.7f,0.4f);
	glVertex2f(0.7f,0.3f);
	glVertex2f(0.6f,0.3f);
	
	//
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.0f,0.3f);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.1f,0.2f);
	glVertex2f(0.0f,0.2f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.2f,0.2f);
	glVertex2f(0.1f,0.2f);
	
	glColor3f(0.0f,0.0f,0.0f); //merah
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.3f,0.3f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.2f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.3f,0.3f);
	glVertex2f(0.4f,0.3f);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.3f,0.2f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.4f,0.3f);
	glVertex2f(0.5f,0.3f);
	glVertex2f(0.5f,0.2f);
	glVertex2f(0.4f,0.2f);
	
	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.5f,0.3f);
	glVertex2f(0.6f,0.3f);
	glVertex2f(0.6f,0.2f);
	glVertex2f(0.5f,0.2f);
	
	glColor3f(0.2f,0.4f,0.0f); //hijau tua
	glVertex2f(0.6f,0.3f);
	glVertex2f(0.7f,0.3f);
	glVertex2f(0.7f,0.2f);
	glVertex2f(0.6f,0.2f);

	//
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.1f,0.1f);
	glVertex2f(0.0f,0.1f);
	glVertex2f(0.0f,0.2f);
	glVertex2f(-0.1f,0.2f);

	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.0f,0.1f);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.1f,0.2f);
	glVertex2f(0.0f,0.2f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.2f,0.2f);
	glVertex2f(0.1f,0.2f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.2f);

	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.4f,0.1f);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.3f,0.2f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.4f,0.1f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.5f,0.2f);
	glVertex2f(0.4f,0.2f);
	
	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.6f,0.1f);
	glVertex2f(0.6f,0.2f);
	glVertex2f(0.5f,0.2f);
	
	glColor3f(0.2f,0.4f,0.0f); //hijau tua
	glVertex2f(0.6f,0.1f);
	glVertex2f(0.7f,0.1f);
	glVertex2f(0.7f,0.2f);
	glVertex2f(0.6f,0.2f);
	
	//
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.2f,0.0f);
	glVertex2f(-0.1f,0.0f);
	glVertex2f(-0.1f,0.1f);
	glVertex2f(-0.2f,0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.1f,0.0f);
	glVertex2f(0.0f,0.0f);
	glVertex2f(0.0f,0.1f);
	glVertex2f(-0.1f,0.1f);
	
	glColor3f(0.0f,0.0f,0.0f); //hitam
	glVertex2f(0.0f,0.0f);
	glVertex2f(0.1f,0.0f);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.0f,0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.1f,0.0f);
	glVertex2f(0.2f,0.0f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.1f,0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.2f,0.0f);
	glVertex2f(0.3f,0.0f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.2f,0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.3f,0.0f);
	glVertex2f(0.4f,0.0f);
	glVertex2f(0.4f,0.1f);
	glVertex2f(0.3f,0.1f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.4f,0.0f);
	glVertex2f(0.5f,0.0f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.4f,0.1f);
	
	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.5f,0.0f);
	glVertex2f(0.6f,0.0f);
	glVertex2f(0.6f,0.1f);
	glVertex2f(0.5f,0.1f);
	
	glColor3f(0.2f,0.4f,0.0f); //hijau muda
	glVertex2f(0.6f,0.0f);
	glVertex2f(0.7f,0.0f);
	glVertex2f(0.7f,0.1f);
	glVertex2f(0.6f,0.1f);
	
	//
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.3f,0.0f);
	glVertex2f(-0.2f,0.0f);
	glVertex2f(-0.2f,-0.1f);
	glVertex2f(-0.3f,-0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.2f,0.0f);
	glVertex2f(-0.1f,0.0f);
	glVertex2f(-0.1f,-0.1f);
	glVertex2f(-0.2f,-0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.1f,0.0f);
	glVertex2f(0.0f,0.0f);
	glVertex2f(0.0f,-0.1f);
	glVertex2f(-0.1f,-0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.0f,0.0f);
	glVertex2f(0.1f,0.0f);
	glVertex2f(0.1f,-0.1f);
	glVertex2f(0.0f,-0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.1f,0.0f);
	glVertex2f(0.2f,0.0f);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.1f,-0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.2f,0.0f);
	glVertex2f(0.3f,0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.2f,-0.1f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.3f,0.0f);
	glVertex2f(0.4f,0.0f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.3f,-0.1f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.4f,0.0f);
	glVertex2f(0.5f,0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	
	glColor3f(0.5f,0.8f,0.0f); //hijau muda
	glVertex2f(0.5f,0.0f);
	glVertex2f(0.6f,0.0f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.5f,-0.1f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.6f,0.0f);
	glVertex2f(0.7f,0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	
	//
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.4f,-0.1f);
	glVertex2f(-0.3f,-0.1f);
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.4f,-0.2f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.3f,-0.1f);
	glVertex2f(-0.2f,-0.1f);
	glVertex2f(-0.2f,-0.2f);
	glVertex2f(-0.3f,-0.2f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.2f,-0.1f);
	glVertex2f(-0.1f,-0.1f);
	glVertex2f(-0.1f,-0.2f);
	glVertex2f(-0.2f,-0.2f);
	
	glColor3f(0.0,0.0f,0.0f); //hitam
	glVertex2f(-0.1f,-0.1f);
	glVertex2f(0.0f,-0.1f);
	glVertex2f(0.0f,-0.2f);
	glVertex2f(-0.1f,-0.2f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(0.0f,-0.1f);
	glVertex2f(0.1f,-0.1f);
	glVertex2f(0.1f,-0.2f);
	glVertex2f(0.0f,-0.2f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(0.1f,-0.1f);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.2f);
	glVertex2f(0.1f,-0.2f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.3f,-0.2f);
	glVertex2f(0.2f,-0.2f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.2f);
	glVertex2f(0.3f,-0.2f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.5f,-0.2f);
	glVertex2f(0.4f,-0.2f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.2f);
	glVertex2f(0.5f,-0.2f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.7f,-0.2f);
	glVertex2f(0.6f,-0.2f);
	
	//
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.5f,-0.2f);
	glVertex2f(-0.4f,-0.2f);
	glVertex2f(-0.4f,-0.3f);
	glVertex2f(-0.5f,-0.3f);

	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.4f,-0.2f);
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.3f,-0.3f);
	glVertex2f(-0.4f,-0.3f);
	
	glColor3f(0.0,0.0f,0.0f); //merah
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.2f,-0.2f);
	glVertex2f(-0.2f,-0.3f);
	glVertex2f(-0.3f,-0.3f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.2f,-0.2f);
	glVertex2f(-0.1f,-0.2f);
	glVertex2f(-0.1f,-0.3f);
	glVertex2f(-0.2f,-0.3f);

	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(-0.1f,-0.2f);
	glVertex2f(0.0f,-0.2f);
	glVertex2f(0.0f,-0.3f);
	glVertex2f(-0.1f,-0.3f);

	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(0.0f,0.0f);
	glVertex2f(0.1f,-0.2f);
	glVertex2f(0.1f,-0.3f);
	glVertex2f(0.0f,-0.3f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(0.1f,-0.0f);
	glVertex2f(0.2f,-0.2f);
	glVertex2f(0.2f,-0.3f);
	glVertex2f(0.1f,-0.3f);
	
	glColor3f(1.0,0.0f,0.0f); //merah
	glVertex2f(0.2f,-0.2f);
	glVertex2f(0.3f,-0.2f);
	glVertex2f(0.3f,-0.3f);
	glVertex2f(0.2f,-0.3f);

	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.3f,-0.2f);
	glVertex2f(0.4f,-0.2f);
	glVertex2f(0.4f,-0.3f);
	glVertex2f(0.3f,-0.3f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(0.4f,-0.2f);
	glVertex2f(0.5f,-0.2f);
	glVertex2f(0.5f,-0.3f);
	glVertex2f(0.4f,-0.3f);

	glColor3f(0.2,0.4f,0.0f); //hijau muda
	glVertex2f(0.5f,-0.2f);
	glVertex2f(0.6f,-0.2f);
	glVertex2f(0.6f,-0.3f);
	glVertex2f(0.5f,-0.3f);
	
	//
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(-0.6f,-0.3f);
	glVertex2f(-0.5f,-0.3f);
	glVertex2f(-0.5f,-0.4f);
	glVertex2f(-0.6f,-0.4f);
	
	glColor3f(1.0f,0.4f,0.4f); //pink
	glVertex2f(-0.5f,-0.3f);
	glVertex2f(-0.4f,-0.3f);
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.5f,-0.4f);

	glColor3f(1.0f,0.4f,0.4f); //pink
	glVertex2f(-0.4f,-0.3f);
	glVertex2f(-0.3f,-0.3f);
	glVertex2f(-0.3f,-0.4f);
	glVertex2f(-0.4f,-0.4f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.3f,-0.3f);
	glVertex2f(-0.2f,-0.3f);
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.3f,-0.4f);

	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.2f,-0.3f);
	glVertex2f(-0.1f,-0.3f);
	glVertex2f(-0.1f,-0.4f);
	glVertex2f(-0.2f,-0.4f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(-0.1f,-0.3f);
	glVertex2f(0.0f,-0.3f);
	glVertex2f(0.0f,-0.4f);
	glVertex2f(-0.1f,-0.4f);
	
	glColor3f(1.0f,0.0f,0.0f); //merah
	glVertex2f(0.0f,-0.3f);
	glVertex2f(0.1f,-0.3f);
	glVertex2f(0.1f,-0.4f);
	glVertex2f(0.0f,-0.4f);	
	
	glColor3f(1.0f,0.4f,0.4f); //merah
	glVertex2f(0.1f,-0.3f);
	glVertex2f(0.2f,-0.3f);
	glVertex2f(0.2f,-0.4f);
	glVertex2f(0.1f,-0.4f);	
	
	glColor3f(1.0f,0.4f,0.4f); //pink
	glVertex2f(0.2f,-0.3f);
	glVertex2f(0.3f,-0.3f);
	glVertex2f(0.3f,-0.4f);
	glVertex2f(0.2f,-0.4f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(0.3f,-0.3f);
	glVertex2f(0.4f,-0.3f);
	glVertex2f(0.4f,-0.4f);
	glVertex2f(0.3f,-0.4f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.4f,-0.3f);
	glVertex2f(0.5f,-0.3f);
	glVertex2f(0.5f,-0.4f);
	glVertex2f(0.4f,-0.4f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.5f,-0.3f);
	glVertex2f(0.6f,-0.3f);
	glVertex2f(0.6f,-0.4f);
	glVertex2f(0.5f,-0.4f);
	
	//
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.6f,-0.4f);
	glVertex2f(-0.5f,-0.4f);
	glVertex2f(-0.5f,-0.5f);
	glVertex2f(-0.6f,-0.5f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau tua
	glVertex2f(-0.5f,-0.4f);
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.4f,-0.5f);
	glVertex2f(-0.5f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.3f,-0.4f);
	glVertex2f(-0.3f,-0.5f);
	glVertex2f(-0.4f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.3f,-0.4f);
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.2f,-0.5f);
	glVertex2f(-0.3f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.1f,-0.4f);
	glVertex2f(-0.1f,-0.5f);
	glVertex2f(-0.2f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.1f,-0.4f);
	glVertex2f(0.0f,-0.4f);
	glVertex2f(0.0f,-0.5f);
	glVertex2f(-0.1f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.0f,-0.4f);
	glVertex2f(0.1f,-0.4f);
	glVertex2f(0.1f,-0.5f);
	glVertex2f(0.0f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(0.1f,-0.4f);
	glVertex2f(0.2f,-0.4f);
	glVertex2f(0.2f,-0.5f);
	glVertex2f(0.1f,-0.5f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(0.2f,-0.4f);
	glVertex2f(0.3f,-0.4f);
	glVertex2f(0.3f,-0.5f);
	glVertex2f(0.2f,-0.5f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.3f,-0.4f);
	glVertex2f(0.4f,-0.4f);
	glVertex2f(0.4f,-0.5f);
	glVertex2f(0.3f,-0.5f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.4f,-0.4f);
	glVertex2f(0.5f,-0.4f);
	glVertex2f(0.5f,-0.5f);
	glVertex2f(0.4f,-0.5f);
	
	//
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.5f,-0.5f);
	glVertex2f(-0.4f,-0.5f);
	glVertex2f(-0.4f,-0.6f);
	glVertex2f(-0.5f,-0.6f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(-0.4f,-0.5f);
	glVertex2f(-0.3f,-0.5f);
	glVertex2f(-0.3f,-0.6f);
	glVertex2f(-0.4f,-0.6f);

	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(-0.3f,-0.5f);
	glVertex2f(-0.2f,-0.5f);
	glVertex2f(-0.2f,-0.6f);
	glVertex2f(-0.3f,-0.6f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(-0.2f,-0.5f);
	glVertex2f(-0.1f,-0.5f);
	glVertex2f(-0.1f,-0.6f);
	glVertex2f(-0.2f,-0.6f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(-0.1f,-0.5f);
	glVertex2f(0.0f,-0.5f);
	glVertex2f(0.0f,-0.6f);
	glVertex2f(-0.1f,-0.6f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(0.0f,-0.5f);
	glVertex2f(0.1f,-0.5f);
	glVertex2f(0.1f,-0.6f);
	glVertex2f(0.0f,-0.6f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau muda
	glVertex2f(0.1f,-0.5f);
	glVertex2f(0.2f,-0.5f);
	glVertex2f(0.2f,-0.6f);
	glVertex2f(0.1f,-0.6f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.2f,-0.5f);
	glVertex2f(0.3f,-0.5f);
	glVertex2f(0.3f,-0.6f);
	glVertex2f(0.2f,-0.6f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.3f,-0.5f);
	glVertex2f(0.4f,-0.5f);
	glVertex2f(0.4f,-0.6f);
	glVertex2f(0.3f,-0.6f);
	
	//
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.4f,-0.6f);
	glVertex2f(-0.3f,-0.6f);
	glVertex2f(-0.3f,-0.7f);
	glVertex2f(-0.4f,-0.7f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.3,-0.6f);
	glVertex2f(-0.2f,-0.6f);
	glVertex2f(-0.2f,-0.7f);
	glVertex2f(-0.3f,-0.7f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.2,-0.6f);
	glVertex2f(-0.1f,-0.6f);
	glVertex2f(-0.1f,-0.7f);
	glVertex2f(-0.2f,-0.7f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.1,-0.6f);
	glVertex2f(0.0f,-0.6f);
	glVertex2f(0.0f,-0.7f);
	glVertex2f(-0.1f,-0.7f);
//	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.0f,-0.6f);
	glVertex2f(0.1f,-0.6f);
	glVertex2f(0.1f,-0.7f);
	glVertex2f(0.0f,-0.7f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.1f,-0.6f);
	glVertex2f(0.2f,-0.6f);
	glVertex2f(0.2f,-0.7f);
	glVertex2f(0.1f,-0.7f);
	
	
	//hijau tua samping kanan
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.7f,0.3f);
	glVertex2f(0.75f,0.3f);
	glVertex2f(0.75f,0.2f);
	glVertex2f(0.7f,0.2f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.7f,0.2f);
	glVertex2f(0.75f,0.2f);
	glVertex2f(0.75f,0.1f);
	glVertex2f(0.7f,0.1f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.7f,0.1f);
	glVertex2f(0.75f,0.1f);
	glVertex2f(0.75f,0.0f);
	glVertex2f(0.7f,0.0f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.7f,0.0f);
	glVertex2f(0.75f,0.0f);
	glVertex2f(0.75f,-0.1f);
	glVertex2f(0.7f,-0.1f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.2f,-0.6f);
	glVertex2f(0.25f,-0.6f);
	glVertex2f(0.25f,-0.7f);
	glVertex2f(0.2f,-0.7f);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.6f,-0.3f);
	glVertex2f(0.65f,-0.3f);
	glVertex2f(0.65f,-0.2f);
	glVertex2f(0.6f,-0.2f);
	
	
	glEnd();
	glFlush();
}

void quadStrip(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUAD_STRIP);
	
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(-0.6f,-0.4f);
	glVertex2f(-0.6f,-0.5f);
	glVertex2f(-0.5f,-0.4f);
	glVertex2f(-0.5f,-0.5f);
	
	glColor3f(0.5,0.8f,0.0f); //hijau tua
	glVertex2f(-0.5f,-0.4f);
	glVertex2f(-0.5f,-0.5f);
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.4f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.4f,-0.4f);
	glVertex2f(-0.4f,-0.5f);
	glVertex2f(-0.3f,-0.4f);
	glVertex2f(-0.3f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.3f,-0.4f);
	glVertex2f(-0.3f,-0.5f);
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.2f,-0.5f);
	
	glColor3f(1.0,0.4f,0.4f); //pink
	glVertex2f(-0.2f,-0.4f);
	glVertex2f(-0.2f,-0.5f);
	glVertex2f(-0.1f,-0.4f);
	glVertex2f(-0.1f,-0.5f);
	
	glEnd();
	glFlush();

}
	

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(450,450);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("nomor 1");
	glutDisplayFunc(quadStrip);
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
