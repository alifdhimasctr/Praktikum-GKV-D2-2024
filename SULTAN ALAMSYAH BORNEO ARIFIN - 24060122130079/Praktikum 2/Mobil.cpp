/*
Nama: Sultan Alamsyah Borneo Arifin
NIM: 24060122130079
Lab: D2
Tanggal: 3 Maret 2024
Nomor 1 - 2
*/

#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535898

void roda(float radius_luar, float radius_dalam, int spoke) {
    // Gambar lapisan luar (hitam)
    glColor3f(0.0f, 0.0f, 0.0f); // Warna luar roda (hitam)
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);
    for (int i = 0; i <= 360; i++) {
        float angle = i * PI / 180;
        glVertex2f(radius_luar * cos(angle), radius_luar * sin(angle));
    }
    glEnd();

    // Gambar lapisan dalam (putih)
    glColor3f(1.0f, 1.0f, 1.0f); // Warna dalam roda (putih)
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f); // Pusat lingkaran
    for (int i = 0; i <= 360; i++) {
        float angle = i * PI / 180;
        glVertex2f(radius_dalam * cos(angle), radius_dalam * sin(angle));
    }
    glEnd();

    // Gambar spoke
    glColor3f(0.0f, 0.0f, 0.0f); // Warna spokes (abu - abu)
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    for (int i = 0; i < spoke; ++i) {
        glVertex2f(0.0f, 0.0f);
        float angle = i * (360.0f / spoke) * PI / 180;
        //glVertex2f(outer_radius * cos(angle), outer_radius * sin(angle));
        glVertex2f(radius_dalam * cos(angle), radius_dalam * sin(angle));
    }
    glEnd();

}

void rangkamobilbawah(float radius) {
    // Gambar lapisan dalam (putih)
    glColor3f(1.0f, 1.0f, 1.0f); // Warna dalam roda (putih)
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f); // Pusat lingkaran
    for (int i = 0; i <= 180; i++) {
        float angle = i * PI / 180;
        glVertex2f(radius * cos(angle), radius * sin(angle));
    }
    glEnd();
}

void rangkamobil() {
    // Badan mobil
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.8f); // Warna biru
    glBegin(GL_POLYGON);
    glVertex2f(-0.68f, -0.1f); // (kiri bawah)
    glVertex2f(-0.685f, -0.098f);
    glVertex2f(-0.69f, -0.09f);
    glVertex2f(-0.7f, -0.0873f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.695f, 0.487f);
    glVertex2f(-0.69f, 0.49f);
    glVertex2f(-0.685f, 0.498f);
    glVertex2f(-0.68f, 0.5f);  // (kiri atas)
    glVertex2f(0.2f, 0.5f);  // (kanan atas)
    glVertex2f(0.35f, 0.25f);
    glVertex2f(0.7f, 0.23f);
    glVertex2f(0.75f, -0.1f); // (kanan bawah)
    glEnd();

    //JendelaDepan
    glColor3f(0.1f, 0.1f, 0.1f); // Warna abu - abu
    glBegin(GL_POLYGON);
    glVertex2f(-0.2f, 0.25f); // (kiri bawah)
    glVertex2f(-0.2f, 0.45f); // (kiri atas)
    glVertex2f(0.2f, 0.45f); // (kanan atas)
    glVertex2f(0.32f, 0.25f); // (kanan bawah)
    glEnd();

    //JendelaBelakang
    glColor3f(0.1f, 0.1f, 0.1f); // Warna abu - abu
    glBegin(GL_POLYGON);
    glVertex2f(-0.65f, 0.25f); // (kiri bawah)
    glVertex2f(-0.65f, 0.45f); // (kiri atas)
    glVertex2f(-0.23f, 0.45f); // (kanan atas)
    glVertex2f(-0.23f, 0.25f); // (kanan bawah)
    glEnd();

    //LampuDepan
    glColor3f(0.5f, 0.5f, 0.5f); // Warna abu - abu
    glBegin(GL_POLYGON);
    glVertex2f(0.7f, 0.0f); // (kiri bawah)
    glVertex2f(0.67f, 0.2f); // (kiri atas)
    glVertex2f(0.7f, 0.2f); // (kanan atas)
    glVertex2f(0.73f, 0.0f); // (kanan bawah)
    glEnd();

    //LampuBelakang
    glColor3f(1.0f, 0.0f, 0.0f); // Warna merah
    glBegin(GL_POLYGON);
    glVertex2f(-0.7f, 0.0f); // (kiri bawah)
    glVertex2f(-0.7f, 0.2f); // (kiri atas)
    glVertex2f(-0.67f, 0.2f); // (kanan atas)
    glVertex2f(-0.67f, 0.0f); // (kanan bawah)
    glEnd();

    //DetailBawah
    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glBegin(GL_POLYGON);
    glVertex2f(-0.28f, -0.15f); // (kiri bawah)
    glVertex2f(-0.28f, -0.1f); // (kiri atas)
    glVertex2f(0.28f, -0.1f); // (kanan atas)
    glVertex2f(0.28f, -0.15f); // (kanan bawah)
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glBegin(GL_POLYGON);
    glVertex2f(0.5f, -0.15f); // (kiri bawah)
    glVertex2f(0.5f, -0.1f); // (kiri atas)
    glVertex2f(0.75f, -0.1f); // (kanan atas)
    glVertex2f(0.75f, -0.15f); // (kanan bawah)
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glBegin(GL_POLYGON);
    glVertex2f(-0.68f, -0.15f); // (kiri bawah)
    glVertex2f(-0.68f, -0.1f); // (kiri atas)
    glVertex2f(-0.48f, -0.1f); // (kanan atas)
    glVertex2f(-0.48f, -0.15f); // (kanan bawah)
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glBegin(GL_POLYGON);
    glVertex2f(-0.7f, -0.15f); // (kiri bawah)
    glVertex2f(-0.7f, -0.0873f); // (kiri atas)
    glVertex2f(-0.68f, -0.1f); // (kanan atas)
    glVertex2f(-0.68f, -0.15f); // (kanan bawah)
    glEnd();

    //GagangPintu
    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glBegin(GL_POLYGON);
    glVertex2f(-0.2f, 0.18f); // (kiri bawah)
    glVertex2f(-0.2f, 0.2f); // (kiri atas)
    glVertex2f(-0.15f, 0.2f); // (kanan atas)
    glVertex2f(-0.15f, 0.18f); // (kanan bawah)
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glBegin(GL_POLYGON);
    glVertex2f(-0.65f, 0.18f); // (kiri bawah)
    glVertex2f(-0.65f, 0.2f); // (kiri atas)
    glVertex2f(-0.60f, 0.2f); // (kanan atas)
    glVertex2f(-0.60f, 0.18f); // (kanan bawah)
    glEnd();
}


void Mobilku(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    rangkamobil();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.45f, -0.18f, 0.0f);
    rangkamobilbawah(0.19f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.45f, -0.18f, 0.0f);
    rangkamobilbawah(0.19f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.45f, -0.2f, 0.0f);
    roda(0.18f, 0.1f, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.45f, -0.2f, 0.0f);
    roda(0.18f, 0.1f, 10);
    glPopMatrix();

    glFlush();

}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil");
    glutDisplayFunc(Mobilku);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glutMainLoop();
    return 0;
}