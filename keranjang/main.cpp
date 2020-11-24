#include <GL/glut.h>
GLfloat  xangle=0.0, yangle=0.0;
void init (void) {
glClearColor (1.0, 1.0, 1.0, 0.0);
glLineWidth(1.0);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
glOrtho(-6,6,-6,6,-6,6);
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glClear(GL_COLOR_BUFFER_BIT);

    //garis bawah
    glBegin(GL_POLYGON);
    glColor3f (1.0,0.0,0.0);
    glVertex2f(1, 3);//A
	glVertex2f(1.50129, 1.18505);//B
	glVertex2f(2.65292, 0.05114);//C
	glVertex2f(4.74356, 0.06886);//D
	glVertex2f(6.58616, 0.05114);//E
	glVertex2f(7.48975, 1.14961);//F
	glVertex2f(8, 3);//G
	glEnd();

	//GARIS ATAS
	glBegin(GL_POLYGON);
    glColor3f (1.0,1.0,0.0);
    glVertex2f(8, 3);//G
    glVertex2f(7.04681, 3.80721);//Q
    glVertex2f(5.73573, 4.09069);//P
    glVertex2f(3.71596, 4.10841);//O
    glVertex2f(2.2277, 3.84265);//N
    glVertex2f(1, 3);//A
	glEnd();

	//GARIS TENGAH
	glBegin(GL_POLYGON);
    glColor3f (1.0,1.0,0.0);
    glVertex2f(1, 3);//A
    glVertex2f(2.2277, 2.17722);//H
    glVertex2f(3.71596, 1.94689);//I
    glVertex2f(5.66486, 1.92918);//J
    glVertex2f(6.95823, 2.19494);//K
    glVertex2f(8, 3);//G
	glEnd();

	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("keranjang");
	glutDisplayFunc(display);
	gluOrtho2D(0,11,0,12);
	glutMainLoop();
	return 0;
}
