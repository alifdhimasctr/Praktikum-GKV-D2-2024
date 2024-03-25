#include <stdlib.h> // standard definitions
#include <stdio.h> // C I/O (for sprintf)
#include <math.h> // standard definitions
#include <GL/glut.h> // GLUT
double rotAngle = 10; // rotation angle (BEWARE: Global)
double rotAngle1 = 10; // rotation angle (BEWARE: Global)
//------------------------------------------------------------------
// init
// Sets up some default OpenGL values.
//------------------------------------------------------------------
// Variable untuk pencahayaan
const GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 0.0f };
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 0.0f, 20.0f, 10.0f, 1.0f };
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
void lighting(){
// Fungsi mengaktifkan pencahayaan
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}
void init(){
	glClearColor(0, 0, 0, 0); // background color
	glClearDepth(1.0); // background depth value
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, 1, 1, 1000); // setup a perspective projection
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt( // set up the camera
	0.0, 0.0, 5.0, // eye position
	0.0, 0.0, 0.0, // lookat position
	0.0, 1.0, 0.0); // up direction
}
//------------------------------------------------------------------
// display callback function
// This is called each time application needs to redraw itself.
// Most of the opengl work is done through this function.
//------------------------------------------------------------------
void display()
{
	glClear(
	GL_COLOR_BUFFER_BIT | // clear the frame buffer (color)
	GL_DEPTH_BUFFER_BIT); // clear the depth buffer (depths)
	glPushMatrix(); // save the current camera transform
	glRotated(rotAngle, 0, 1, 0); // rotate by rotAngle about y-axis
	glRotated(rotAngle1, 1, 0, 0); // rotate by rotAngle about y-axis
	glEnable(GL_COLOR_MATERIAL); // specify object color
	glColor3f(0.4, 1.3, 0.1); // redish
	glutSolidTeapot(1); // draw the teapot
	glPopMatrix(); // restore the modelview matrix
	glFlush(); // force OpenGL to render now
	glutSwapBuffers(); // make the image visible
}
//------------------------------------------------------------------
// keyboard callback function
// This is called whenever a keyboard key is hit.
//------------------------------------------------------------------
void keyboard(unsigned char k, int x, int y)
{
switch (k)
{
case 'a':
rotAngle += 5; // increase rotation by 5 degrees
break;
case 'y':
rotAngle1 += 5; // increase rotation by 5 degrees
break;
case 'b':
rotAngle1 -= 5; // increase rotation by 5 degrees
break;
case 'l':
rotAngle -= 5; // decrease rotation by 5 degrees
break;
case 'q':
exit(0); // exit
}
glutPostRedisplay(); // redraw the image now
}
//-----------------------------------------------------------------
// main program
// Where everything begins.
//------------------------------------------------------------------
int main()
{
	glutInitDisplayMode( // initialize GLUT
	GLUT_DOUBLE | // use double buffering
	GLUT_DEPTH | // request memory for z-buffer
	GLUT_RGB ); // set RGB color mode
	glutInitWindowPosition(100,100);
	glutInitWindowSize(720,720);
	glutCreateWindow("GLUT Example"); // create the window
	glutDisplayFunc(display); // call display() to redraw window
	glutKeyboardFunc(keyboard); // call keyboard() when key is hit
	lighting();
	init(); // our own initializations
	glutMainLoop(); // let GLUT take care of everything
	
}
