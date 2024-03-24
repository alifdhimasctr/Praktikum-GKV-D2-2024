/* Program   : main.cpp */
/* Deskripsi : Tugas Praktikum 2 Lingkaran */
/* NIM/Nama  : 24060122140182 / Ilham Rismawan Faadhi*/
/* Tanggal   : 4 Maret 2024*/
/***********************************/
#include<gl/glut.h>
#include<gl/gl.h>
#include<math.h>

#define PI 3.1415926535898
#define circle_points 100


void RenderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.00, 0.20, 0.0);
    glVertex3f(0.00, -0.20, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glPointSize(5.0f);
    glTranslatef(0.35, 0.35, 0.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.25, 0.25, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.50, 0.50, 0.00);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.05, -0.05, 0.00);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.15, -0.05, 0.00);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.05, 0.05, 0.00);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.15, 0.05, 0.00);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_LINE_LOOP);
    int i;
    float angle;
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex3f(cos(angle), sin(angle), 0.0);
    }
    glEnd();
    glPopMatrix();

    glFlush();
}

void SegiEmpat(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(-0.50,0.50,0);
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.18,0.18,0.18,-0.18);
	glFlush();
}

void Segitiga(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(0.25,-0.25,0);
	glRotated(60.0,0.0,0.0,1.0);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f,0.0f,0.0f);
	glColor3f(0.0f,1.0f,0.0f);
	glColor3f(0.0f,0.0f,1.0f);
	
	glVertex3f(-0.05,-0.05,0.00);
	glVertex3f(0.15,-0.15,0.00);
	glVertex3f(-0.15,0.15,0.00);
	glEnd();
	glFlush();
}
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(720, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Simple");
    glutDisplayFunc(RenderScene);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
