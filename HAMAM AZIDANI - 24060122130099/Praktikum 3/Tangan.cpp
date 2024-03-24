// Nama		: Hamam Azidani
// NIM		: 24060122130099
// Deskripsi: Program untuk Model Tangan

#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

static int  shoulder = 0, 
            elbow = 0, 
            palm = 0, 
            index1 = 0, 
            index2 = 0, 
            middle1 = 0, 
            middle2 = 0, 
            ring1 = 0, 
            ring2 = 0, 
            pinkie1 = 0, 
            pinkie2 = 0, 
            thumb = 0;

void init(void){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix();
        //SHOULDER
        glTranslatef(-1.0,0.0,0.0);
        glRotatef((GLfloat) shoulder, 0.0,0.0,1.0);
        glTranslatef(1.0,0.0,0.0);
        
        glPushMatrix();
            glScalef(2.0,0.4,1.0);
            glutWireCube(1.0);
        glPopMatrix();
        //ELBOW
        glTranslatef(1.0,0.0,0.0);
        glRotatef((GLfloat) elbow, 0.0,0.0,1.0);
        glTranslatef(1.0,0.0,0.0);
         
        glPushMatrix();
            glScalef(2.0,0.4,1.0);
            glutWireCube(1.0);
        glPopMatrix();
        //PALM
        glTranslatef(1.0,0.0,0.0);
        glRotatef((GLfloat) palm, 0.0,0.0,1.0);
        glTranslatef(0.5,0.0,0.0);
        
        glPushMatrix();
            glScalef(1.0,0.4 ,1.0);
            glutWireCube(1.0);
        glPopMatrix();
        //INDEX1
        glPushMatrix();
            glTranslatef(0.5,0.0,0.0);
            glRotatef((GLfloat) index1, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
            //INDEX2
            glTranslatef(0.25,0.0,0.0);
            glRotatef((GLfloat) index2, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
        glPopMatrix();
        //MIDDLE1
        glPushMatrix();    
            glTranslatef(0.5,0.0,0.0);
            glRotatef((GLfloat) middle1, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
            //MIDDLE2
            glTranslatef(0.25,0.0,0.0);
            glRotatef((GLfloat) middle2, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
        glPopMatrix();
        //RING1
        glPushMatrix();
            glTranslatef(0.5,0.0,-0.2);
            glRotatef((GLfloat) ring1, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
            //RING2
            glTranslatef(0.25,0.0,0.0);
            glRotatef((GLfloat) ring2, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
        glPopMatrix();
        //PINKIE1
        glPushMatrix();
            glTranslatef(0.5,0.0,-0.4);
            glRotatef((GLfloat) pinkie1, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
            //PINKIE2
            glTranslatef(0.25,0.0,0.0);
            glRotatef((GLfloat) pinkie2, 0.0,0.0,1.0);
            glTranslatef(0.25,0.0,0.0);
            
            glPushMatrix();
                glScalef(0.5,0.2 ,0.20);
                glutWireCube(1.0);
            glPopMatrix();
        glPopMatrix();
        //THUMB
        glPushMatrix();
            glTranslatef(0.2,0.0,0.4);
            glRotatef((GLfloat) thumb, -1.0,0.0,0.0);
            glTranslatef(0.0,0.0,0.25);
            
            glPushMatrix();
                glScalef(0.2,0.2 ,0.50);
                glutWireCube(1.0);
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
    
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0,0,(GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0,(GLfloat) w/ (GLfloat) h, 1.0,20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0,0.0,-5.0);
    
}

void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'a': 
            if (shoulder < 360) shoulder += 5;
            break;
        case 'A': 
            if (shoulder > 0) shoulder -= 5;
            break;
        case 'b': 
            if (elbow < 360) elbow += 5;
            break;
        case 'B': 
            if (elbow > 0) elbow -= 5;
            break;
        case 'c': 
            if (palm < 90) palm += 5;
            break;
        case 'C': 
            if (palm > 0) palm -= 5;
            break;
        case 'd': 
            if (index1 < 90) index1 += 5;
            break;
        case 'D': 
            if (index1 > 0) index1 -= 5;
            break;
        case 'e': 
            if (index2 < 135) index2 += 5;
            break;
        case 'E': 
            if (index2 > 0) index2 -= 5;
            break;
        case 'f': 
            if (middle1 < 90) middle1 += 5;
        	break;
        case 'F': 
            if (middle1 > 0) middle1 -= 5;
        	break;
        case 'g': 
            if (middle2 < 135) middle2 += 5;
        	break;
        case 'G': 
            if (middle2 > 0) middle2 -= 5;
        	break;
        case 'h': 
            if (ring1 < 90) ring1 += 5;
        	break;
        case 'H': 
            if (ring1 > 0) ring1 -= 5;
        	break;
        case 'i': 
            if (ring2 < 135) ring2 += 5;
        	break;
        case 'I': 
            if (ring2 > 0) ring2 -= 5;
        	break;
        case 'j': 
            if (pinkie1 < 90) pinkie1 += 5;
        	break;
        case 'J': 
            if (pinkie1 > 0) pinkie1 -= 5;
        	break;
        case 'k': 
            if (pinkie2 < 135) pinkie2 += 5;
        	break;
        case 'K': 
            if (pinkie2 > 0) pinkie2 -= 5;
        	break;
        case 'l': 
            if (thumb < 90) thumb += 5;
        	break;
        case 'L': 
            if (thumb > 0) thumb -= 5;
        	break;
        case 27: 
            exit(0);
        	break;
        default: 
			break;
    }
    
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1300, 700);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Model Tangan");
    init();
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    
    glutMainLoop();
    return 0;
}

