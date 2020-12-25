#include <stdio.h>
#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl
#include "pisang.h"
#include "jeruk.h"

Pisang pisang;
Jeruk jeruk;

float x;
float y;
int moveMangkok;

void timer(int data)
{
    pisang.movePisang();
    jeruk.moveJeruk();

    glutPostRedisplay();
	glutTimerFunc(1,timer,0);
}

//void keyboard(int key,int x,int y){
    //if (key == GLUT_KEY_LEFT) {
        //if (moveMangkok != -44) {
            //moveMangkok -= 2;
            //glutPostRedisplay();
        //}
    //} else if (key == GLUT_KEY_RIGHT) {
        //if (moveMangkok != 110) {
            //moveMangkok += 2;
            //glutPostRedisplay();
        //}
    //}
//}
void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    pisang.manggilPisang();
    jeruk.manggilJeruk();
    glPopMatrix();


    glPushMatrix();
    glTranslated(moveMangkok,0,0);
    printf("%f/n",moveMangkok);
    glBegin(GL_POLYGON); //garibawah
    glColor3f (1.0,0.0,0.0);
    glVertex2f(1, 3);//A
    glVertex2f(1.50129, 1.18505);//B
    glVertex2f(2.65292, 0.05114);//C
    glVertex2f(4.74356, 0.06886);//D
    glVertex2f(6.58616, 0.05114);//E
    glVertex2f(7.48975, 1.14961);//F
    glVertex2f(8, 3);//G
    glEnd();


    glBegin(GL_POLYGON); //garis atas
    glColor3f (1.0,1.0,0.0);
    glVertex2f(8, 3);//G
    glVertex2f(7.04681, 3.80721);//Q
    glVertex2f(5.73573, 4.09069);//P
    glVertex2f(3.71596, 4.10841);//O
    glVertex2f(2.2277, 3.84265);//N
    glVertex2f(1, 3);//A
    glEnd();



    glBegin(GL_POLYGON); //garistengah
    glColor3f (1.0,1.0,0.0);
    glVertex2f(1, 3);//A
    glVertex2f(2.2277, 2.17722);//H
    glVertex2f(3.71596, 1.94689);//I
    glVertex2f(5.66486, 1.92918);//J
    glVertex2f(6.95823, 2.19494);//K
    glVertex2f(8, 3);//G
    glEnd();
    glPopMatrix();

    //glFlush();
	glutSwapBuffers();
}

void myinit() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0, 1.0, 1.0, 1.0); //membersihkan windows
	glColor3f(0.0, 0.0, 0.0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("keranjang");
	glutDisplayFunc(display);
	//glutSpecialFunc(keyboard);
	glutTimerFunc(1,timer,0);
	gluOrtho2D(-10,20,0,20);
	glutMainLoop();
	return 0;
}
