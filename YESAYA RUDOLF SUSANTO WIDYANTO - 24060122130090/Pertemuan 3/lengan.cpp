#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

GLfloat body = 0, shoulder1 = 0,shoulder2 = 0, elbow = 0, wrist = 0;
GLfloat zoom = 100.0;

int windowWidth;
int windowHeight;
int fingerBase1[5] = { 0 }, fingerUp1[5] = { 0 };

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void displayfingers() {
    float y = -0.3;
    for (int i = 0; i < 5; i++) {
        glPushMatrix();
        glTranslatef(0.5, 0.0, (y + i * 0.18));
        glRotatef((GLfloat) fingerBase1[i], 0.0, 0.0, -1.0);
        glTranslatef(0.15, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.3, 0.1, 0.1);
        glutWireCube(1);
        glPopMatrix();

        glTranslatef(0.15, 0.0, 0.0);
        glRotatef((GLfloat) -fingerUp1[i], 0.0, 0.0, -1.0);
        glTranslatef(0.15, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.3, 0.1, 0.1);
        glutWireCube(1);
        glPopMatrix();
        glPopMatrix();
    }
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.85, 0.67, 0.21);

    /*******************************************************
     *                        SHOULDER 1                   *
    ********************************************************/
    glPushMatrix();
    glTranslatef(1.5, 1.2, 0.0);
    glRotatef((GLfloat)shoulder1, 0.0, 0.0, 1.0);
    glTranslatef(0.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder2, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.6, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    /*******************************************************
     *                        ELBOW 1                      *
    ********************************************************/
    glPushMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.6, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    /*******************************************************
     *                        TELAPAK                      *
    ********************************************************/
    glPushMatrix();
    glTranslatef(0.75, 0.0, 0.0);
    glRotatef((GLfloat)wrist, 0.0, 0.0, 1.0);
    glTranslatef(0.75, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.6, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    /********************************************************
     *                        FINGERS 1                     *
     ********************************************************/
    displayfingers();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h){
    windowWidth = w;
    windowHeight = h;
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(zoom, (GLfloat)w / (GLfloat)h, 0.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y){
    switch (key){
    case 'z':
        if (zoom > 120) { zoom = 120; }
        else if (zoom <= 60) { zoom = 60; }
        else 
            zoom -= 1.0;

        reshape(windowWidth, windowHeight);
        glutPostRedisplay();
        break;
    case 'Z':
        if (zoom >= 120) { zoom = 120; }
        else if (zoom < 10) { zoom = 10; }
        else
            zoom += 1.0;
        reshape(windowWidth, windowHeight);
        glutPostRedisplay();
        break;
    case '9':
        if (shoulder2 == 355){ shoulder2 = 0; }
        else {
            shoulder2 = (shoulder2 + 5);
            glutPostRedisplay();
        }
        break;
    case '0':
        if (shoulder2 == 0) shoulder2 = 355;
        else {
            shoulder2 = (shoulder2 - 5);
            glutPostRedisplay();
        }
        break;
    case 'p':
        if (shoulder1 > 45) shoulder1 = 45;
        else {
            shoulder1 = (shoulder1 + 5);
            glutPostRedisplay();
        }
        break;
    case 'P':
        if (shoulder1 <= -90) shoulder1 = -90;
        else {
            shoulder1 = (shoulder1 - 5);
            glutPostRedisplay();
        }
        break;

    case 'o':
        if (elbow >= 150) elbow = 150;
        else {
            elbow = (elbow + 5);
            glutPostRedisplay();
        }
        break;
    case 'O':
        if (elbow <= 0) elbow = 0;
        else {
            elbow = (elbow - 5);
            glutPostRedisplay();
        }
        break;
    case 'i':
    	if (wrist >= 30) wrist = 30;
        else {
            wrist = (wrist + 5);
            glutPostRedisplay();
        }
        break;
    case 'I':
    	if (wrist <= -30) wrist = -30;
        else {
            wrist = (wrist - 5);
            glutPostRedisplay();
        }
        break;
    case 'q':
        if (fingerBase1[0] < 90)
            fingerBase1[0] = (fingerBase1[0] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'Q':
        if (fingerBase1[0] > 0)
            fingerBase1[0] = (fingerBase1[0] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'a':
        if (fingerUp1[0] < 90)
            fingerUp1[0] = (fingerUp1[0] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'A':
        if (fingerUp1[0] > 0)
            fingerUp1[0] = (fingerUp1[0] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'w':
        if (fingerBase1[1] < 90)
            fingerBase1[1] = (fingerBase1[1] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'W':
        if (fingerBase1[1] > 0)
            fingerBase1[1] = (fingerBase1[1] - 5) % 360;
        glutPostRedisplay();
        break;
    case 's':
        if (fingerUp1[1] < 90)
            fingerUp1[1] = (fingerUp1[1] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'S':
        if (fingerUp1[1] > 0)
            fingerUp1[1] = (fingerUp1[1] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'e':
        if (fingerBase1[2] < 90)
            fingerBase1[2] = (fingerBase1[2] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'E':
        if (fingerBase1[2] > 0)
            fingerBase1[2] = (fingerBase1[2] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'd':
        if (fingerUp1[2] < 90)
            fingerUp1[2] = (fingerUp1[2] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'D':
        if (fingerUp1[2] > 0)
            fingerUp1[2] = (fingerUp1[2] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'r':
        if (fingerBase1[3] < 90)
            fingerBase1[3] = (fingerBase1[3] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'R':
        if (fingerBase1[3] > 0)
            fingerBase1[3] = (fingerBase1[3] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'f':
        if (fingerUp1[3] < 90)
            fingerUp1[3] = (fingerUp1[3] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'F':
        if (fingerUp1[3] > 0)
            fingerUp1[3] = (fingerUp1[3] - 5) % 360;
        glutPostRedisplay();
        break;
    case 't':
        if (fingerBase1[4] < 90)
            fingerBase1[4] = (fingerBase1[4] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'T':
        if (fingerBase1[4] > 0)
            fingerBase1[4] = (fingerBase1[4] - 5) % 360;
        glutPostRedisplay();
        break;
    case 'g':
        if (fingerUp1[4] < 90)
            fingerUp1[4] = (fingerUp1[4] + 5) % 360;
        glutPostRedisplay();
        break;
    case 'G':
        if (fingerUp1[4] > 0)
            fingerUp1[4] = (fingerUp1[4] - 5) % 360;
        glutPostRedisplay();
        break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(5000, 5000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
