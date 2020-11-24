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

    //lingkaran
    glBegin(GL_POLYGON);
    glColor3f (1,0.5,0);
    glVertex2f(8,10);//A
	glVertex2f(7.72,9.4);//B
	glVertex2f(7.76,8.84);//C
	glVertex2f(8.02,8.24);//D
	glVertex2f(8.54,7.86);//E
	glVertex2f(9.22,7.78);//F
	glVertex2f(9.8,7.98);//G
	glVertex2f(10.28,8.46);//H
	glVertex2f(10.38,9.24);//I
	glVertex2f(10.12,9.86);//J
	glVertex2f(9.74,10.24);//K
	glVertex2f(9.16,10.44);//L
	glVertex2f(8.58,10.37);//M
	glEnd();

    //tangkai
    glBegin(GL_POLYGON);
    glColor3ub(107, 79, 65);
    glVertex2f(8.71,10.39);//N
	glVertex2f(8.68,10.97);//O
	glVertex2f(8.69,11.18);//P
	glVertex2f(8.96,11.19);//Q
	glVertex2f(8.96,10.9);//R
	glVertex2f(8.92,10.72);//T
	glVertex2f(8.86,10.4);//S
	glEnd();

    //daun
    glBegin(GL_POLYGON);
    glColor3f (0.0,1.0,0.0);
    glVertex2f(8.86,10.4);//S
	glVertex2f(8.92,10.72);//T
	glVertex2f(9.12,10.89);//U
	glVertex2f(9.35,10.96);//V
	glVertex2f(9.63,11.01);//W
	glVertex2f(9.89,10.95);//Z
	glVertex2f(9.8,10.7);//A1
	glVertex2f(9.63,10.59);//B1
	glVertex2f(9.42,10.55);//C1
	glVertex2f(9.16,10.44);//L
	glEnd();

	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("JERUK");
	glutDisplayFunc(display);
	gluOrtho2D(0,11,0,12);
	glutMainLoop();
	return 0;
}
