//#include <GL/glut.h>
//#include <stack>
//
//std::stack<GLfloat*> matrixStack; 
//
//void Mobil(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    // Badan mobil bagian depan
//	glColor3f(0.3f, 1.0f, 0.2f);
//	glPushMatrix();
//	glTranslatef(-0.25f, -0.25f, 0.0f); 
//	glScalef(1.0f, 0.5f, 1.0f); 
//	glutSolidCube(0.5);
//	
//	// Garis bawah badan mobil depan
//	glColor3f(1.0f, 0.0f, 0.0f); 
//	glBegin(GL_LINES);
//	glVertex3f(-0.25f, -0.25f, 0.0f);
//	glVertex3f(0.25f, -0.25f, 0.0f);
//	glVertex3f(0.1f, 1.5f, 0.0f);
//	glEnd();
//	
//	glPopMatrix();
//	
//	// Badan mobil bagian belakang
//	glColor3f(0.3f, 1.0f, 0.2f);
//	glPushMatrix();
//	glTranslatef(0.25f, -0.25f, 0.0f); 
//	glScalef(1.0f, 0.5f, 1.0f); 
//	glutSolidCube(0.5);
//	
//	// Garis tengah badan mobil belakang
//	glColor3f(1.0f, 0.0f, 0.0f); // Misalnya, warna merah
//	glBegin(GL_LINES);
//	glVertex3f(-0.25f, -0.25f, 0.0f);
//	glVertex3f(0.25f, -0.25f, 0.0f);
//	glEnd();
//	
//	glPopMatrix();
//	
//    // Roda kiri depan
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glPushMatrix();
//    glTranslatef(-0.35f, -0.4f, 0.0f); // Letak roda kiri depan
//    glutSolidTorus(0.025, 0.05, 50, 50);
//    glPopMatrix();
//
//    // Roda kanan depan
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glPushMatrix();
//    glTranslatef(-0.15f, -0.4f, 0.0f); // Letak roda kanan depan
//    glutSolidTorus(0.025, 0.05, 50, 50);
//    glPopMatrix();
//
//    // Roda kiri belakang
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glPushMatrix();
//    glTranslatef(0.15f, -0.4f, 0.0f); // Letak roda kiri belakang
//    glutSolidTorus(0.025, 0.05, 50, 50);
//    glPopMatrix();
//
//    // Roda kanan belakang
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glPushMatrix();
//    glTranslatef(0.35f, -0.4f, 0.0f); // Letak roda kanan belakang
//    glutSolidTorus(0.025, 0.05, 50, 50);
//    glPopMatrix();
//
//	// Atap mobil
//    glColor3f(0.3f, 1.0f, 0.2f);
//    glPushMatrix();
//    glTranslatef(0.0f, -0.05f, 0.0f); // Letak atap mobil
//    glScalef(1.5f, 0.5f, 1.0f); // Skala atap mobil
//    glutSolidCube(0.5);
//    glPopMatrix();
//    
//    // Kaca atap
//    glColor4f(0.8f, 0.8f, 1.0f, 0.5f); // Warna dan opacity untuk kaca
//    glPushMatrix();
//    glTranslatef(0.0f, -0.05f, 0.0f); // Letak kaca depan
//    glScalef(1.0f, 0.3f, 0.0f); // Skala kaca depan
//    glutSolidCube(0.5);
//    glPopMatrix();
//
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Mobil 2D");
//    glutDisplayFunc(Mobil);
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
