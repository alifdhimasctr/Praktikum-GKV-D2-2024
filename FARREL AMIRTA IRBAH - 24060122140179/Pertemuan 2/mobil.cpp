#include <GL/glut.h>
#include <cmath>

// Koordinat mobil
float carX = 400.0;
float carY = 200.0;
float carSpeed = 2.0;  // Kecepatan mobil

// Rotasi untuk roda
float wheelRotation = 0.0;

// Deklarasi fungsi
void init();
void drawSportsCar();
void drawCircle(float x, float y, float radius, float red, float green, float blue);
void display();
void update(int value);

// Inisialisasi
void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);  // Latar belakang warna putih
    gluOrtho2D(0, 800, 0, 600);
}

// Fungsi untuk menggambar mobil sport
void drawSportsCar() {
    // Translasi untuk mobil
    glPushMatrix();
    glTranslatef(carX, carY, 0.0);

    // Body mobil
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); // Warna merah
    glVertex2f(-100, 0);
    glVertex2f(100, 0);
    glVertex2f(80, 20);
    glVertex2f(-80, 20);
    glEnd();

    // Atap mobil
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.0, 0.0); // Warna merah tua
    glVertex2f(-50, 20);
    glVertex2f(50, 20);
    glVertex2f(30, 40);
    glVertex2f(-30, 40);
    glEnd();

    // Jendela mobil
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2); // Warna hitam
    glVertex2f(-40, 20);
    glVertex2f(40, 20);
    glVertex2f(30, 40);
    glVertex2f(-30, 40);
    glEnd();

    // Rotasi untuk roda kiri
    glPushMatrix();
    glTranslatef(-60, 0, 0.0);
    glRotatef(wheelRotation, 0.0, 0.0, 1.0);
    drawCircle(0, 0, 15, 0.0, 0.0, 0.0);  // Ban hitam
    drawCircle(0, 0, 10, 0.75, 0.75, 0.75);  // Velg silver
    glPopMatrix();

    // Rotasi untuk roda kanan
    glPushMatrix();
    glTranslatef(60, 0, 0.0);
    glRotatef(wheelRotation, 0.0, 0.0, 1.0);
    drawCircle(0, 0, 15, 0.0, 0.0, 0.0);  // Ban hitam
    drawCircle(0, 0, 10, 0.75, 0.75, 0.75);  // Velg silver
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

    drawSportsCar();

    glFlush();
}

// Fungsi untuk mengupdate dan merender ulang layar
void update(int value) {
    // Translasi untuk pergerakan mobil dari kiri ke kanan
    carX += carSpeed;

    // Jika mobil berada di luar layar, reset posisi ke kiri
    if (carX > 800) {
        carX = -100;
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
    glutCreateWindow("Mobil");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);  // Set timer untuk animasi
    glutMainLoop();
    
    return 0;
}

