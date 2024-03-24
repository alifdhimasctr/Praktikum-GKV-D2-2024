/*
  Nama : Yusuf Zaenul Mustofa 
  NIM  : 24060122120021
  Lab  : GKV D2
  Membuat Gambar Menggunakan Kubus Bertingkat - 20/2/2024
*/

#include <GL/glut.h>

void Kotak(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //Baris 1
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.3, 0.35, -0.25, 0.3);
    glRectf(-0.25, 0.35, -0.2, 0.3);
    glRectf(-0.2, 0.35, -0.15, 0.3);
    glRectf(-0.15, 0.35, -0.1, 0.3);
    glRectf(-0.1, 0.35, -0.05, 0.3);
    glRectf(-0.05, 0.35, 0.0, 0.3);
    glRectf(0.0, 0.35, 0.05, 0.3);
    
    //Baris 2
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.4, 0.3, -0.35, 0.25);
    glRectf(-0.35, 0.3, -0.3, 0.25);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.3, 0.3, -0.25, 0.25);
    glRectf(-0.25, 0.3, -0.2, 0.25);
    glRectf(-0.2, 0.3, -0.15, 0.25);
    glRectf(-0.15, 0.3, -0.1, 0.25);
    glRectf(-0.1, 0.3, -0.05, 0.25);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.05, 0.3, -0.0, 0.25);
    
    //Baris 3
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.45, 0.25, -0.4, 0.2);
    glColor3f(0.86f, 0.82f, 0.32f);
    glRectf(-0.4, 0.25, -0.35, 0.2);
    glRectf(-0.35, 0.25, -0.3, 0.2);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.3, 0.25, -0.25, 0.2);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.25, 0.25, -0.2, 0.2);
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2, 0.25, -0.15, 0.2);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.15, 0.25, -0.1, 0.2);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.1, 0.25, -0.05, 0.2);
    
    //Baris 4
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.45, 0.2, -0.4, 0.15);
    glColor3f(0.86f, 0.82f, 0.32f);
    glRectf(-0.4, 0.2, -0.35, 0.15);
    glRectf(-0.35, 0.2, -0.3, 0.15);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.3, 0.2, -0.25, 0.15);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.25, 0.2, -0.2, 0.15);
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2, 0.2, -0.15, 0.15);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.15, 0.2, -0.1, 0.15);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.1, 0.2, -0.05, 0.15);
    
    //Baris 5
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.45, 0.15, -0.4, 0.1);
    glColor3f(0.86f, 0.82f, 0.32f);
    glRectf(-0.4, 0.15, -0.35, 0.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.35, 0.15, -0.3, 0.1);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.3, 0.15, -0.25, 0.1);
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.25, 0.15, -0.2, 0.1);
    glRectf(-0.2, 0.15, -0.15, 0.1);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.15, 0.15, -0.1, 0.1);
    glRectf(-0.1, 0.15, -0.05, 0.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.05, 0.15, 0.0, 0.1);
    glRectf(0.0, 0.15, 0.05, 0.1);
    glRectf(0.05, 0.15, 0.1, 0.1);
    glRectf(0.1, 0.15, 0.15, 0.1);
    glRectf(0.15, 0.15, 0.2, 0.1);
    
    //Baris 6
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.4, 0.1, -0.35, 0.05);
    glRectf(-0.3, 0.1, -0.25, 0.05);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.25, 0.1, -0.2, 0.05);
    glRectf(-0.2, 0.1, -0.15, 0.05);
    glRectf(-0.15, 0.1, -0.1, 0.05);
    glRectf(-0.1, 0.1, -0.05, 0.05);
    glRectf(-0.05, 0.1, 0.0, 0.05);
    glRectf(0.0, 0.1, 0.05, 0.05);
    glRectf(0.05, 0.1, 0.1, 0.05);
    glColor3f(0.41f, 0.28f, 0.85f);
    glRectf(0.1, 0.1, 0.15, 0.05);
    glRectf(0.15, 0.1, 0.2, 0.05);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.2, 0.1, 0.25, 0.05);
    
    //Baris 7
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.3, 0.05, -0.25, 0.0);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.25, 0.05, -0.2, 0.0);
    glRectf(-0.2, 0.05, -0.15, 0.0);
    glRectf(-0.15, 0.05, -0.1, 0.0);
    glRectf(-0.1, 0.05, -0.05, 0.0);
    glRectf(-0.05, 0.05, 0.0, 0.0);
    glRectf(0.0, 0.05, 0.05, 0.0);
    glColor3f(0.41f, 0.28f, 0.85f);
    glRectf(0.05, 0.05, 0.1, 0.0);
    glRectf(0.1, 0.05, 0.15, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.15, 0.05, 0.2, 0.0);
    glRectf(0.2, 0.05, 0.25, 0.0);
    glRectf(0.25, 0.05, 0.3, 0.0);
    glRectf(0.3, 0.05, 0.35, 0.0);
    glRectf(0.35, 0.05, 0.4, 0.0);
    glRectf(0.4, 0.05, 0.45, 0.0);
    
    //Baris 8
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.3, 0.0, -0.25, -0.05);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.25, 0.0, -0.2, -0.05);
    glRectf(-0.2, 0.0, -0.15, -0.05);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.15, 0.0, -0.1, -0.05);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.1, 0.0, -0.05, -0.05);
    glRectf(-0.05, 0.0, 0.0, -0.05);//
    glColor3f(0.41f, 0.28f, 0.85f);
    glRectf(0.0, 0.0, 0.05, -0.05);
    glRectf(0.05, 0.0, 0.1, -0.05);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(0.1, 0.0, 0.15, -0.05);
    glColor3f(0.41f, 0.28f, 0.85f);
    glRectf(0.15, 0.0, 0.2, -0.05);
    glRectf(0.2, 0.0, 0.25, -0.05);
    glRectf(0.25, 0.0, 0.3, -0.05);
    glRectf(0.3, 0.0, 0.35, -0.05);
    glRectf(0.35, 0.0, 0.4, -0.05);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.4, 0.0, 0.45, -0.05);
    
    //Baris 9
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.25, -0.05, -0.2, -0.1);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.2, -0.05, -0.15, -0.1);
    glRectf(-0.15, -0.05, -0.1, -0.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.1, -0.05, -0.05, -0.1);
    glRectf(-0.05, -0.05, 0.0, -0.1);
    glRectf(0.0, -0.05, 0.05, -0.1);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(0.05, -0.05, 0.1, -0.1);
    glColor3f(0.41f, 0.28f, 0.85f);
    glRectf(0.1, -0.05, 0.15, -0.1);
    glRectf(0.15, -0.05, 0.2, -0.1);
    glRectf(0.2, -0.05, 0.25, -0.1);
    glRectf(0.25, -0.05, 0.3, -0.1);
    glRectf(0.3, -0.05, 0.35, -0.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.35, -0.05, 0.4, -0.1);
    
    //Baris 10
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.2, -0.1, -0.15, -0.15);
    glColor3f(0.11f, 0.9f, 0.36f);
    glRectf(-0.15, -0.1, -0.1, -0.15);
    glRectf(-0.1, -0.1, -0.05, -0.15);
    glRectf(-0.05, -0.1, 0.0, -0.15);
    glRectf(0.0, -0.1, 0.05, -0.15);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.05, -0.1, 0.1, -0.15);
    glRectf(0.1, -0.1, 0.15, -0.15);
    glRectf(0.15, -0.1, 0.2, -0.15);
    glRectf(0.2, -0.1, 0.25, -0.15);
    glRectf(0.25, -0.1, 0.3, -0.15);
    glRectf(0.3, -0.1, 0.35, -0.15);
    
    //Baris 11
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.15, -0.15, -0.1, -0.2);
    glRectf(-0.1, -0.15, -0.05, -0.2);
    glRectf(-0.05, -0.15, 0.0, -0.2);
    glRectf(0.0, -0.15, 0.05, -0.2);
    
    //Baris 13
    glColor3f(0.86f, 0.82f, 0.32f);
    glRectf(-0.05, -0.2, 0.0, -0.25);
    
    //Baris 14
    glColor3f(0.86f, 0.82f, 0.32f);
    glRectf(-0.1, -0.25, -0.05, -0.3);
    glRectf(-0.05, -0.25, 0.0, -0.3);
    glRectf(0.0, -0.25, 0.05, -0.3);

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Parrot");
    glutDisplayFunc(Kotak);
    glClearColor(0.5f, 0.87f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
