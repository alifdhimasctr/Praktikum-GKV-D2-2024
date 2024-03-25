/* Permission is hereby granted, free of charge, to any person
obtaining a copy
* of this software and associated documentation files (the
"Software"), to deal
* in the Software without restriction, including without limitation
the rights
* to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell
* copies of the Software, and to permit persons to whom the
Software is
* furnished to do so, subject to the following conditions:
*
* The above notice and this permission notice shall be included in
all copies
* or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE
* SOFTWARE.
*/
/* File for "Putting It All Together" lesson of the OpenGL tutorial
on
* www.videotutorialsrock.com
*/
#ifndef IMAGE_LOADER_H_INCLUDED
#define IMAGE_LOADER_H_INCLUDED
//Represents an image
class Image {
public:
Image(char* ps, int w, int h);
~Image();
/* An array of the form (R1, G1, B1, R2, G2, B2, ...)
indicating the
* color of each pixel in image. Color components range
from 0 to 255.
* The array starts the bottom-left pixel, then moves
right to the end
* of the row, then moves up to the next column, and so
on. This is the
* format in which OpenGL likes images.
*/
char* pixels;
int width;
int height;
};
//Reads a bitmap image from file.
Image* loadBMP(const char* filename);
#endif
Main.cpp
#include <iostream>
#include <stdlib.h>
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "imageloader.h"
#include "imageloader.cpp"
using namespace std;
const float BOX_SIZE = 7.0f; //Panjang tiap sisi kubus
float _angle = 0; //Rotasi terhadap box
GLuint _textureId; //ID OpenGL untuk tekstur
void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
case 27: //Tekan Escape untuk EXIT
exit(0);
}
}
//Membuat gambar menjadi tekstur kemudian berikan ID pada tekstur
GLuint loadTexture(Image* image) {
GLuint textureId;
glGenTextures(1, &textureId);
glBindTexture(GL_TEXTURE_2D, textureId);
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image->width, image-
>height, 0, GL_RGB, GL_UNSIGNED_BYTE, image->pixels);
return textureId;
}
void initRendering() {
glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_NORMALIZE);
glEnable(GL_COLOR_MATERIAL);
Image* image = loadBMP("bg.bmp");
_textureId = loadTexture(image);
delete image;
}
void handleResize(int w, int h) {
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0, (float)w / (float)h, 1.0, 200.0);
}
void drawScene() {
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glTranslatef(0.0f, 0.0f, -20.0f);
GLfloat ambientLight[] = {0.3f, 0.3f, 0.3f, 1.0f};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
GLfloat lightColor[] = {0.7f, 0.7f, 0.7f, 1.0f};
GLfloat lightPos[] = {-2 * BOX_SIZE, BOX_SIZE, 4 * BOX_SIZE,
1.0f};
glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor);
glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
glRotatef(-_angle, 1.0f, 1.0f, 0.0f);
glBegin(GL_QUADS);
//Sisi atas
glColor3f(1.0f, 1.0f, 0.0f);
glNormal3f(0.0, 1.0f, 0.0f);
glVertex3f(-BOX_SIZE / 2, BOX_SIZE / 2, -BOX_SIZE / 2);
glVertex3f(-BOX_SIZE / 2, BOX_SIZE / 2, BOX_SIZE / 2);
glVertex3f(BOX_SIZE / 2, BOX_SIZE / 2, BOX_SIZE / 2);
glVertex3f(BOX_SIZE / 2, BOX_SIZE / 2, -BOX_SIZE / 2);
//Sisi bawah
glColor3f(1.0f, 0.0f, 1.0f);
glNormal3f(0.0, -1.0f, 0.0f);
glVertex3f(-BOX_SIZE / 2, -BOX_SIZE / 2, -BOX_SIZE / 2);
glVertex3f(BOX_SIZE / 2, -BOX_SIZE / 2, -BOX_SIZE / 2);
glVertex3f(BOX_SIZE / 2, -BOX_SIZE / 2, BOX_SIZE / 2);
glVertex3f(-BOX_SIZE / 2, -BOX_SIZE / 2, BOX_SIZE / 2);
//Sisi kiri
glNormal3f(-1.0, 0.0f, 0.0f);
glColor3f(0.0f, 1.0f, 1.0f);
glVertex3f(-BOX_SIZE / 2, -BOX_SIZE / 2, -BOX_SIZE / 2);
glVertex3f(-BOX_SIZE / 2, -BOX_SIZE / 2, BOX_SIZE / 2);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex3f(-BOX_SIZE / 2, BOX_SIZE / 2, BOX_SIZE / 2);
glVertex3f(-BOX_SIZE / 2, BOX_SIZE / 2, -BOX_SIZE / 2);
//Sisi kanan
glNormal3f(1.0, 0.0f, 0.0f);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex3f(BOX_SIZE / 2, -BOX_SIZE / 2, -BOX_SIZE / 2);
glVertex3f(BOX_SIZE / 2, BOX_SIZE / 2, -BOX_SIZE / 2);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex3f(BOX_SIZE / 2, BOX_SIZE / 2, BOX_SIZE / 2);
glVertex3f(BOX_SIZE / 2, -BOX_SIZE / 2, BOX_SIZE / 2);
glEnd();
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, _textureId);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
GL_LINEAR);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
GL_LINEAR);
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_QUADS);
//Sisi depan
glNormal3f(0.0, 0.0f, 1.0f);
glTexCoord2f(0.0f, 0.0f);
glVertex3f(-BOX_SIZE / 2, -BOX_SIZE / 2, BOX_SIZE / 2);
glTexCoord2f(1.0f, 0.0f);
glVertex3f(BOX_SIZE / 2, -BOX_SIZE / 2, BOX_SIZE / 2);
glTexCoord2f(1.0f, 1.0f);
glVertex3f(BOX_SIZE / 2, BOX_SIZE / 2, BOX_SIZE / 2);
glTexCoord2f(0.0f, 1.0f);
glVertex3f(-BOX_SIZE / 2, BOX_SIZE / 2, BOX_SIZE / 2);
//Sisi belakang
glNormal3f(0.0, 0.0f, -1.0f);
glTexCoord2f(0.0f, 0.0f);
glVertex3f(-BOX_SIZE / 2, -BOX_SIZE / 2, -BOX_SIZE / 2);
glTexCoord2f(1.0f, 0.0f);
glVertex3f(-BOX_SIZE / 2, BOX_SIZE / 2, -BOX_SIZE / 2);
glTexCoord2f(1.0f, 1.0f);
glVertex3f(BOX_SIZE / 2, BOX_SIZE / 2, -BOX_SIZE / 2);
glTexCoord2f(0.0f, 1.0f);
glVertex3f(BOX_SIZE / 2, -BOX_SIZE / 2, -BOX_SIZE / 2);
glEnd();
glDisable(GL_TEXTURE_2D);
glutSwapBuffers();
}
//Panggil setiap 25ms
void update(int value) {
_angle += 1.0f;
if (_angle > 360) {
_angle -= 360;
}
glutPostRedisplay();
glutTimerFunc(25, update, 0);
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(400, 400);
glutCreateWindow("Texture With Image");
initRendering();
glutDisplayFunc(drawScene);
glutKeyboardFunc(handleKeypress);
glutReshapeFunc(handleResize);
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}
