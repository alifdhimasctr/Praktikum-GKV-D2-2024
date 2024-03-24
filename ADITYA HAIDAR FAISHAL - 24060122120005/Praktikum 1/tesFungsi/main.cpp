/*
Nama Program	: tesFungsi
Pembuat			: Aditya Haidar Faishal
NIM				: 24060122120005
Tanggal			: 22 Februari 2024
Deskripsi		: Membuat program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
				  GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
*/

#include <GL/glut.h>

void rumah() {
  glClear(GL_COLOR_BUFFER_BIT);


  // warna untuk atap luar
  glColor3f(0.8f, 0.0f, 0.0f); //merah pucet dikit

  // gambaar atap luar pake TRIANGLE_STRIP
  glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(0.65f, 0.4f);
  glEnd();
  
  
  // warna atap
   glColor3f(0.8f, 0.4f, 0.2f);
  
  // gmbar atap pake GL_TRIANGLE_FAN
  glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.8f);//ujung
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(0.55f, 0.4f);
  glEnd();


  // waarna dinding
  glColor3f(0.98f, 0.95f, 0.75f);

  //gambaar dinding depan pake GL_QUADS
  glBegin(GL_QUADS);
    glVertex2f(-0.5f, 0.4f);//kiri ataaas
    glVertex2f(-0.5f, -0.5f);//kiri baawah
    glVertex2f(0.5f, -0.5f);//kanan baawah
    glVertex2f(0.5f, 0.4f);//kanan atas
  glEnd();


  // warnaa pintu
  glColor3f(0.7f, 0.3f, 0.1f); 

  // gambar pintu pake  GL_QUAD_STRIP
  glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.13f, -0.5f);//kiri baaawah
    glVertex2f(-0.13f, -0.05f);//ki8ri ats
    glVertex2f(0.13f, -0.5f);//knan bwah
    glVertex2f(0.13f, -0.05f);//kanaan ats
  glEnd();



  // warnaa line jendela
  glColor3f(0.0f, 0.0f, 0.0f); // Cyan color

  // gambar jendela kiri pake GL_LINE_LOOP
  glBegin(GL_LINE_LOOP);
    glVertex2f(-0.42f, 0.3f);//kanan aatas
    glVertex2f(-0.42f, 0.1f);//kanan baaawah
    glVertex2f(-0.22f, 0.1f);//kiri bawah
    glVertex2f(-0.22f, 0.3f);//kiri atas
  glEnd();

  //gambaar jendelaa kanann GL_LINE_LOOP
  glBegin(GL_LINE_LOOP);
    glVertex2f(0.42f, 0.3f);//kanan aatas
    glVertex2f(0.42f, 0.1f);//kanan baaawah
    glVertex2f(0.22f, 0.1f);//kiri bawah
    glVertex2f(0.22f, 0.3f);//kiri atas
  glEnd();

  //warn line bot
  glColor3f(0.0f, 0.0f, 0.0f);//irenk

  // gambarv garis bottom pake GL_LINE_STRIP
  glBegin(GL_LINE_STRIP);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
  glEnd();

  glFlush();
}

void init() {
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
  glutInitWindowSize(500, 500);
  glutCreateWindow("bikin Rumah pake semua fungsi");
  glutDisplayFunc(rumah);
  init();
  glutMainLoop();
  return 0;
}

