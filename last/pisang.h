class Pisang{
    public:
        void drawPisang(){
            //tangkai
            glBegin(GL_POLYGON);
            glColor3f (0.0,1.0,0.0);
            glVertex2f(1.13,4.07);//A
            glVertex2f(1.49,4.3);//B
            glVertex2f(1.79,3.81);//D
            glVertex2f(1.46,3.59);//A1
            glVertex2f(1.32,3.84);//C
            glEnd();

            //BADAN PISANG
            glBegin(GL_POLYGON);
            glColor3f (1.0,1.0,0);
            glVertex2f(1.46,3.59);//A1
            glVertex2f(1.46,3.11);//E
            glVertex2f(1.72,2.6);//F
            glVertex2f(2.23,2.12);//G
            glVertex2f(2.85,1.94);//H
            glVertex2f(3.6,1.86);//I
            glVertex2f(4.43,1.86);//J
            glVertex2f(5,2);//K
            glVertex2f(5.52,2.22);//L
            glVertex2f(5.97,2.49);//M
            glVertex2f(6.37,2.78);//N
            glVertex2f(6.53,3.35);//O
            glVertex2f(6.32,3.52);//P
            glVertex2f(6.01,3.38);//Q
            glVertex2f(5.58,3.27);//R
            glVertex2f(5.26,3.09);//S
            glVertex2f(4.87,3.02);//T
            glVertex2f(4.46,2.98);//U
            glVertex2f(4,3);//V
            glVertex2f(3.57,3.02);//W
            glVertex2f(3.19,3.11);//Z
            glVertex2f(2.77,3.24);//B1
            glVertex2f(2.44,3.39);//C1
            glVertex2f(2.1,3.57);//D1
            glVertex2f(1.79,3.81);//D
            glEnd();
        }
        void manggilPisang(){
            glPushMatrix();
            glTranslatef(0, pisangMulai[0], 0);
            drawPisang();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(9, pisangMulai[1], 0);
            drawPisang();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-7, pisangMulai[2], 0);
            drawPisang();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(5, pisangMulai[3], 0);
            drawPisang();
            glPopMatrix();
        }
        float pisangMulai[3] = {10, 15, 20};

         void movePisang(){
            pisangMulai[0] -= 0.01;
            pisangMulai[1] -= 0.01;
            pisangMulai[2] -= 0.01;
            pisangMulai[3] -= 0.01;

            for (int i = 0; i <= sizeof(pisangMulai); i++){
                if (pisangMulai[i] <= 0){
                    pisangMulai[i] = 20;
                }
            }
         }
};
