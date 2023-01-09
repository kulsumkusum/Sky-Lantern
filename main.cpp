#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
int y_pos=0,y1_pos=0,y2_pos=0;

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(3000/60,timer,0);

    if (y_pos<3000)
        {
            y_pos+= 3;
        }
    if (y1_pos<3000)
        {
            y1_pos+= 1;
        }
    if (y2_pos<3000)
        {
            y2_pos+= 2;
        }
}


void circle(void)
{
    float x, y;
    int i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;


        //Moon
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(246, 241, 213);
        x=460; y=500; radius =40;

        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
        glEnd();

        //star_1
        glBegin(GL_TRIANGLE_FAN);

        glColor3ub(246, 241, 213);
        x=20; y=490; radius =2;

        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
        glEnd();

        //star_2
        glBegin(GL_TRIANGLE_FAN);

        glColor3ub(246, 241, 213);
        x=150; y=560; radius =2;

        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
        glEnd();

        //star_3
        glBegin(GL_TRIANGLE_FAN);

        glColor3ub(246, 241, 213);
        x=190; y=440; radius =2;



        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
        glEnd();

        //star_4
        glBegin(GL_TRIANGLE_FAN);

        glColor3ub(246, 241, 213);
        x=360; y=480; radius =2;

        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
        glEnd();

        //star_5
        glBegin(GL_TRIANGLE_FAN);

        glColor3ub(246, 241, 213);
        x=540; y=560; radius =2;

        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
        glEnd();

}


void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT); /* draw white polygon (rectangle) with
corners at(0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) */

int x1=60,y1=80,x2=190,y2=140;
    int M,p,dx,dy,x,y;
    glColor3ub (0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    if((x2-x1)==0)
       M = (y2-y1);
    else
        M = (y2-y1)/(x2-x1);
    if(abs(M)<1)
    {
        dx = x2-x1;
        dy = y2-y1;
        p = 2*dy-dx;
        x=x1;
        y=y1;
        glBegin(GL_POINTS);
            while(x<=x2)
            {
              glVertex2d(x,y);
              x=x+1;
              if(p>=0)
              {
                 if(M<1)
                    y=y+1;
                else
                    y=y-1;
                 p = p+2*dy-2*dx;
              }
              else
              {
                  y=y;
                  p = p+2*dy;
              }
            }
        glEnd();
    }
   if(fabs(M)>=1)
    {
        dx = x2-x1;
        dy = y2-y1;
        p = 2*dx-dy;
        x=x1;
        y=y1;
        glBegin(GL_POINTS);
            while(y<=y2)
            {
              glVertex2d(x,y);
              y=y+1;
              if(p>=0)
              {
                 if(M>=1)
                    x=x+1;
                else
                    x=x-1;
                 p = p+2*dx-2*dy;
              }
              else
              {
                  x=x;
                  p = p+2*dx;
              }
            }
        glEnd();
    }


//lantern_1
glColor3ub (255,165,0);
glBegin(GL_POLYGON);
glVertex2d (140,80+y_pos);
glVertex2d (160, 85+y_pos);
glVertex2d (160, 140+y_pos);
glVertex2d (130, 130+y_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,140,0);
glVertex2d (160,85+y_pos);
glVertex2d (180,80+y_pos);
glVertex2d (195,130+y_pos);
glVertex2d (160,140+y_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,216,0);
glVertex2d (140, 80+y_pos);
glVertex2d (160,75+y_pos);
glVertex2d (155,80+y_pos);
glVertex2d (160,85+y_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (246, 241, 213);
glVertex2d (155, 80+y_pos);
glVertex2d (160,75+y_pos);
glVertex2d (165,80+y_pos);
glVertex2d (160,85+y_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,216,0);
glVertex2d (165, 80+y_pos);
glVertex2d (160,75+y_pos);
glVertex2d (180,80+y_pos);
glVertex2d (160,85+y_pos);
glEnd();


circle();

//lantern_2
glColor3ub (255,165,0);
glBegin(GL_POLYGON);
glVertex2d (200,180+y1_pos);
glVertex2d (240, 190+y1_pos);
glVertex2d (240, 290+y1_pos);
glVertex2d (190, 270+y1_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,140,0);
glVertex2d (240,190+y1_pos);
glVertex2d (280,180+y1_pos);
glVertex2d (295,270+y1_pos);
glVertex2d (240,290+y1_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,216,0);
glVertex2d (200, 180+y1_pos);
glVertex2d (240,170+y1_pos);
glVertex2d (230,180+y1_pos);
glVertex2d (240,190+y1_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (246, 241, 213);
glVertex2d (230, 180+y1_pos);
glVertex2d (240,170+y1_pos);
glVertex2d (250,180+y1_pos);
glVertex2d (240,190+y1_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,216,0);
glVertex2d (250, 180+y1_pos);
glVertex2d (240,170+y1_pos);
glVertex2d (280,180+y1_pos);
glVertex2d (240,190+y1_pos);
glEnd();

//lantern_3
glColor3ub (255,165,0);
glBegin(GL_POLYGON);
glVertex2d (340,80+y2_pos);
glVertex2d (360, 85+y2_pos);
glVertex2d (360, 155+y2_pos);
glVertex2d (325, 140+y2_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,140,0);
glVertex2d (360,85+y2_pos);
glVertex2d (380,80+y2_pos);
glVertex2d (400,140+y2_pos);
glVertex2d (360,155+y2_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,216,0);
glVertex2d (340,80+y2_pos);
glVertex2d (360,75+y2_pos);
glVertex2d (355,80+y2_pos);
glVertex2d (360,85+y2_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (246, 241, 213);
glVertex2d (355,80+y2_pos);
glVertex2d (360,75+y2_pos);
glVertex2d (365,80+y2_pos);
glVertex2d (360,85+y2_pos);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (255,216,0);
glVertex2d (365,80+y2_pos);
glVertex2d (360,75+y2_pos);
glVertex2d (380,80+y2_pos);
glVertex2d (360,85+y2_pos);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (0,120);
glVertex2d (75,80);
glVertex2d (75,75);
glVertex2d (60,80);
glVertex2d (60,0);
glVertex2d (0,0);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (60,20);
glVertex2d (60,0);
glVertex2d (200,0);
glVertex2d (200,20);
glVertex2d (160,60);
glVertex2d (100,60);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (200,0);
glVertex2d (210,0);
glVertex2d (210,165);
glVertex2d (200,165);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (170,155);
glVertex2d (170,150);
glVertex2d (240,150);
glVertex2d (240,155);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (170,145);
glVertex2d (170,140);
glVertex2d (240,140);
glVertex2d (240,145);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (110,60);
glVertex2d (190,140);
glVertex2d (188,140);
glVertex2d (108,60);
glEnd();
glBegin(GL_POLYGON);
glColor3ub (0,0,0);
glVertex2d (60,60);
glVertex2d (220,140);
glVertex2d (218,140);
glVertex2d (60,62);
glEnd();

 /* don't wait!start processing buffered OpenGL
routines */
glutSwapBuffers ();
}
void init (void)
{
glClearColor (0.027, 0.043, 0.20, 0.0); /* select clearing (background) color and
initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 600, 0 , 600);
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
Declare initial window size, position, and display mode
(single buffer & RGBA). Open window with "hello"
its title bar. Call initialization routines.
Register callback function to display graphics.
Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (400, 400);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutTimerFunc(0,timer,0);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
