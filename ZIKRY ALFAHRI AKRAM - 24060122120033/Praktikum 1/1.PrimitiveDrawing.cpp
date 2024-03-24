/*
	Nama		: Zikry Alfahri Akram
	NIM			: 24060122120033
	Tanggal		: Selasa, 20 Februari 2024
	Deskripsi	: Tugas Pertemuan 1 Nomor 2 Primitive Drawing
*/

#include <gl/glut.h> 

void PrimitiveDrawing (void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	// GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.6f, 0.9f);
    glVertex2f(-0.6f, 0.3f);
    glEnd();

    // GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(0.1f, 0.6f);
    glEnd();

    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.9f, 0.0f);
    glVertex2f(0.5f, 0.9f);
    glColor3f(0.1f, 0.0f, 0.0f);
    glVertex2f(0.3f, 0.6f);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.3f);
    glColor3f(0.0f, 0.0f, 0.3f);
    glVertex2f(0.6f, 0.3f);
    glColor3f(0.0f, 0.0f, 0.1f);
    glVertex2f(0.7f, 0.6f);
    glEnd();

    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.5f, 0.5f, 0.0f);
    glVertex2f(-0.8f, 0.1f);
    glColor3f(0.4f, 0.1f, 0.0f);
    glVertex2f(-0.65f, -0.3f);
    glColor3f(0.1f, 0.3f, 0.1f);
    glVertex2f(-0.5f, 0.0f);
    glColor3f(0.0f, 0.7f, 0.2f);
    glVertex2f(-0.35f, -0.3f);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.2f, 0.1f);
    glEnd();

    // GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.1f, -0.1f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.3f, -0.3f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.6f, 0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.5f, 0.2f);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f(-0.2f, -0.9f);
    glColor3f(0.8f, 0.5f, 0.0f);
    glVertex2f(-0.05f, -0.6f);
    glVertex2f(-0.05f, -0.7f);
    glColor3f(0.8f, 0.5f, 0.0f);
    glVertex2f(0.05f, -0.6f);
    glVertex2f(0.05f, -0.7f);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.9f);
    glEnd();
	
	glFlush();
}

int main (int argc, char* argv[])
{
    glutInit(&argc, argv);
	glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Primitive Drawing");
	glutDisplayFunc(PrimitiveDrawing);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glutMainLoop();
	return 0;
}
