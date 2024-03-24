/*
Nama Program	: bikinMOBIL
Pembuat			: Aditya Haidar Faishal
NIM				: 24060122120005
Tanggal			: 3 Maret 2024
Deskripsi		: Buatlah sebuah mobil 2D yang memanfaatkan object2 primitif dan transformasi (translasi dan rotasi). Penggunaan stack disarankan!
*/


#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>

float TireRotateAngle = 0.0f;

void init()
{
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}

void CarTire(int xx, int yy, float r)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(xx, yy, 0.0f);
    glRotatef(TireRotateAngle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-xx, -yy, 0.0f);

    glBegin(GL_POLYGON); 
    for (int i = 0; i < 200; i++)
    {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(xx - 0.075, yy);
    glVertex2f(xx + 0.075, yy);

    glVertex2f(xx - 0.05, yy - 0.075);
    glVertex2f(xx + 0.05, yy + 0.075);

    glVertex2f(xx + 0.05, yy - 0.075);
    glVertex2f(xx - 0.05, yy + 0.075);

    glVertex2f(xx, yy - 0.1);
    glVertex2f(xx, yy + 0.1);
    glEnd();

    glPopMatrix();
}

void ScaledTire()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(140.1, 95, 0);
    glScalef(80, 80, 0);
    glColor3ub(0, 0, 0);
    CarTire(0, 0, 0.2);
    glColor3ub(192, 192, 192);
    CarTire(0, 0, 0.13);
    glColor3ub(211, 211, 255);
    CarTire(0, 0, 0.09);
    glPopMatrix();
}

void CarBody()
{
    glColor3f(1.0f, 0.8f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(240, 127);
    glVertex2f(240, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 127);
    glVertex2f(130, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(255, 0, 0);
    glVertex2f(110, 92);
    glVertex2f(115, 92);
    glVertex2f(115, 117);
    glVertex2f(110, 117);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(0, 0, 0);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(120, 127);
    glVertex2f(130, 127);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(192, 192, 192);
    glVertex2f(170, 152);
    glVertex2f(165, 152);
    glVertex2f(165, 127);
    glVertex2f(170, 127);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(168, 169, 173);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(185, 157);
    glVertex2f(140, 157);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(168, 169, 173);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(185, 152);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(168, 169, 173);
    glVertex2f(140, 157);
    glVertex2f(115, 127);
    glVertex2f(125, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(168, 169, 173);
    glVertex2f(242, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 97);
    glVertex2f(242, 97);
    glEnd();

    glBegin(GL_POLYGON);      
    glColor3f(1.0f, 0.8f, 0.0f);

    glVertex2f(211.5, 134.5);
    glVertex2f(204.5, 135.5);
    glVertex2f(203.5, 129);
    glVertex2f(210.5, 127);
    glEnd();

    glBegin(GL_POLYGON);      
    glColor3f(1.0, 1.0, 0.0); 
    glVertex2f(210.5+28, 134.5-10);
    glVertex2f(203.5+28, 135.5-10);
    glVertex2f(203.5+28, 129-10);
    glVertex2f(210.5+28, 127-10);
    glEnd();

    glBegin(GL_POLYGON); 
    glColor3ub(192, 192, 192);
    glVertex2f(150-15-5, 127-5-3);
    glVertex2f(155-5-5, 127-5-3);
    glVertex2f(155-5-5, 129-5);
    glVertex2f(150-15-5, 129-5);
    glEnd();
    glBegin(GL_POLYGON); 
    glColor3ub(192, 192, 192);
    glVertex2f(150-15+40, 127-5-3);
    glVertex2f(155-5+40, 127-5-3);
    glVertex2f(155-5+40, 129-5);
    glVertex2f(150-15+40, 129-5);
    glEnd();
}

void AsepMobil()
{
    glBegin(GL_POLYGON);
    glColor3ub(168, 169, 173);
    glVertex2f(110, 92);
    glColor3ub(255, 255, 255);
    glVertex2f(00, 80);
    glVertex2f(00, 110);
    glColor3ub(0, 0, 0);
    glVertex2f(110, 97);
    glEnd();
}

void fullCar()
{
    AsepMobil();
    CarBody();
    ScaledTire();
    glPushMatrix();
    glTranslatef(65, 0, 0);
    ScaledTire();
    glPopMatrix();
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glClear(GL_COLOR_BUFFER_BIT);        
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
    glTranslatef(520.0f / 2.0f - (240.0f + 110.0f) / 2.0f, 400.0f / 2.0f - (152.0f + 92.0f) / 2.0f, 0.0f);// tengahin woilah
    fullCar();//display semua part mobil
    glFlush(); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);            
    glutInitWindowSize(1040, 800);    
    glutCreateWindow("kayanya sih taksi"); 
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(display);     
    glutMainLoop();               
    return 0;
}

