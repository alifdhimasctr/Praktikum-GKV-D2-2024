#include <GL/glut.h>
#include <cmath>

// Koordinat mobil
float carX = 400.0;
float carY = 200.0;
float carSpeed = 15.0;  // Kecepatan mobil

// Rotasi untuk roda
float wheelRotation = 0.0;

// Deklarasi fungsi
void init();
void drawSedanBodyCar();
void drawCircle(float x, float y, float radius, float red, float green, float blue);
void display();
void update(int value);

// Inisialisasi
void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);  // Background warna putih
    gluOrtho2D(0, 800, 0, 600);
}

// Fungsi untuk menggambar mobil
void drawSedanBodyCar() {
    // Translasi untuk mobil
    glPushMatrix();
    glTranslatef(carX, carY, 0.0);

    // Trapesium (body)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);  // Warna abu-abu
    glVertex2f(-170, 5);
    glVertex2f(180, 5);
    glVertex2f(90, 30);
    glVertex2f(-170, 30);
    glEnd();

    // Persegi panjang (body)
    glColor3f(0.6, 0.6, 0.6);  // Warna abu-abu tua
    glBegin(GL_QUADS);
    glVertex2f(-170, 5);
    glVertex2f(180, 5);
    glVertex2f(180, -15);
    glVertex2f(-170, -15);
    glEnd();
    
	// Spoiler (body)    
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);  // Warna abu-abu
    glVertex2f(-170, 30);
    glVertex2f(-145, 30);
    glVertex2f(-155, 45);
    glVertex2f(-170, 45);
    glEnd();

    // Atap (abu-abu)
    glBegin(GL_QUADS);
    glVertex2f(-140, 30);
    glVertex2f(90, 30);
    glVertex2f(50, 70);
    glVertex2f(-80, 65);
    glEnd();

    // Jendela (hitam)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-110, 30);
    glVertex2f(75, 30);
    glVertex2f(45, 60);
    glVertex2f(-60, 55);
    glEnd();

    // Rotasi untuk roda kiri
    glPushMatrix();
    glTranslatef(-100, -15, 0.0);
    glRotatef(wheelRotation, 0.0, 0.0, 1.0);
    drawCircle(0, 0, 30, 0.0, 0.0, 0.0);  // Ban hitam
    drawCircle(0, 0, 20, 0.75, 0.75, 0.75);  // Velg silver
    glPopMatrix();

    // Rotasi untuk roda kanan
    glPushMatrix();
    glTranslatef(100, -15, 0.0);
    glRotatef(wheelRotation, 0.0, 0.0, 1.0);
    drawCircle(0, 0, 30, 0.0, 0.0, 0.0);  // Ban hitam
    drawCircle(0, 0, 20, 0.75, 0.75, 0.75);  // Velg silver
    glPopMatrix();

    glPopMatrix();  // Pop translasi mobil
}

// Fungsi untuk menggambar lingkaran (roda)
void drawCircle(float x, float y, float radius, float red, float green, float blue) {
    const int sides = 100;

    glColor3f(red, green, blue);
    glBegin(GL_POLYGON);
    for (int i = 0; i < sides; ++i) {
        float theta = 2.0 * M_PI * i / sides;
        float cx = x + radius * cos(theta);
        float cy = y + radius * sin(theta);
        glVertex2f(cx, cy);
    }
    glEnd();
}

// Fungsi display
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawSedanBodyCar();

    glFlush();
}

// Fungsi untuk mengupdate dan merender ulang layar
void update(int value) {
    // Translasi untuk pergerakan mobil dari kiri ke kanan
    carX += carSpeed;

    // Jika mobil berada di luar layar, reset posisi ke kiri
    if (carX > 800) {
        carX = -170;
    }

    // Rotasi untuk animasi roda
    wheelRotation += 5.0;
    if (wheelRotation > 360.0) {
        wheelRotation -= 360.0;
    }

    glutPostRedisplay();
    glutTimerFunc(30, update, 0);
}

// Main program
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Mobil dengan Translasi dan Rotasi");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);  // Set timer untuk animasi
    glutMainLoop();

    return 0;
}

