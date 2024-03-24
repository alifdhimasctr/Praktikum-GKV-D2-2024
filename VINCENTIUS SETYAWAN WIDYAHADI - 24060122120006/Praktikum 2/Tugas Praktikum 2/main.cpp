/*
Nama		: Vincentius Setyawan Widyahadi
NIM			: 24060122120006
Tanggal		: Senin, 04 - 03 - 2024
Deskripsi	: Membuat Mobil 2D dengan memanfaatkan transformasi dan menggunakan stack
*/
#include <GL/gl.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void drawCar()
{
    // Body Mobil
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON); 
	glVertex2d(30, 120);
    glVertex2d(330, 120);
    glVertex2d(345, 140);
    glVertex2d(345, 160);
    glVertex2d(340, 160);
    glVertex2d(340, 175);
    glVertex2d(330, 200);
    glVertex2d(315, 200);
	glVertex2d(270, 245);
    glVertex2d(150, 245);
    glVertex2d(100, 200);
    glVertex2d(40, 180);
    glVertex2d(30, 170);
    glVertex2d(25, 160);
    glVertex2d(25, 140);   
    glEnd();
    
    //Black livery
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); 
	glVertex2d(30, 120);
    glVertex2d(330, 120);
    glVertex2d(345, 140);
    glVertex2d(345, 154);
    glVertex2d(25, 154);
    glVertex2d(25, 140);   
    glEnd();
    
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); 
	glVertex2d(28, 168);
	glVertex2d(25, 160);
	glVertex2d(340, 160);
    glVertex2d(340, 168);  
    glEnd();
    
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); 
    glVertex2d(208, 190);
    glVertex2d(204, 185);
    glVertex2d(195, 185);
    glVertex2d(190, 190);
    glEnd();
    
    //lampu depan
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON); 
	glVertex2d(30, 190);
	glVertex2d(30, 170);
	glVertex2d(40, 180);
    glVertex2d(35, 190);  
    glEnd();

    // Jendela
    glColor3ub(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2d(110, 200);
    glVertex2d(210, 200);
    glVertex2d(208, 240);
    glVertex2d(150, 240);
    glEnd();
    
    glColor3ub(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2d(217, 200);
    glVertex2d(310, 200);
    glVertex2d(270, 240);
    glVertex2d(215, 240);
    glEnd();

    // Roda kiri depan
    glPushMatrix();
    glTranslatef(75, 120, 0);
    glColor3ub(0, 0, 0);
    circle(30, 40, 0, 0); // Roda besar
    glColor3ub(192, 192, 192);
    circle(20, 25, 0, 0); // Roda kecil
    glPopMatrix();

    // Roda kanan depan
    glPushMatrix();
    glTranslatef(270, 120, 0);
    glColor3ub(0, 0, 0);
    circle(30, 40, 0, 0); // Roda besar
    glColor3ub(192, 192, 192);
    circle(20, 25, 0, 0); // Roda kecil
    glPopMatrix();
}

void init(void)
{
    glClearColor(0.5, 0.5, 0.5, 0.5);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 400, 0, 400);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Mobil
    drawCar();

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Vincent - Toyota AE 86 Trueno");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

