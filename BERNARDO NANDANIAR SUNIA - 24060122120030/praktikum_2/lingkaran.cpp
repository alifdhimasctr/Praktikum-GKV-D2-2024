#include <GL/glut.h>
#include <stack>

std::stack<GLfloat*> matrixStack; 

void Lingkaran(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    GLfloat* currentMatrix = new GLfloat[16];
    glGetFloatv(GL_MODELVIEW_MATRIX, currentMatrix);
    matrixStack.push(currentMatrix);
    glPushMatrix();
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    
    glColor3f(1.0f, 1.0f, 1.0f);
    glutSolidSphere(0.5, 50, 50);
    glPopMatrix();
    glLoadMatrixf(matrixStack.top());
    delete[] matrixStack.top();
    matrixStack.pop();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(Lingkaran);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
