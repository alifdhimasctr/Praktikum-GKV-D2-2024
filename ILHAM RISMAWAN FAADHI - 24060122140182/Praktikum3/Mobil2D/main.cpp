/* Program   : main.cpp */
/* Deskripsi : Tugas Praktikum 2 mobil 2D */
/* NIM/Nama  : 24060122140182 / Ilham Rismawan Faadhi*/
/* Tanggal   : 4 Maret 2024*/
/***********************************/
#include <GL/glut.h>

GLfloat carPosX = 0.0f;
GLfloat wheelAngle = 0.0f;

void drawCar() {
    glPushMatrix(); 
    glTranslatef(carPosX, 0.0f, 0.0f); 

    // Body mobil
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f); 
    
    glVertex3f(-0.3f, 0.3f, 0.0f); 
    glVertex3f(0.3f, 0.3f, 0.0f);  
    glVertex3f(0.6f, -0.2f, 0.0f); 
    glVertex3f(-0.6f, -0.2f, 0.0f); 
    
    glVertex3f(-0.6f, 0.1f, 0.0f); 
    glVertex3f(0.6f, 0.1f, 0.0f);  
    glVertex3f(0.6f, -0.2f, 0.0f); 
    glVertex3f(-0.6f, -0.2f, 0.0f); 

    glEnd();

    // Roda kiri
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix(); 
    glTranslatef(-0.4f, -0.2f, 0.0f); 
    glRotatef(wheelAngle, 0.0f, 0.0f, 1.0f); 
    glutSolidTorus(0.05, 0.1, 10, 10);
    glPopMatrix(); 

    // Roda kanan
    glPushMatrix(); 
    glTranslatef(0.4f, -0.2f, 0.0f); 
    glRotatef(wheelAngle, 0.0f, 0.0f, 1.0f); 
    glutSolidTorus(0.05, 0.1, 10, 10); 
    glPopMatrix(); 

    glPopMatrix(); 
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    drawCar();

    glutSwapBuffers();
}

void update(int value) {
    carPosX += 0.01f; // Pergi ke kanan
    wheelAngle -= 5.0f; // Ubah arah rotasi roda menjadi negatif
    if (carPosX > 1.5f) {
        carPosX = -1.5f; // Reset posisi mobil
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("2D Car");
    glutReshapeWindow(1080, 1080);

    gluOrtho2D(-2.0, 2.0, -1.0, 1.5); // Set tampilan orthografis

    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set warna clear ke putih

    glutMainLoop();

    return 0;
}
