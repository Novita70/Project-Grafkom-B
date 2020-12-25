class Jeruk{
    public:
        void drawJeruk(){
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
        }
        void manggilJeruk(){
            glPushMatrix();
            glTranslatef(9, jerukMulai[0], 0);
            drawJeruk();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-7, jerukMulai[1], 0);
            drawJeruk();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(5, jerukMulai[2], 0);
            drawJeruk();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(0, jerukMulai[3], 0);
            drawJeruk();
            glPopMatrix();

        }
        float jerukMulai[3] = {10, 15, 20};

         void moveJeruk(){
            jerukMulai[0] -= 0.01;
            jerukMulai[1] -= 0.01;
            jerukMulai[2] -= 0.01;
            jerukMulai[3] -= 0.01;

            for (int i = 0; i <= sizeof(jerukMulai); i++){
                if (jerukMulai[i] <= 0){
                    jerukMulai[i] = 20;
                }
            }
         }
};
