#include <gl/glut.h>

void nomor_2(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(1.0f);
	
//	Black	
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	
	// 1
	glVertex2f(-0.3, 0.8);
	glVertex2f(0.2, 0.8);
	glVertex2f(0.2, 0.7);
	glVertex2f(-0.3, 0.7);
	
	// 2
	glVertex2f(-0.4, 0.7);
	glVertex2f(-0.3, 0.7);
	glVertex2f(-0.3, 0.6);
	glVertex2f(-0.4, 0.6);
	
	glVertex2f(0.2, 0.7);
	glVertex2f(0.3, 0.7);
	glVertex2f(0.3, 0.6);
	glVertex2f(0.2, 0.6);
	
	// 3
	glVertex2f(-0.6, 0.6);
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.4, 0.5);
	glVertex2f(-0.6, 0.5);
	
	glVertex2f(-0.3, 0.6);
	glVertex2f(0.1, 0.6);
	glVertex2f(0.1, 0.5);
	glVertex2f(-0.3, 0.5);
	
	glVertex2f(0.2, 0.6);
	glVertex2f(0.4, 0.6);
	glVertex2f(0.4, 0.5);
	glVertex2f(0.2, 0.5);
	
	// 4
	glVertex2f(-0.6, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, 0.4);
	glVertex2f(-0.6, 0.4);
	
	glVertex2f(-0.4, 0.5);
	glVertex2f(-0.2, 0.5);
	glVertex2f(-0.2, 0.4);
	glVertex2f(-0.4, 0.4);
	
	glVertex2f(-0.1, 0.5);
	glVertex2f(0.0, 0.5);
	glVertex2f(0.0, 0.4);
	glVertex2f(-0.1, 0.4);
	
	glVertex2f(0.1, 0.5);
	glVertex2f(0.4, 0.5);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.1, 0.4);
	
	// 5
	glVertex2f(-0.6, 0.4);
	glVertex2f(-0.2, 0.4);
	glVertex2f(-0.2, 0.3);
	glVertex2f(-0.6, 0.3);
	
	glVertex2f(-0.1, 0.4);
	glVertex2f(0.2, 0.4);
	glVertex2f(0.2, 0.3);
	glVertex2f(-0.1, 0.3);
	
	glVertex2f(0.3, 0.4);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.4, 0.3);
	glVertex2f(0.3, 0.3);
	
	// 6
	glVertex2f(-0.6, 0.3);
	glVertex2f(-0.5, 0.3);
	glVertex2f(-0.5, 0.2);
	glVertex2f(-0.6, 0.2);
	
	glVertex2f(0.3, 0.3);
	glVertex2f(0.4, 0.3);
	glVertex2f(0.4, 0.2);
	glVertex2f(0.3, 0.2);
	
	// 7
	glVertex2f(-0.5, 0.2);
	glVertex2f(-0.4, 0.2);
	glVertex2f(-0.4, 0.1);
	glVertex2f(-0.5, 0.1);
	
	glVertex2f(0.4, 0.2);
	glVertex2f(0.5, 0.2);
	glVertex2f(0.5, 0.1);
	glVertex2f(0.4, 0.1);
	
	// 8
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.5, 0.1);
	glVertex2f(-0.5, 0.0);
	glVertex2f(-0.6, 0.0);
	
	glVertex2f(0.5, 0.1);
	glVertex2f(0.6, 0.1);
	glVertex2f(0.6, 0.0);
	glVertex2f(0.5, 0.0);
	
	// 9
	glVertex2f(-0.6, 0.0);
	glVertex2f(-0.5, 0.0);
	glVertex2f(-0.5, -0.1);
	glVertex2f(-0.6, -0.1);
	
	glVertex2f(0.5, 0.0);
	glVertex2f(0.6, 0.0);
	glVertex2f(0.6, -0.1);
	glVertex2f(0.5, -0.1);
	
	// 10
	glVertex2f(-0.6, -0.1);
	glVertex2f(-0.5, -0.1);
	glVertex2f(-0.5, -0.2);
	glVertex2f(-0.6, -0.2);
	
	glVertex2f(0.5, -0.1);
	glVertex2f(0.7, -0.1);
	glVertex2f(0.7, -0.2);
	glVertex2f(0.5, -0.2);
	
	// 11
	glVertex2f(-0.6, -0.2);
	glVertex2f(-0.5, -0.2);
	glVertex2f(-0.5, -0.3);
	glVertex2f(-0.6, -0.3);
	
	glVertex2f(0.6, -0.2);
	glVertex2f(0.7, -0.2);
	glVertex2f(0.7, -0.3);
	glVertex2f(0.6, -0.3);
	
	// 12
	glVertex2f(-0.5, -0.3);
	glVertex2f(-0.3, -0.3);
	glVertex2f(-0.3, -0.4);
	glVertex2f(-0.5, -0.4);
	
	glVertex2f(0.3, -0.3);
	glVertex2f(0.6, -0.3);
	glVertex2f(0.6, -0.4);
	glVertex2f(0.3, -0.4);
	
	// 13
	glVertex2f(-0.4, -0.4);
	glVertex2f(-0.3, -0.4);
	glVertex2f(-0.3, -0.5);
	glVertex2f(-0.4, -0.5);
	
	glVertex2f(-0.1, -0.4);
	glVertex2f(0.2, -0.4);
	glVertex2f(0.2, -0.5);
	glVertex2f(-0.1, -0.5);
	
	glVertex2f(0.3, -0.4);
	glVertex2f(0.4, -0.4);
	glVertex2f(0.4, -0.5);
	glVertex2f(0.3, -0.5);
	
	// 14
	glVertex2f(-0.4, -0.5);
	glVertex2f(-0.3, -0.5);
	glVertex2f(-0.3, -0.6);
	glVertex2f(-0.4, -0.6);
	
	glVertex2f(-0.1, -0.5);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, -0.6);
	glVertex2f(-0.1, -0.6);
	
	glVertex2f(0.1, -0.5);
	glVertex2f(0.2, -0.5);
	glVertex2f(0.2, -0.6);
	glVertex2f(0.1, -0.6);
	
	glVertex2f(0.3, -0.5);
	glVertex2f(0.4, -0.5);
	glVertex2f(0.4, -0.6);
	glVertex2f(0.3, -0.6);
	
	glEnd();
	
//	Dark Cream
	glBegin(GL_QUADS);
	glColor3f(0.58f, 0.53f, 0.32f);
	
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.3, 0.6);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.4, 0.5);
	
	glVertex2f(0.1, 0.6);
	glVertex2f(0.2, 0.6);
	glVertex2f(0.2, 0.5);
	glVertex2f(0.1, 0.5);
	
	glEnd();
	glFlush();
}


//int main(int argc, char* argv[]) {
//	glutInit(&argc, argv);
//	glutInitWindowSize(1000, 1000);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("nomor 2");
//	glutDisplayFunc(nomor_2);
//	glClearColor(0.5f, 0.5f, 1.0f, 1.0f);
////	glClearColor(0.68f, 0.63f, 0.42f, 1.0f);
//	glutMainLoop();
//	return 0;
//}
