///*
//  File : soal2.cpp	26/2/2024
//  Penulis : Alwey Hakim
//  Deskripsi : Source code untuk praktikum 1, tugas ke-2
// */
//
//#include <GL/glut.h>
//
//void soal2(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    // LINE_STRIP
//    glBegin(GL_LINE_STRIP); // Tangan kiri (memegang pesawat terbang)
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(0.17, 0.4, 0);
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(0.3, 0.4, 0);
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(0.4, 0.6, 0);
//    
//    glEnd();
//    
//    glBegin(GL_LINE_STRIP); // Tangan kanan
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(-0.17, 0.4, 0);
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(-0.25, 0.4, 0);
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(-0.3, 0.1, 0);
//    
//    glEnd();
//    
//    // LINE_LOOP
//    glBegin(GL_LINE_LOOP); // Kepala
//    
//    glColor3f(0.255,0.172, 0.130);
//    glVertex3f(-0.1, 0.7, 0);
//
//	glColor3f(0.255,0.172, 0.130);
//    glVertex3f(-0.1, 0.55, 0);
//
//	glColor3f(0.255,0.172, 0.130);
//    glVertex3f(0.0, 0.5, 0);
//
//	glColor3f(0.255,0.172, 0.130);
//    glVertex3f(0.1, 0.55, 0);
//
//	glColor3f(0.255,0.172, 0.130);
//    glVertex3f(0.1, 0.7, 0);
//	
//    glEnd();
//    
//    // TRIANGLE_FAN
//    glBegin(GL_TRIANGLE_FAN); // Pesawat kertas
//    
//    glColor3f(1,1,1);
//    glVertex3f(0.6, 0.6, 0);
//    
//    glColor3f(0.001, 0.05, 0.05);
//    glVertex3f(0.4, 0.6, 0);
//    
//    glColor3f(1,1,1);
//    glVertex3f(0.4, 0.7, 0);
//    
//    glColor3f(1, 1, 1);
//    glVertex3f(0.37, 0.65, 0);
//    
//    glEnd();
//    
//    // TRIANGLE_STRIP
//    glBegin(GL_TRIANGLE_STRIP);
//    
//	glColor3f(0.1,0.05,0.03);
//    glVertex3f(-0.15, -0.25, 0);
//	
//	glColor3f(0.1,0.05,0.03);
//    glVertex3f(0.0, -0.2, 0);
//	
//	glColor3f(0.1,0.05,0.03);
//    glVertex3f(0.0, -1.3, 0);
//	
//	glColor3f(0.1,0.05,0.03);
//    glVertex3f(0.15, -0.25, 0);
//    
//    glEnd();
//    
//    // QUADS
//    glBegin(GL_QUADS); // Torso
//    
//    glColor3f(0.1,0.1,0.3);
//    glVertex3f(0.2, 0.5, 0);
//
//	glColor3f(0.1,0.1,0.3);
//    glVertex3f(-0.2, 0.5, 0);
//
//	glColor3f(0.1,0.1,0.3);
//    glVertex3f(-0.1, -0.2, 0);
//	
//	glColor3f(0.1,0.1,0.3);
//    glVertex3f(0.1, -0.2, 0);
//
//    glEnd();
//    
//    // QUAD_STRIP
//    glBegin(GL_QUAD_STRIP); // Topi
//    
//    glColor3f(0.61, 0.34, 0.19);
//    glVertex3f(0.2, 0.7, 0);
//    
//    glColor3f(0.061, 0.034, 0.019);
//    glVertex3f(-0.15, 0.7, 0);
//
//	glColor3f(0.061, 0.034, 0.019);
//    glVertex3f(0.2, 0.75, 0);
//
//	glColor3f(0.061, 0.034, 0.019);
//    glVertex3f(-0.15, 0.75, 0);
//	
//	glColor3f(0.061, 0.034, 0.019);
//    glVertex3f(0.1, 0.8, 0);
//
//	glColor3f(0.061, 0.034, 0.019);
//    glVertex3f(-0.1, 0.8, 0);
//	    
//    glEnd();
//    
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Soal 2");
//    glutDisplayFunc(soal2);
//    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//    glutMainLoop();
//    return 0;
//}
