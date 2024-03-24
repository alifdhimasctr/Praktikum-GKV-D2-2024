#include <gl/glut.h>

void myInit(void) {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void triangleFan(void) {
	// Sayap Bawah Kanan
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.65, 0.45, 0.0);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.15f);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.2f, -0.2f);
	glEnd();
	
	// Sayap Bawah Kiri
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.65, 0.45, 0.0);
	glVertex2f(-0.0f, 0.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.15f);
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.2f, -0.2f);
	glEnd();
	
	// Sayap Atas Kanan
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.85, 0.75, 0.0);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.45f, 0.3f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.1f, -0.05f);
	glEnd();
	
	// Sayap Atas Kiri
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.45f, 0.3f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.1f, -0.05f);
	glEnd();
	
	// Ekor Kanan
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.15f, -0.3f);
	glVertex2f(0.1, -0.4f);
	glVertex2f(0.0, -0.42f);
	glEnd();
	
	// Ekor Kiri
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.15f, -0.3f);
	glVertex2f(-0.1, -0.4f);
	glVertex2f(-0.0, -0.42f);
	glEnd();
	
	// Kepala
	glPointSize(25);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.025f, 0.15f);
	glVertex2f(0.05f, 0.1f);
	glVertex2f(0.025f, 0.05f);
	glVertex2f(0.0f, 0.05f);
	glVertex2f(-0.0f, 0.1f);
	glVertex2f(-0.0f, 0.15f);
	glVertex2f(-0.025f, 0.15f);
	glVertex2f(-0.05f, 0.1f);
	glVertex2f(-0.025f, 0.05f);
	glVertex2f(-0.0f, 0.05f);
	glEnd();
}

void triangleStrip(void) {
//	glBegin(GL_POINTS);
	
	// right diamond
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.45, 0.45, 1.0);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.65f, 0.55f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.65f, 0.55f);
	glVertex2f(0.7f, 0.7f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.45, 0.45, 1.0);
	glVertex2f(0.95f, 0.0f);
	glVertex2f(0.8f, 0.07f);
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.8f, -0.07f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(0.95f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.8f, -0.07f);
	glVertex2f(0.95f, 0.0f);
	glEnd();
		
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.65f, 0.55f);
	glVertex2f(0.7f, 0.7f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.45, 0.45, 1.0);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.55f, -0.65f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.55f, -0.65f);
	glVertex2f(0.7f, -0.7f);
	glEnd();
	
	// left diamond
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.45, 0.45, 1.0);
	glVertex2f(-0.70f, 0.7f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.50f, 0.5f);
	glVertex2f(-0.65f, 0.55f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.6f, 0.6f);
	glVertex2f(-0.65f, 0.55f);
	glVertex2f(-0.7f, 0.7f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.45, 0.45, 1.0);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-0.85f, 0.07f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.85f, -0.07f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.85f, -0.07f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.45, 0.45, 1.0);
	glVertex2f(-0.7f, -0.7f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.55f, -0.65f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.35, 0.35, 1.0);
	glVertex2f(-0.7f, -0.7f);
	glVertex2f(-0.6f, -0.6f);
	glVertex2f(-0.55f, -0.65f);
	glVertex2f(-0.7f, -0.7f);
	glEnd();
	
}

void quadStrip(void){
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.2,0.4f,0.0f); //hijau tua
	glVertex2f(0.0f, -0.65f);
	glVertex2f(-0.4f,-0.7f);
	glVertex2f(0.4f,-0.7f);
	glVertex2f(-0.4f,-0.8f);
	glVertex2f(0.4f,-0.8f);
	glVertex2f(0.0f,-0.9f);
	glEnd();
}

void lineStrip(void) {
	glBegin(GL_LINE_STRIP);
	glColor3f(0.9,0.9f,0.5f); //hijau muda
	glVertex2f(-0.4f, -0.7f);
	glVertex2f(0.4f, -0.8f);
	glVertex2f(0.0f, -0.825f);
	glVertex2f(-0.4f, -0.8f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(-0.4f, -0.7f);
	glEnd();
}

void quad(void) {
	glPointSize(5);
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.9, 0.9);
	glVertex2f(0.025f, 0.025f);
	glVertex2f(-0.025f, 0.025f);
	glVertex2f(-0.025f, -0.025f);
	glVertex2f(0.025f, -0.025f);
	glEnd();
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	quadStrip();
	lineStrip();
	triangleFan();
	triangleStrip();
	quad();
	
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc ,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("TES");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}
