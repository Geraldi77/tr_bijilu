#include<windows.h>
#include <stdlib.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

float xmov = 0.0f;
float ymov = 0.0f;
float zmov = 0.0f;

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPointSize(9.0);
    glLineWidth(6.0f);

}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glDisable(GL_LIGHTING);
    glLoadIdentity();
    
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glPushMatrix();

    glTranslatef(xmov, ymov, zmov);
    glPushMatrix();

    //belakang
    

    //stadion
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0, 20.0, -47.0);
    glVertex3f(30.0, 20.0, -47.0);
    glVertex3f(30.0, 0.0, -47.0);
    glVertex3f(20.0, 0.0, -47.0);
    
    glVertex3f(20.0, 20.0, -57.0);
    glVertex3f(30.0, 20.0, -57.0);
    glVertex3f(30.0, 0.0, -57.0);
    glVertex3f(20.0, 0.0, -57.0);
    
    glVertex3f(20.0, 20.0, 50.0);
    glVertex3f(30.0, 20.0, 50.0);
    glVertex3f(30.0, 0.0, 50.0);
    glVertex3f(20.0, 0.0, 50.0);
    
    glVertex3f(20.0, 20.0, 60.0);
    glVertex3f(30.0, 20.0, 60.0);
    glVertex3f(30.0, 0.0, 60.0);
    glVertex3f(20.0, 0.0, 60.0);
    
    glVertex3f(30.0, 20.0, 50.0);
    glVertex3f(30.0, 20.0, 60.0);
    glVertex3f(30.0, 0.0, 60.0);
    glVertex3f(30.0, 0.0, 50.0);
    
    glVertex3f(20.0, 20.0, 50.0);
    glVertex3f(20.0, 20.0, 60.0);
    glVertex3f(20.0, 0.0, 60.0);
    glVertex3f(20.0, 0.0, 50.0);
    
    glVertex3f(20.0, 20.0, -47.0);
    glVertex3f(20.0, 20.0, -57.0);
    glVertex3f(20.0, 0.0, -57.0);
    glVertex3f(20.0, 0.0, -47.0);
    
    glVertex3f(30.0, 20.0, -47.0);
    glVertex3f(30.0, 20.0, -57.0);
    glVertex3f(30.0, 0.0, -57.0);
    glVertex3f(30.0, 0.0, -47.0);
    
    glVertex3f(20.0, 20.0, -57.0);
    glVertex3f(30.0, 20.0, -57.0);
    glVertex3f(30.0, 20.0, -47.0);
    glVertex3f(20.0, 20.0, -47.0);
    
    glVertex3f(20.0, 20.0, 60.0);
    glVertex3f(30.0, 20.0, 60.0);
    glVertex3f(30.0, 20.0, 50.0);
    glVertex3f(20.0, 20.0, 50.0);
    
    glVertex3f(18.0, 10.0, 60.0);
    glVertex3f(30.0, 10.0, 60.0);
    glVertex3f(30.0, 10.0, -57.0);
    glVertex3f(18.0, 10.0, -57.0);
    
    glVertex3f(18.0, 8.0, 60.0);
    glVertex3f(30.0, 8.0, 60.0);
    glVertex3f(30.0, 8.0, -57.0);
    glVertex3f(18.0, 8.0, -57.0);
    
    glVertex3f(18.0, 8.0, -57.0);
    glVertex3f(18.0, 8.0, 60.0);
    glVertex3f(18.0, 9.0, 60.0);
    glVertex3f(18.0, 9.0, -57.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.0);
    glVertex3f(18.0, 9.0, -57.0);
    glVertex3f(18.0, 9.0, -47.0);
    glVertex3f(18.0, 10.0, -47.0);
    glVertex3f(18.0, 10.0, -57.0);
    
    
    glVertex3f(18.0, 9.0, 50.0);
    glVertex3f(18.0, 9.0, 60.0);
    glVertex3f(18.0, 10.0, 60.0);
    glVertex3f(18.0, 10.0, 50.0);
    
    glVertex3f(19.9, 13.0, 51.0);
    glVertex3f(19.9, 13.0, 59.0);
    glVertex3f(19.9, 19.0, 59.0);
    glVertex3f(19.9, 19.0, 51.0);
    
    glVertex3f(19.9, 13.0, -56.0);
    glVertex3f(19.9, 13.0, -48.0);
    glVertex3f(19.9, 19.0, -48.0);
    glVertex3f(19.9, 19.0, -56.0);
    
    glVertex3f(19.9, 1.0, -56.0);
    glVertex3f(19.9, 1.0, -52.0);
    glVertex3f(19.9, 7.0, -52.0);
    glVertex3f(19.9, 7.0, -56.0);
    
    glVertex3f(19.9, 1.0, -50.5);
    glVertex3f(19.9, 1.0, -49.0);
    glVertex3f(19.9, 7.0, -49.0);
    glVertex3f(19.9, 7.0, -50.5);
    
    glVertex3f(19.9, 1.0, 53.5);
    glVertex3f(19.9, 1.0, 52.0);
    glVertex3f(19.9, 7.0, 52.0);
    glVertex3f(19.9, 7.0, 53.5);
    
    glVertex3f(19.9, 1.0, 59.0);
    glVertex3f(19.9, 1.0, 55.0);
    glVertex3f(19.9, 7.0, 55.0);
    glVertex3f(19.9, 7.0, 59.0);
    glEnd();

    //atap
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(21.0, 23.0, 59.0);
    glVertex3f(29.0, 23.0, 59.0);
    glVertex3f(29.0, 20.0, 59.0);
    glVertex3f(21.0, 20.0, 59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(21.0, 23.0, -56.0);
    glVertex3f(29.0, 23.0, -56.0);
    glVertex3f(29.0, 20.0, -56.0);
    glVertex3f(21.0, 20.0, -56.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, 54.0);
    glVertex3f(29.0, 26.0, 54.0);
    glVertex3f(29.0, 26.0, 53.0);
    glVertex3f(21.0, 26.0, 53.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 60.0);
    glVertex3f(29.0, 23.0, 60.0);
    glVertex3f(29.0, 26.0, 54.0);
    glVertex3f(21.0, 26.0, 54.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 48.0);
    glVertex3f(29.0, 23.0, 48.0);
    glVertex3f(29.0, 26.0, 53.0);
    glVertex3f(21.0, 26.0, 53.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 48.0);
    glVertex3f(29.0, 23.0, 48.0);
    glVertex3f(29.0, 26.0, 42.0);
    glVertex3f(21.0, 26.0, 42.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, 42.0);
    glVertex3f(29.0, 26.0, 42.0);
    glVertex3f(29.0, 26.0, 41.0);
    glVertex3f(21.0, 26.0, 41.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 35.0);
    glVertex3f(29.0, 23.0, 35.0);
    glVertex3f(29.0, 26.0, 41.0);
    glVertex3f(21.0, 26.0, 41.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 35.0);
    glVertex3f(29.0, 23.0, 35.0);
    glVertex3f(29.0, 26.0, 29.0);
    glVertex3f(21.0, 26.0, 29.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, 29.0);
    glVertex3f(29.0, 26.0, 29.0);
    glVertex3f(29.0, 26.0, 28.0);
    glVertex3f(21.0, 26.0, 28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 22.0);
    glVertex3f(29.0, 23.0, 22.0);
    glVertex3f(29.0, 26.0, 28.0);
    glVertex3f(21.0, 26.0, 28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 22.0);
    glVertex3f(29.0, 23.0, 22.0);
    glVertex3f(29.0, 26.0, 16.0);
    glVertex3f(21.0, 26.0, 16.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, 16.0);
    glVertex3f(29.0, 26.0, 16.0);
    glVertex3f(29.0, 26.0, 15.0);
    glVertex3f(21.0, 26.0, 15.0);
    glEnd();
   
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 9.0);
    glVertex3f(29.0, 23.0, 9.0);
    glVertex3f(29.0, 26.0, 15.0);
    glVertex3f(21.0, 26.0, 15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, 9.0);
    glVertex3f(29.0, 23.0, 9.0);
    glVertex3f(29.0, 26.0, 3.0);
    glVertex3f(21.0, 26.0, 3.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, 3.0);
    glVertex3f(29.0, 26.0, 3.0);
    glVertex3f(29.0, 26.0, 2.0);
    glVertex3f(21.0, 26.0, 2.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -4.0);
    glVertex3f(29.0, 23.0, -4.0);
    glVertex3f(29.0, 26.0, 2.0);
    glVertex3f(21.0, 26.0, 2.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -4.0);
    glVertex3f(29.0, 23.0, -4.0);
    glVertex3f(29.0, 26.0, -10.0);
    glVertex3f(21.0, 26.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, -10.0);
    glVertex3f(29.0, 26.0, -10.0);
    glVertex3f(29.0, 26.0, -11.0);
    glVertex3f(21.0, 26.0, -11.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -17.0);
    glVertex3f(29.0, 23.0, -17.0);
    glVertex3f(29.0, 26.0, -11.0);
    glVertex3f(21.0, 26.0, -11.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -17.0);
    glVertex3f(29.0, 23.0, -17.0);
    glVertex3f(29.0, 26.0, -23.0);
    glVertex3f(21.0, 26.0, -23.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, -23.0);
    glVertex3f(29.0, 26.0, -23.0);
    glVertex3f(29.0, 26.0, -24.0);
    glVertex3f(21.0, 26.0, -24.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -30.0);
    glVertex3f(29.0, 23.0, -30.0);
    glVertex3f(29.0, 26.0, -24.0);
    glVertex3f(21.0, 26.0, -24.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -30.0);
    glVertex3f(29.0, 23.0, -30.0);
    glVertex3f(29.0, 26.0, -36.0);
    glVertex3f(21.0, 26.0, -36.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, -36.0);
    glVertex3f(29.0, 26.0, -36.0);
    glVertex3f(29.0, 26.0, -37.0);
    glVertex3f(21.0, 26.0, -37.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -43.0);
    glVertex3f(29.0, 23.0, -43.0);
    glVertex3f(29.0, 26.0, -37.0);
    glVertex3f(21.0, 26.0, -37.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -43.0);
    glVertex3f(29.0, 23.0, -43.0);
    glVertex3f(29.0, 26.0, -50.0);
    glVertex3f(21.0, 26.0, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 26.0, -50.0);
    glVertex3f(29.0, 26.0, -50.0);
    glVertex3f(29.0, 26.0, -51.0);
    glVertex3f(21.0, 26.0, -51.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(21.0, 23.0, -57.0);
    glVertex3f(29.0, 23.0, -57.0);
    glVertex3f(29.0, 26.0, -51.0);
    glVertex3f(21.0, 26.0, -51.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(30.0, 10.0, -47.0);
    glVertex3f(30.0, 18.0, -47.0);
    glVertex3f(30.0, 18.0, 50.0);
    glVertex3f(30.0, 10.0, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4, 0.3, 0.3);
    glVertex3f(23.0, 10.0, -47.0);
    glVertex3f(30.0, 15.0, -47.0);
    glVertex3f(30.0, 15.0, 50.0);
    glVertex3f(23.0, 10.0, 50.0);
    glEnd();

    //tiang
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, 47.8);
    glVertex3f(24.5, 29.0, 47.8);
    glVertex3f(24.5, 29.0, 48.2);
    glVertex3f(24.0, 12.0, 48.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, 47.8);
    glVertex3f(30.0, 18.0, 47.8);
    glVertex3f(30.0, 18.0, 48.2);
    glVertex3f(30.0, 29.0, 48.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, 34.8);
    glVertex3f(24.5, 29.0, 34.8);
    glVertex3f(24.5, 29.0, 35.2);
    glVertex3f(24.0, 12.0, 35.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, 34.8);
    glVertex3f(30.0, 18.0, 34.8);
    glVertex3f(30.0, 18.0, 35.2);
    glVertex3f(30.0, 29.0, 35.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, 22.8);
    glVertex3f(30.0, 18.0, 22.8);
    glVertex3f(30.0, 18.0, 23.2);
    glVertex3f(30.0, 29.0, 23.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, 22.8);
    glVertex3f(24.5, 29.0, 22.8);
    glVertex3f(24.5, 29.0, 23.2);
    glVertex3f(24.0, 12.0, 23.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, 9.8);
    glVertex3f(30.0, 18.0, 9.8);
    glVertex3f(30.0, 18.0, 10.2);
    glVertex3f(30.0, 29.0, 10.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, 9.8);
    glVertex3f(24.5, 29.0, 9.8);
    glVertex3f(24.5, 29.0, 10.2);
    glVertex3f(24.0, 12.0, 10.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, -4.2);
    glVertex3f(30.0, 18.0, -4.2);
    glVertex3f(30.0, 18.0, -3.8);
    glVertex3f(30.0, 29.0, -3.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, -4.2);
    glVertex3f(24.5, 29.0, -4.2);
    glVertex3f(24.5, 29.0, -3.8);
    glVertex3f(24.0, 12.0, -3.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, -17.2);
    glVertex3f(30.0, 18.0, -17.2);
    glVertex3f(30.0, 18.0, -16.8);
    glVertex3f(30.0, 29.0, -16.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, -17.2);
    glVertex3f(24.5, 29.0, -17.2);
    glVertex3f(24.5, 29.0, -16.8);
    glVertex3f(24.0, 12.0, -16.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, -30.2);
    glVertex3f(30.0, 18.0, -30.2);
    glVertex3f(30.0, 18.0, -29.8);
    glVertex3f(30.0, 29.0, -29.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, -30.2);
    glVertex3f(24.5, 29.0, -30.2);
    glVertex3f(24.5, 29.0, -29.8);
    glVertex3f(24.0, 12.0, -29.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(30.0, 29.0, -43.2);
    glVertex3f(30.0, 18.0, -43.2);
    glVertex3f(30.0, 18.0, -42.8);
    glVertex3f(30.0, 29.0, -42.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(24.0, 12.0, -43.2);
    glVertex3f(24.5, 29.0, -43.2);
    glVertex3f(24.5, 29.0, -42.8);
    glVertex3f(24.0, 12.0, -42.8);
    glEnd();

    //lapangan bola
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.9, 0.0);
    glVertex3f(-40.0, 0.0, -60.0);
    glVertex3f(5.0, 0.0, -60.0);
    glVertex3f(5.0, 0.0, 63.0);
    glVertex3f(-40.0, 0.0, 63.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-39.0, 0.1, -59.0);
    glVertex3f(-38.5, 0.1, -59.0);
    glVertex3f(-38.5, 0.1, 62.0);
    glVertex3f(-39.0, 0.1, 62.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(3.5, 0.1, -59.0);
    glVertex3f(4.0, 0.1, -59.0);
    glVertex3f(4.0, 0.1, 62.0);
    glVertex3f(3.5, 0.1, 62.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-38.5, 0.1, 61.5);
    glVertex3f(4.0, 0.1, 61.5);
    glVertex3f(4.0, 0.1, 62.0);
    glVertex3f(-38.5, 0.1, 62.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-38.5, 0.1, -58.5);
    glVertex3f(4.0, 0.1, -58.5);
    glVertex3f(4.0, 0.1, -59.0);
    glVertex3f(-38.5, 0.1, -59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-38.5, 0.1, 1.3);
    glVertex3f(4.0, 0.1, 1.3);
    glVertex3f(4.0, 0.1, 1.6);
    glVertex3f(-38.5, 0.1, 1.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-28.7, 0.1, 46.5);
    glVertex3f(-28.4, 0.1, 46.5);
    glVertex3f(-28.4, 0.1, 61.5);
    glVertex3f(-28.7, 0.1, 61.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-6.7, 0.1, 46.5);
    glVertex3f(-6.4, 0.1, 46.5);
    glVertex3f(-6.4, 0.1, 61.5);
    glVertex3f(-6.7, 0.1, 61.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-28.7, 0.1, -58.5);
    glVertex3f(-28.4, 0.1, -58.5);
    glVertex3f(-28.4, 0.1, -43.5);
    glVertex3f(-28.7, 0.1, -43.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-6.7, 0.1, -58.5);
    glVertex3f(-6.4, 0.1, -58.5);
    glVertex3f(-6.4, 0.1, -43.5);
    glVertex3f(-6.7, 0.1, -43.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-23.7, 0.1, 54.5);
    glVertex3f(-23.4, 0.1, 54.5);
    glVertex3f(-23.4, 0.1, 61.5);
    glVertex3f(-23.7, 0.1, 61.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.7, 0.1, 54.5);
    glVertex3f(-12.4, 0.1, 54.5);
    glVertex3f(-12.4, 0.1, 61.5);
    glVertex3f(-12.7, 0.1, 61.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.7, 0.1, -58.5);
    glVertex3f(-12.4, 0.1, -58.5);
    glVertex3f(-12.4, 0.1, -51.5);
    glVertex3f(-12.7, 0.1, -51.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-23.7, 0.1, -58.5);
    glVertex3f(-23.4, 0.1, -58.5);
    glVertex3f(-23.4, 0.1, -51.5);
    glVertex3f(-23.7, 0.1, -51.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-23.7, 0.1, -51.5);
    glVertex3f(-12.7, 0.1, -51.5);
    glVertex3f(-12.7, 0.1, -51.0);
    glVertex3f(-23.7, 0.1, -51.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-23.7, 0.1, 54.5);
    glVertex3f(-12.7, 0.1, 54.5);
    glVertex3f(-12.7, 0.1, 54.0);
    glVertex3f(-23.7, 0.1, 54.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-23.7, 0.1, -43.5);
    glVertex3f(-12.7, 0.1, -43.5);
    glVertex3f(-12.7, 0.1, -43.0);
    glVertex3f(-23.7, 0.1, -43.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-28.4, 0.1, 46.5);
    glVertex3f(-6.7, 0.1, 46.5);
    glVertex3f(-6.7, 0.1, 46.0);
    glVertex3f(-28.4, 0.1, 46.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-28.4, 0.1, -43.5);
    glVertex3f(-6.7, 0.1, -43.5);
    glVertex3f(-6.7, 0.1, -43.0);
    glVertex3f(-28.4, 0.1, -43.0);
    glEnd();

    //gris
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.4, 0.1, 40.5);
    glVertex3f(-14.7, 0.1, 40.5);
    glVertex3f(-14.7, 0.1, 40.0);
    glVertex3f(-20.4, 0.1, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-24.0, 0.1, 46.5);
    glVertex3f(-23.5, 0.1, 46.5);
    glVertex3f(-23.5, 0.1, 43.0);
    glVertex3f(-24.0, 0.1, 43.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-24.0, 0.1, 43.0);
    glVertex3f(-23.5, 0.1, 43.0);
    glVertex3f(-20.0, 0.1, 40.5);
    glVertex3f(-20.5, 0.1, 40.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.5, 0.1, 43.0);
    glVertex3f(-10.2, 0.1, 43.0);
    glVertex3f(-14.2, 0.1, 40.5);
    glVertex3f(-14.7, 0.1, 40.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-11.0, 0.1, 46.5);
    glVertex3f(-10.5, 0.1, 46.5);
    glVertex3f(-10.5, 0.1, 43.0);
    glVertex3f(-11.0, 0.1, 43.0);
    glEnd();

    //garis 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.4, 0.1, -37.5);
    glVertex3f(-14.7, 0.1, -37.5);
    glVertex3f(-14.7, 0.1, -37.0);
    glVertex3f(-20.4, 0.1, -37.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-24.0, 0.1, -43.5);
    glVertex3f(-23.5, 0.1, -43.5);
    glVertex3f(-23.5, 0.1, -40.0);
    glVertex3f(-24.0, 0.1, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-24.0, 0.1, -40.0);
    glVertex3f(-23.5, 0.1, -40.0);
    glVertex3f(-20.0, 0.1, -37.5);
    glVertex3f(-20.5, 0.1, -37.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.5, 0.1, -40.0);
    glVertex3f(-10.2, 0.1, -40.0);
    glVertex3f(-14.2, 0.1, -37.5);
    glVertex3f(-14.7, 0.1, -37.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-11.0, 0.1, -43.5);
    glVertex3f(-10.5, 0.1, -43.5);
    glVertex3f(-10.5, 0.1, -40.0);
    glVertex3f(-11.0, 0.1, -40.0);
    glEnd();

    //garis 3 //1.3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.4, 0.1, 10.5);
    glVertex3f(-14.7, 0.1, 10.5);
    glVertex3f(-14.7, 0.1, 10.0);
    glVertex3f(-20.4, 0.1, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.4, 0.1, -9.2);
    glVertex3f(-14.7, 0.1, -9.2);
    glVertex3f(-14.7, 0.1, -8.7);
    glVertex3f(-20.4, 0.1, -8.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25.0, 0.1, 4.6);
    glVertex3f(-24.5, 0.1, 4.6);
    glVertex3f(-25.0, 0.1, -1.7);
    glVertex3f(-24.5, 0.1, -1.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.1, 0.1, 4.6);
    glVertex3f(-9.6, 0.1, 4.6);
    glVertex3f(-9.6, 0.1, -1.7);
    glVertex3f(-10.1, 0.1, -1.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-9.6, 0.1, -1.6);
    glVertex3f(-10.1, 0.1, -1.6);
    glVertex3f(-14.2, 0.1, -9.2);
    glVertex3f(-14.7, 0.1, -9.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-19.9, 0.1, 10.2);
    glVertex3f(-20.4, 0.1, 10.2);
    glVertex3f(-24.5, 0.1, 4.6);
    glVertex3f(-25.0, 0.1, 4.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-19.9, 0.1, -9.2);
    glVertex3f(-20.4, 0.1, -9.2);
    glVertex3f(-24.5, 0.1, -1.6);
    glVertex3f(-25.0, 0.1, -1.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-14.7, 0.1, 10.2);
    glVertex3f(-14.2, 0.1, 10.2);
    glVertex3f(-10.2, 0.1, 4.6);
    glVertex3f(-10.7, 0.1, 4.6);
    glEnd();

    //lapangan lari
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(5.0, 0.0, -106.0);
    glVertex3f(17.0, 0.0, -106.0);
    glVertex3f(17.0, 0.0, 107.0);
    glVertex3f(5.0, 0.0, 107.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(-52.0, 0.0, -106.0);
    glVertex3f(-40.0, 0.0, -106.0);
    glVertex3f(-40.0, 0.0, 107.0);
    glVertex3f(-52.0, 0.0, 107.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(-40.0, 0.0, -106.0);
    glVertex3f(5.0, 0.0, -106.0);
    glVertex3f(5.0, 0.0, -94.0);
    glVertex3f(-40.0, 0.0, -94.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.4, 0.0);
    glVertex3f(-40.0, 0.0, 97.0);
    glVertex3f(5.0, 0.0, 97.0);
    glVertex3f(5.0, 0.0, 107.0);
    glVertex3f(-40.0, 0.0, 107.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(-62.0, 0.0, -110.0);
    glVertex3f(-52.0, 0.0, -110.0);
    glVertex3f(-52.0, 0.0, 107.0);
    glVertex3f(-62.0, 0.0, 107.0);
    glEnd();

    //1
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-53.0, 1.0, 10.0);
    glVertex3f(-53.0, 0.0, 10.0);
    glVertex3f(-53.0, 0.0, 20.0);
    glVertex3f(-53.0, 1.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-54.0, 2.0, 10.0);
    glVertex3f(-54.0, 1.0, 10.0);
    glVertex3f(-54.0, 1.0, 20.0);
    glVertex3f(-54.0, 2.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-55.0, 3.0, 10.0);
    glVertex3f(-55.0, 2.0, 10.0);
    glVertex3f(-55.0, 2.0, 20.0);
    glVertex3f(-55.0, 3.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-56.0, 3.0, 10.0);
    glVertex3f(-56.0, 0.0, 10.0);
    glVertex3f(-56.0, 0.0, 20.0);
    glVertex3f(-56.0, 3.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-56.0, 0.1, 10.0);
    glVertex3f(-53.0, 0.1, 10.0);
    glVertex3f(-53.0, 0.1, 20.0);
    glVertex3f(-56.0, 0.1, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-54.0, 1.1, 10.0);
    glVertex3f(-53.0, 1.1, 10.0);
    glVertex3f(-53.0, 1.1, 20.0);
    glVertex3f(-54.0, 1.1, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-55.0, 2.1, 10.0);
    glVertex3f(-54.0, 2.1, 10.0);
    glVertex3f(-54.0, 2.1, 20.0);
    glVertex3f(-55.0, 2.1, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-56.0, 3.1, 10.0);
    glVertex3f(-55.0, 3.1, 10.0);
    glVertex3f(-55.0, 3.1, 20.0);
    glVertex3f(-56.0, 3.1, 20.0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-53.0, 1.0, -20.0);
    glVertex3f(-53.0, 0.0, -20.0);
    glVertex3f(-53.0, 0.0, -10.0);
    glVertex3f(-53.0, 1.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-54.0, 2.0, -20.0);
    glVertex3f(-54.0, 1.0, -20.0);
    glVertex3f(-54.0, 1.0, -10.0);
    glVertex3f(-54.0, 2.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-55.0, 3.0, -20.0);
    glVertex3f(-55.0, 2.0, -20.0);
    glVertex3f(-55.0, 2.0, -10.0);
    glVertex3f(-55.0, 3.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-56.0, 3.0, -20.0);
    glVertex3f(-56.0, 0.0, -20.0);
    glVertex3f(-56.0, 0.0, -10.0);
    glVertex3f(-56.0, 3.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-56.0, 0.1, -20.0);
    glVertex3f(-53.0, 0.1, -20.0);
    glVertex3f(-53.0, 0.1, -10.0);
    glVertex3f(-56.0, 0.1, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-54.0, 1.1, -20.0);
    glVertex3f(-53.0, 1.1, -20.0);
    glVertex3f(-53.0, 1.1, -10.0);
    glVertex3f(-54.0, 1.1, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-55.0, 2.1, -20.0);
    glVertex3f(-54.0, 2.1, -20.0);
    glVertex3f(-54.0, 2.1, -10.0);
    glVertex3f(-55.0, 2.1, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-56.0, 3.1, -20.0);
    glVertex3f(-55.0, 3.1, -20.0);
    glVertex3f(-55.0, 3.1, -10.0);
    glVertex3f(-56.0, 3.1, -10.0);
    glEnd();

    //jln
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(-72.0, 0.0, -120.0);
    glVertex3f(-62.0, 0.0, -120.0);
    glVertex3f(-62.0, 0.0, -10.0);
    glVertex3f(-72.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(-62.0, 0.0, -120.0);
    glVertex3f(20.0, 0.0, -120.0);
    glVertex3f(20.0, 0.0, -110.0);
    glVertex3f(-62.0, 0.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(60.0, 0.0, -70.0);
    glVertex3f(130.0, 0.0, -70.0);
    glVertex3f(130.0, 0.0, -60.0);
    glVertex3f(60.0, 0.0, -60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(20.0, 0.0, -120.0);
    glVertex3f(60.0, 0.0, -70.0);
    glVertex3f(60.0, 0.0, -60.0);
    glVertex3f(20.0, 0.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(31.0, 0.0, -60.0);
    glVertex3f(130.0, 0.0, -60.0);
    glVertex3f(130.0, 0.0, -60.0);
    glVertex3f(31.0, 0.0, 65.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(17.0, 0.0, -58.0);
    glVertex3f(31.0, 0.0, -58.0);
    glVertex3f(31.0, 0.0, 61.0);
    glVertex3f(17.0, 0.0, 61.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(20.0, 0.0, -110.0);
    glVertex3f(31.0, 0.0, -96.0);
    glVertex3f(61.2, 0.0, -58.0);
    glVertex3f(20.0, 0.0, -58.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(-62.0, 0.0, -110.0);
    glVertex3f(20.0, 0.0, -110.0);
    glVertex3f(20.0, 0.0, -106.0);
    glVertex3f(-62.0, 0.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(-40.0, 0.0, -94.0);
    glVertex3f(5.0, 0.0, -94.0);
    glVertex3f(5.0, 0.0, -60.0);
    glVertex3f(-40.0, 0.0, -60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(-40.0, 0.0, 63.0);
    glVertex3f(5.0, 0.0, 63.0);
    glVertex3f(5.0, 0.0, 97.0);
    glVertex3f(-40.0, 0.0, 97.0);
    glEnd();

    //gedung h dpn
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3 );
    glVertex3f(41.0, 70.0, -110.0);
    glVertex3f(41.0, 10.0, -110.0);
    glVertex3f(41.0, 10.0, -100.0);
    glVertex3f(41.0, 70.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(41.0, 70.0, -120.0);
    glVertex3f(41.0, 40.0, -120.0);
    glVertex3f(41.0, 40.0, -110.0);
    glVertex3f(41.0, 70.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(51.0, 40.0, -120.0);
    glVertex3f(51.0, 10.0, -120.0);
    glVertex3f(51.0, 10.0, -110.0);
    glVertex3f(51.0, 40.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(41.0, 70.0, -130.0);
    glVertex3f(41.0, 10.0, -130.0);
    glVertex3f(41.0, 10.0, -120.0);
    glVertex3f(41.0, 70.0, -120.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 10.0, -130.0);
    glVertex3f(40.9, 9.0, -130.0);
    glVertex3f(40.9, 9.0, -120.0);
    glVertex3f(40.9, 10.0, -120.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 20.0, -130.0);
    glVertex3f(40.9, 19.0, -130.0);
    glVertex3f(40.9, 19.0, -120.0);
    glVertex3f(40.9, 20.0, -120.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 30.0, -130.0);
    glVertex3f(40.9, 29.0, -130.0);
    glVertex3f(40.9, 29.0, -120.0);
    glVertex3f(40.9, 30.0, -120.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 40.0, -130.0);
    glVertex3f(40.9, 39.0, -130.0);
    glVertex3f(40.9, 39.0, -120.0);
    glVertex3f(40.9, 40.0, -120.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 40.0, -110.0);
    glVertex3f(40.9, 39.0, -110.0);
    glVertex3f(40.9, 39.0, -100.0);
    glVertex3f(40.9, 40.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 30.0, -110.0);
    glVertex3f(40.9, 29.0, -110.0);
    glVertex3f(40.9, 29.0, -100.0);
    glVertex3f(40.9, 30.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 20.0, -110.0);
    glVertex3f(40.9, 19.0, -110.0);
    glVertex3f(40.9, 19.0, -100.0);
    glVertex3f(40.9, 20.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 10.0, -110.0);
    glVertex3f(40.9, 9.0, -110.0);
    glVertex3f(40.9, 9.0, -100.0);
    glVertex3f(40.9, 10.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.9, 10.0, -120.0);
    glVertex3f(50.9, 9.0, -120.0);
    glVertex3f(50.9, 9.0, -110.0);
    glVertex3f(50.9, 10.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.9, 20.0, -120.0);
    glVertex3f(50.9, 19.0, -120.0);
    glVertex3f(50.9, 19.0, -110.0);
    glVertex3f(50.9, 20.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.9, 30.0, -120.0);
    glVertex3f(50.9, 29.0, -120.0);
    glVertex3f(50.9, 29.0, -110.0);
    glVertex3f(50.9, 30.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.9, 40.0, -120.0);
    glVertex3f(50.9, 39.0, -120.0);
    glVertex3f(50.9, 39.0, -110.0);
    glVertex3f(50.9, 40.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 20.0, -110.0);
    glVertex3f(40.9, 19.0, -110.0);
    glVertex3f(40.9, 19.0, -100.0);
    glVertex3f(40.9, 20.0, -100.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 50.0, -130.0);
    glVertex3f(40.9, 49.0, -130.0);
    glVertex3f(40.9, 49.0, -100.0);
    glVertex3f(40.9, 50.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 60.0, -130.0);
    glVertex3f(40.9, 59.0, -130.0);
    glVertex3f(40.9, 59.0, -100.0);
    glVertex3f(40.9, 60.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.9, 72.0, -130.0);
    glVertex3f(40.9, 69.0, -130.0);
    glVertex3f(40.9, 69.0, -100.0);
    glVertex3f(40.9, 72.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(51.0, 40.0, -110.0);
    glVertex3f(51.0, 10.0, -110.0);
    glVertex3f(41.0, 10.0, -110.0);
    glVertex3f(41.0, 40.0, -110.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(51.0, 40.0, -120.0);
    glVertex3f(51.0, 10.0, -120.0);
    glVertex3f(41.0, 10.0, -120.0);
    glVertex3f(41.0, 40.0, -120.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(56.0, 70.0, -95.0);
    glVertex3f(56.0, 10.0, -95.0);
    glVertex3f(46.0, 10.0, -95.0);
    glVertex3f(46.0, 70.0, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(46.0, 70.0, -100.0);
    glVertex3f(46.0, 10.0, -100.0);
    glVertex3f(41.0, 10.0, -100.0);
    glVertex3f(41.0, 70.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(46.0, 70.0, -100.0);
    glVertex3f(46.0, 10.0, -100.0);
    glVertex3f(46.0, 10.0, -95.0);
    glVertex3f(46.0, 70.0, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 72.0, -100.0);
    glVertex3f(45.9, 69.0, -100.0);
    glVertex3f(45.9, 69.0, -95.0);
    glVertex3f(45.9, 72.0, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 59.5, -100.0);
    glVertex3f(45.9, 60.0, -100.0);
    glVertex3f(45.9, 60.0, -95.0);
    glVertex3f(45.9, 59.5, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 49.5, -100.0);
    glVertex3f(45.9, 50.0, -100.0);
    glVertex3f(45.9, 50.0, -95.0);
    glVertex3f(45.9, 49.5, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 39.5, -100.0);
    glVertex3f(45.9, 40.0, -100.0);
    glVertex3f(45.9, 40.0, -95.0);
    glVertex3f(45.9, 39.5, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 29.5, -100.0);
    glVertex3f(45.9, 30.0, -100.0);
    glVertex3f(45.9, 30.0, -95.0);
    glVertex3f(45.9, 29.5, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 19.5, -100.0);
    glVertex3f(45.9, 20.0, -100.0);
    glVertex3f(45.9, 20.0, -95.0);
    glVertex3f(45.9, 19.5, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.9, 9.0, -100.0);
    glVertex3f(45.9, 10.0, -100.0);
    glVertex3f(45.9, 10.0, -95.0);
    glVertex3f(45.9, 9.0, -95.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 9.0, -100.0);
    glVertex3f(46.0, 10.0, -100.0);
    glVertex3f(41.0, 10.0, -100.0);
    glVertex3f(41.0, 9.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 19.0, -100.0);
    glVertex3f(46.0, 20.0, -100.0);
    glVertex3f(41.0, 20.0, -100.0);
    glVertex3f(41.0, 19.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 29.0, -100.0);
    glVertex3f(46.0, 30.0, -100.0);
    glVertex3f(41.0, 30.0, -100.0);
    glVertex3f(41.0, 29.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 39.0, -100.0);
    glVertex3f(46.0, 40.0, -100.0);
    glVertex3f(41.0, 40.0, -100.0);
    glVertex3f(41.0, 39.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 49.0, -100.0);
    glVertex3f(46.0, 50.0, -100.0);
    glVertex3f(41.0, 50.0, -100.0);
    glVertex3f(41.0, 49.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 59.0, -100.0);
    glVertex3f(46.0, 60.0, -100.0);
    glVertex3f(41.0, 60.0, -100.0);
    glVertex3f(41.0, 59.0, -100.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(46.0, 69.0, -99.9);
    glVertex3f(46.0, 72.0, -99.9);
    glVertex3f(40.9, 72.0, -99.9);
    glVertex3f(40.9, 69.0, -99.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 59.0, -94.9);
    glVertex3f(56.0, 60.0, -94.9);
    glVertex3f(46.0, 60.0, -94.9);
    glVertex3f(46.0, 59.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 69.0, -94.9);
    glVertex3f(56.0, 72.0, -94.9);
    glVertex3f(46.0, 72.0, -94.9);
    glVertex3f(46.0, 69.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 49.0, -94.9);
    glVertex3f(56.0, 50.0, -94.9);
    glVertex3f(46.0, 50.0, -94.9);
    glVertex3f(46.0, 49.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 39.0, -94.9);
    glVertex3f(56.0, 40.0, -94.9);
    glVertex3f(46.0, 40.0, -94.9);
    glVertex3f(46.0, 39.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 29.0, -94.9);
    glVertex3f(56.0, 30.0, -94.9);
    glVertex3f(46.0, 30.0, -94.9);
    glVertex3f(46.0, 29.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 19.0, -94.9);
    glVertex3f(56.0, 20.0, -94.9);
    glVertex3f(46.0, 20.0, -94.9);
    glVertex3f(46.0, 19.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 9.0, -94.9);
    glVertex3f(56.0, 10.0, -94.9);
    glVertex3f(46.0, 10.0, -94.9);
    glVertex3f(46.0, 9.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 9.0, -95.0);
    glVertex3f(56.0, 72.0, -95.0);
    glVertex3f(56.0, 72.0, -93.0);
    glVertex3f(56.0, 9.0, -93.0);
    glEnd();

    

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0,0.4);
    glVertex3f(56.0, 13.0, -93.0);
    glVertex3f(56.0, 68.0, -93.0);
    glVertex3f(56.0, 68.0, -89.0);
    glVertex3f(56.0, 13.0, -89.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(56.0, 13.0, -89.0);
    glVertex3f(56.0, 68.0, -89.0);
    glVertex3f(61.0, 68.0, -89.0);
    glVertex3f(61.0, 13.0, -89.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(61.0, 9.0, -89.0);
    glVertex3f(61.0, 68.0, -89.0);
    glVertex3f(63.0, 68.0, -89.0);
    glVertex3f(63.0, 9.0, -89.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(63.0, 9.0, -130.0);
    glVertex3f(63.0, 68.0, -130.0);
    glVertex3f(63.0, 68.0, -79.0);
    glVertex3f(63.0, 9.0, -79.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 72.0, -93.0);
    glVertex3f(56.0, 68.0, -93.0);
    glVertex3f(56.0, 68.0, -89.0);
    glVertex3f(56.0, 72.0, -89.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 72.0, -89.0);
    glVertex3f(56.0, 68.0, -89.0);
    glVertex3f(63.0, 68.0, -89.0);
    glVertex3f(63.0, 72.0, -89.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 13.0, -93.0);
    glVertex3f(56.0, 9.0, -93.0);
    glVertex3f(56.0, 9.0, -89.0);
    glVertex3f(56.0, 13.0, -89.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(56.0, 13.0, -89.0);
    glVertex3f(56.0, 9.0, -89.0);
    glVertex3f(63.0, 9.0, -89.0);
    glVertex3f(63.0, 13.0, -89.0);
    glEnd();
    //jndl
    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(52.5, 12.0, -94.9);
    glVertex3f(52.5, 17.0, -94.9);
    glVertex3f(49.5, 17.0, -94.9);
    glVertex3f(49.5, 12.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(52.5, 22.0, -94.9);
    glVertex3f(52.5, 27.0, -94.9);
    glVertex3f(49.5, 27.0, -94.9);
    glVertex3f(49.5, 22.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(52.5, 32.0, -94.9);
    glVertex3f(52.5, 37.0, -94.9);
    glVertex3f(49.5, 37.0, -94.9);
    glVertex3f(49.5, 32.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(52.5, 42.0, -94.9);
    glVertex3f(52.5, 47.0, -94.9);
    glVertex3f(49.5, 47.0, -94.9);
    glVertex3f(49.5, 42.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(52.5, 52.0, -94.9);
    glVertex3f(52.5, 57.0, -94.9);
    glVertex3f(49.5, 57.0, -94.9);
    glVertex3f(49.5, 52.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(52.5, 62.0, -94.9);
    glVertex3f(52.5, 67.0, -94.9);
    glVertex3f(49.5, 67.0, -94.9);
    glVertex3f(49.5, 62.0, -94.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(45.9, 18.0, -99.5);
    glVertex3f(45.9, 12.0, -99.5);
    glVertex3f(45.9, 12.0, -95.5);
    glVertex3f(45.9, 18.0, -95.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(45.9, 28.0, -99.5);
    glVertex3f(45.9, 22.0, -99.5);
    glVertex3f(45.9, 22.0, -95.5);
    glVertex3f(45.9, 28.0, -95.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(45.9, 38.0, -99.5);
    glVertex3f(45.9, 32.0, -99.5);
    glVertex3f(45.9, 32.0, -95.5);
    glVertex3f(45.9, 38.0, -95.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(45.9, 48.0, -99.5);
    glVertex3f(45.9, 42.0, -99.5);
    glVertex3f(45.9, 42.0, -95.5);
    glVertex3f(45.9, 48.0, -95.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(45.9, 58.0, -99.5);
    glVertex3f(45.9, 52.0, -99.5);
    glVertex3f(45.9, 52.0, -95.5);
    glVertex3f(45.9, 58.0, -95.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(45.9, 68.0, -99.5);
    glVertex3f(45.9, 62.0, -99.5);
    glVertex3f(45.9, 62.0, -95.5);
    glVertex3f(45.9, 68.0, -95.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 18.0, -124.0);
    glVertex3f(40.9, 12.0, -124.0);
    glVertex3f(40.9, 12.0, -121.0);
    glVertex3f(40.9, 18.0, -121.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 28.0, -124.0);
    glVertex3f(40.9, 22.0, -124.0);
    glVertex3f(40.9, 22.0, -121.0);
    glVertex3f(40.9, 28.0, -121.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 38.0, -124.0);
    glVertex3f(40.9, 32.0, -124.0);
    glVertex3f(40.9, 32.0, -121.0);
    glVertex3f(40.9, 38.0, -121.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 48.0, -124.0);
    glVertex3f(40.9, 42.0, -124.0);
    glVertex3f(40.9, 42.0, -121.0);
    glVertex3f(40.9, 48.0, -121.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 58.0, -124.0);
    glVertex3f(40.9, 52.0, -124.0);
    glVertex3f(40.9, 52.0, -121.0);
    glVertex3f(40.9, 58.0, -121.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 68.0, -124.0);
    glVertex3f(40.9, 62.0, -124.0);
    glVertex3f(40.9, 62.0, -121.0);
    glVertex3f(40.9, 68.0, -121.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 18.0, -109.0);
    glVertex3f(40.9, 12.0, -109.0);
    glVertex3f(40.9, 12.0, -106.0);
    glVertex3f(40.9, 18.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 28.0, -109.0);
    glVertex3f(40.9, 22.0, -109.0);
    glVertex3f(40.9, 22.0, -106.0);
    glVertex3f(40.9, 28.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 38.0, -109.0);
    glVertex3f(40.9, 32.0, -109.0);
    glVertex3f(40.9, 32.0, -106.0);
    glVertex3f(40.9, 38.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 48.0, -109.0);
    glVertex3f(40.9, 42.0, -109.0);
    glVertex3f(40.9, 42.0, -106.0);
    glVertex3f(40.9, 48.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 58.0, -109.0);
    glVertex3f(40.9, 52.0, -109.0);
    glVertex3f(40.9, 52.0, -106.0);
    glVertex3f(40.9, 58.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 68.0, -109.0);
    glVertex3f(40.9, 62.0, -109.0);
    glVertex3f(40.9, 62.0, -106.0);
    glVertex3f(40.9, 68.0, -106.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 68.0, -116.5);
    glVertex3f(40.9, 62.0, -116.5);
    glVertex3f(40.9, 62.0, -113.5);
    glVertex3f(40.9, 68.0, -113.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 58.0, -116.5);
    glVertex3f(40.9, 52.0, -116.5);
    glVertex3f(40.9, 52.0, -113.5);
    glVertex3f(40.9, 58.0, -113.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(40.9, 48.0, -116.5);
    glVertex3f(40.9, 42.0, -116.5);
    glVertex3f(40.9, 42.0, -113.5);
    glVertex3f(40.9, 48.0, -113.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(50.9, 38.0, -116.5);
    glVertex3f(50.9, 32.0, -116.5);
    glVertex3f(50.9, 32.0, -113.5);
    glVertex3f(50.9, 38.0, -113.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(50.9, 28.0, -116.5);
    glVertex3f(50.9, 22.0, -116.5);
    glVertex3f(50.9, 22.0, -113.5);
    glVertex3f(50.9, 28.0, -113.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.0, 204.0, 0.0, 0.4);
    glVertex3f(50.9, 18.0, -116.5);
    glVertex3f(50.9, 12.0, -116.5);
    glVertex3f(50.9, 12.0, -113.5);
    glVertex3f(50.9, 18.0, -113.5);
    glEnd();

    //list jndl
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.8, 18.0, -97.6);
    glVertex3f(45.8, 12.0, -97.6);
    glVertex3f(45.8, 12.0, -97.4);
    glVertex3f(45.8, 18.0, -97.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.8, 28.0, -97.6);
    glVertex3f(45.8, 22.0, -97.6);
    glVertex3f(45.8, 22.0, -97.4);
    glVertex3f(45.8, 28.0, -97.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.8, 38.0, -97.6);
    glVertex3f(45.8, 32.0, -97.6);
    glVertex3f(45.8, 32.0, -97.4);
    glVertex3f(45.8, 38.0, -97.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.8, 48.0, -97.6);
    glVertex3f(45.8, 42.0, -97.6);
    glVertex3f(45.8, 42.0, -97.4);
    glVertex3f(45.8, 48.0, -97.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.8, 58.0, -97.6);
    glVertex3f(45.8, 52.0, -97.6);
    glVertex3f(45.8, 52.0, -97.4);
    glVertex3f(45.8, 58.0, -97.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(45.8, 68.0, -97.6);
    glVertex3f(45.8, 62.0, -97.6);
    glVertex3f(45.8, 62.0, -97.4);
    glVertex3f(45.8, 68.0, -97.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 18.0, -115.1);
    glVertex3f(50.8, 12.0, -115.1);
    glVertex3f(50.8, 12.0, -114.9);
    glVertex3f(50.8, 18.0, -114.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 28.0, -115.1);
    glVertex3f(50.8, 22.0, -115.1);
    glVertex3f(50.8, 22.0, -114.9);
    glVertex3f(50.8, 28.0, -114.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 38.0, -115.1);
    glVertex3f(50.8, 32.0, -115.1);
    glVertex3f(50.8, 32.0, -114.9);
    glVertex3f(50.8, 38.0, -114.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -115.1);
    glVertex3f(40.8, 42.0, -115.1);
    glVertex3f(40.8, 42.0, -114.9);
    glVertex3f(40.8, 48.0, -114.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -115.1);
    glVertex3f(40.8, 52.0, -115.1);
    glVertex3f(40.8, 52.0, -114.9);
    glVertex3f(40.8, 58.0, -114.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -115.1);
    glVertex3f(40.8, 62.0, -115.1);
    glVertex3f(40.8, 62.0, -114.9);
    glVertex3f(40.8, 68.0, -114.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -116.4);
    glVertex3f(40.8, 62.0, -116.4);
    glVertex3f(40.8, 62.0, -116.2);
    glVertex3f(40.8, 68.0, -116.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -116.4);
    glVertex3f(40.8, 52.0, -116.4);
    glVertex3f(40.8, 52.0, -116.2);
    glVertex3f(40.8, 58.0, -116.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -116.4);
    glVertex3f(40.8, 42.0, -116.4);
    glVertex3f(40.8, 42.0, -116.2);
    glVertex3f(40.8, 48.0, -116.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 38.0, -116.4);
    glVertex3f(50.8, 32.0, -116.4);
    glVertex3f(50.8, 32.0, -116.2);
    glVertex3f(50.8, 38.0, -116.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 28.0, -116.4);
    glVertex3f(50.8, 22.0, -116.4);
    glVertex3f(50.8, 22.0, -116.2);
    glVertex3f(50.8, 28.0, -116.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 18.0, -116.4);
    glVertex3f(50.8, 12.0, -116.4);
    glVertex3f(50.8, 12.0, -116.2);
    glVertex3f(50.8, 18.0, -116.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 18.0, -113.9);
    glVertex3f(50.8, 12.0, -113.9);
    glVertex3f(50.8, 12.0, -113.7);
    glVertex3f(50.8, 18.0, -113.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 28.0, -113.9);
    glVertex3f(50.8, 22.0, -113.9);
    glVertex3f(50.8, 22.0, -113.7);
    glVertex3f(50.8, 28.0, -113.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(50.8, 38.0, -113.9);
    glVertex3f(50.8, 32.0, -113.9);
    glVertex3f(50.8, 32.0, -113.7);
    glVertex3f(50.8, 38.0, -113.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -113.9);
    glVertex3f(40.8, 42.0, -113.9);
    glVertex3f(40.8, 42.0, -113.7);
    glVertex3f(40.8, 48.0, -113.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -113.9);
    glVertex3f(40.8, 52.0, -113.9);
    glVertex3f(40.8, 52.0, -113.7);
    glVertex3f(40.8, 58.0, -113.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -113.9);
    glVertex3f(40.8, 62.0, -113.9);
    glVertex3f(40.8, 62.0, -113.7);
    glVertex3f(40.8, 68.0, -113.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -106.3);
    glVertex3f(40.8, 62.0, -106.3);
    glVertex3f(40.8, 62.0, -106.1);
    glVertex3f(40.8, 68.0, -106.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -106.3);
    glVertex3f(40.8, 52.0, -106.3);
    glVertex3f(40.8, 52.0, -106.1);
    glVertex3f(40.8, 58.0, -106.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -106.3);
    glVertex3f(40.8, 42.0, -106.3);
    glVertex3f(40.8, 42.0, -106.1);
    glVertex3f(40.8, 48.0, -106.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 38.0, -106.3);
    glVertex3f(40.8, 32.0, -106.3);
    glVertex3f(40.8, 32.0, -106.1);
    glVertex3f(40.8, 38.0, -106.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 28.0, -106.3);
    glVertex3f(40.8, 22.0, -106.3);
    glVertex3f(40.8, 22.0, -106.1);
    glVertex3f(40.8, 28.0, -106.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 18.0, -106.3);
    glVertex3f(40.8, 12.0, -106.3);
    glVertex3f(40.8, 12.0, -106.1);
    glVertex3f(40.8, 18.0, -106.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 18.0, -108.9);
    glVertex3f(40.8, 12.0, -108.9);
    glVertex3f(40.8, 12.0, -108.7);
    glVertex3f(40.8, 18.0, -108.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 28.0, -108.9);
    glVertex3f(40.8, 22.0, -108.9);
    glVertex3f(40.8, 22.0, -108.7);
    glVertex3f(40.8, 28.0, -108.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 38.0, -108.9);
    glVertex3f(40.8, 32.0, -108.9);
    glVertex3f(40.8, 32.0, -108.7);
    glVertex3f(40.8, 38.0, -108.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -108.9);
    glVertex3f(40.8, 42.0, -108.9);
    glVertex3f(40.8, 42.0, -108.7);
    glVertex3f(40.8, 48.0, -108.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -108.9);
    glVertex3f(40.8, 52.0, -108.9);
    glVertex3f(40.8, 52.0, -108.7);
    glVertex3f(40.8, 58.0, -108.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -108.9);
    glVertex3f(40.8, 62.0, -108.9);
    glVertex3f(40.8, 62.0, -108.7);
    glVertex3f(40.8, 68.0, -108.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -107.6);
    glVertex3f(40.8, 62.0, -107.6);
    glVertex3f(40.8, 62.0, -107.4);
    glVertex3f(40.8, 68.0, -107.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -107.6);
    glVertex3f(40.8, 52.0, -107.6);
    glVertex3f(40.8, 52.0, -107.4);
    glVertex3f(40.8, 58.0, -107.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -107.6);
    glVertex3f(40.8, 42.0, -107.6);
    glVertex3f(40.8, 42.0, -107.4);
    glVertex3f(40.8, 48.0, -107.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 38.0, -107.6);
    glVertex3f(40.8, 32.0, -107.6);
    glVertex3f(40.8, 32.0, -107.4);
    glVertex3f(40.8, 38.0, -107.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 28.0, -107.6);
    glVertex3f(40.8, 22.0, -107.6);
    glVertex3f(40.8, 22.0, -107.4);
    glVertex3f(40.8, 28.0, -107.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 18.0, -107.6);
    glVertex3f(40.8, 12.0, -107.6);
    glVertex3f(40.8, 12.0, -107.4);
    glVertex3f(40.8, 18.0, -107.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 18.0, -121.3);
    glVertex3f(40.8, 12.0, -121.3);
    glVertex3f(40.8, 12.0, -121.1);
    glVertex3f(40.8, 18.0, -121.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 28.0, -121.3);
    glVertex3f(40.8, 22.0, -121.3);
    glVertex3f(40.8, 22.0, -121.1);
    glVertex3f(40.8, 28.0, -121.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 38.0, -121.3);
    glVertex3f(40.8, 32.0, -121.3);
    glVertex3f(40.8, 32.0, -121.1);
    glVertex3f(40.8, 38.0, -121.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -121.3);
    glVertex3f(40.8, 42.0, -121.3);
    glVertex3f(40.8, 42.0, -121.1);
    glVertex3f(40.8, 48.0, -121.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -121.3);
    glVertex3f(40.8, 52.0, -121.3);
    glVertex3f(40.8, 52.0, -121.1);
    glVertex3f(40.8, 58.0, -121.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -121.3);
    glVertex3f(40.8, 62.0, -121.3);
    glVertex3f(40.8, 62.0, -121.1);
    glVertex3f(40.8, 68.0, -121.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 18.0, -123.9);
    glVertex3f(40.8, 12.0, -123.9);
    glVertex3f(40.8, 12.0, -123.7);
    glVertex3f(40.8, 18.0, -123.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 28.0, -123.9);
    glVertex3f(40.8, 22.0, -123.9);
    glVertex3f(40.8, 22.0, -123.7);
    glVertex3f(40.8, 28.0, -123.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 38.0, -123.9);
    glVertex3f(40.8, 32.0, -123.9);
    glVertex3f(40.8, 32.0, -123.7);
    glVertex3f(40.8, 38.0, -123.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -123.9);
    glVertex3f(40.8, 42.0, -123.9);
    glVertex3f(40.8, 42.0, -123.7);
    glVertex3f(40.8, 48.0, -123.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -123.9);
    glVertex3f(40.8, 52.0, -123.9);
    glVertex3f(40.8, 52.0, -123.7);
    glVertex3f(40.8, 58.0, -123.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -123.9);
    glVertex3f(40.8, 62.0, -123.9);
    glVertex3f(40.8, 62.0, -123.7);
    glVertex3f(40.8, 66.0, -123.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 68.0, -122.7);
    glVertex3f(40.8, 62.0, -122.7);
    glVertex3f(40.8, 62.0, -122.3);
    glVertex3f(40.8, 66.0, -122.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 58.0, -122.6);
    glVertex3f(40.8, 52.0, -122.6);
    glVertex3f(40.8, 52.0, -122.4);
    glVertex3f(40.8, 58.0, -122.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 48.0, -122.6);
    glVertex3f(40.8, 42.0, -122.6);
    glVertex3f(40.8, 42.0, -122.4);
    glVertex3f(40.8, 48.0, -122.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 38.0, -122.6);
    glVertex3f(40.8, 32.0, -122.6);
    glVertex3f(40.8, 32.0, -122.4);
    glVertex3f(40.8, 38.0, -122.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 28.0, -122.6);
    glVertex3f(40.8, 22.0, -122.6);
    glVertex3f(40.8, 22.0, -122.4);
    glVertex3f(40.8, 28.0, -122.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.8, 18.0, -122.6);
    glVertex3f(40.8, 12.0, -122.6);
    glVertex3f(40.8, 12.0, -122.4);
    glVertex3f(40.8, 18.0, -122.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(52.5, 12.0, -94.8);
    glVertex3f(52.5, 17.0, -94.8);
    glVertex3f(52.1, 17.0, -94.8);
    glVertex3f(52.1, 12.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(52.4, 22.0, -94.8);
    glVertex3f(52.4, 27.0, -94.8);
    glVertex3f(52.2, 27.0, -94.8);
    glVertex3f(52.2, 22.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(52.4, 32.0, -94.8);
    glVertex3f(52.4, 37.0, -94.8);
    glVertex3f(52.2, 37.0, -94.8);
    glVertex3f(52.2, 32.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(52.4, 42.0, -94.8);
    glVertex3f(52.4, 47.0, -94.8);
    glVertex3f(52.2, 47.0, -94.8);
    glVertex3f(52.2, 42.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(52.4, 52.0, -94.8);
    glVertex3f(52.4, 57.0, -94.8);
    glVertex3f(52.2, 57.0, -94.8);
    glVertex3f(52.2, 52.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(52.4, 62.0, -94.8);
    glVertex3f(52.4, 67.0, -94.8);
    glVertex3f(52.2, 67.0, -94.8);
    glVertex3f(52.2, 62.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(49.8, 62.0, -94.8);
    glVertex3f(49.8, 67.0, -94.8);
    glVertex3f(49.6, 67.0, -94.8);
    glVertex3f(49.6, 62.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(49.8, 52.0, -94.8);
    glVertex3f(49.8, 57.0, -94.8);
    glVertex3f(49.6, 57.0, -94.8);
    glVertex3f(49.6, 52.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(49.8, 42.0, -94.8);
    glVertex3f(49.8, 47.0, -94.8);
    glVertex3f(49.6, 47.0, -94.8);
    glVertex3f(49.6, 42.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(49.8, 32.0, -94.8);
    glVertex3f(49.8, 37.0, -94.8);
    glVertex3f(49.6, 37.0, -94.8);
    glVertex3f(49.6, 32.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(49.8, 22.0, -94.8);
    glVertex3f(49.8, 27.0, -94.8);
    glVertex3f(49.6, 27.0, -94.8);
    glVertex3f(49.6, 22.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(49.8, 12.0, -94.8);
    glVertex3f(49.8, 17.0, -94.8);
    glVertex3f(49.6, 17.0, -94.8);
    glVertex3f(49.6, 12.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(51.1, 12.0, -94.8);
    glVertex3f(51.1, 17.0, -94.8);
    glVertex3f(50.9, 17.0, -94.8);
    glVertex3f(50.9, 12.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(51.1, 22.0, -94.8);
    glVertex3f(51.1, 27.0, -94.8);
    glVertex3f(50.9, 27.0, -94.8);
    glVertex3f(50.9, 22.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(51.1, 32.0, -94.8);
    glVertex3f(51.1, 37.0, -94.8);
    glVertex3f(50.9, 37.0, -94.8);
    glVertex3f(50.9, 32.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(51.1, 42.0, -94.8);
    glVertex3f(51.1, 47.0, -94.8);
    glVertex3f(50.9, 47.0, -94.8);
    glVertex3f(50.9, 42.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(51.1, 52.0, -94.8);
    glVertex3f(51.1, 57.0, -94.8);
    glVertex3f(50.9, 57.0, -94.8);
    glVertex3f(50.9, 52.0, -94.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(51.1, 62.0, -94.8);
    glVertex3f(51.1, 67.0, -94.8);
    glVertex3f(50.9, 67.0, -94.8);
    glVertex3f(50.9, 62.0, -94.8);
    glEnd();

    //gedung utama
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.3, 0.3);
    glVertex3f(-75.0, 35.0, -25.0);
    glVertex3f(-75.0, 0.0, -25.0);
    glVertex3f(-75.0, 0.0, -20.0);
    glVertex3f(-75.0, 35.0, -20.0);
    
    glVertex3f(-75.0, 35.0, -40.0);
    glVertex3f(-75.0, 0.0, -40.0);
    glVertex3f(-75.0, 0.0, -35.0);
    glVertex3f(-75.0, 35.0, -35.0);

    glVertex3f(-75.0, 35.0, -27.0);
    glVertex3f(-75.0, 5.0, -27.0);
    glVertex3f(-75.0, 5.0, -25.0);
    glVertex3f(-75.0, 35.0, -25.0);

    glVertex3f(-75.0, 35.0, -35.0);
    glVertex3f(-75.0, 5.0, -35.0);
    glVertex3f(-75.0, 5.0, -33.0);
    glVertex3f(-75.0, 35.0, -33.0);

    glVertex3f(-75.0, 35.0, -35.0);
    glVertex3f(-75.0, 25.0, -35.0);
    glVertex3f(-75.0, 25.0, -25.0);
    glVertex3f(-75.0, 35.0, -25.0);

    glVertex3f(-95.0, 35.0, -40.0);
    glVertex3f(-95.0, 0.0, -40.0);
    glVertex3f(-95.0, 0.0, -20.0);
    glVertex3f(-95.0, 35.0, -20.0);
    
    glVertex3f(-95.0, 35.0, -20.0);
    glVertex3f(-95.0, 0.0, -20.0);
    glVertex3f(-75.0, 0.0, -20.0);
    glVertex3f(-75.0, 35.0, -20.0);
    
    glVertex3f(-95.0, 35.0, -40.0);
    glVertex3f(-95.0, 0.0, -40.0);
    glVertex3f(-75.0, 0.0, -40.0);
    glVertex3f(-75.0, 35.0, -40.0);

    glVertex3f(-75.0, 11.0, -33.0);
    glVertex3f(-75.0, 8.5, -33.0);
    glVertex3f(-75.0, 8.5, -27.0);
    glVertex3f(-75.0, 11.0, -27.0);

    glVertex3f(-75.0, 21.0, -33.0);
    glVertex3f(-75.0, 19.5, -33.0);
    glVertex3f(-75.0, 19.5, -27.0);
    glVertex3f(-75.0, 21.0, -27.0);

    glVertex3f(-85.0, 16.0, -40.0);
    glVertex3f(-85.0, 13.5, -40.0);
    glVertex3f(-85.0, 13.5, -80.0);
    glVertex3f(-85.0, 16.0, -80.0);

    glVertex3f(-85.0, 22.0, -40.0);
    glVertex3f(-85.0, 19.5, -40.0);
    glVertex3f(-85.0, 19.5, -80.0);
    glVertex3f(-85.0, 22.0, -80.0);

    glVertex3f(-85.0, 26.5, -40.0);
    glVertex3f(-85.0, 25.5, -40.0);
    glVertex3f(-85.0, 25.5, -80.0);
    glVertex3f(-85.0, 26.5, -80.0);

    glVertex3f(-85.1, 26.5, -42.0);
    glVertex3f(-85.1, 0.0, -42.0);
    glVertex3f(-85.1, 0.0, -40.0);
    glVertex3f(-85.1, 26.5, -40.0);

    glVertex3f(-85.1, 26.5, -80.0);
    glVertex3f(-85.1, 0.0, -80.0);
    glVertex3f(-85.1, 0.0, -78.5);
    glVertex3f(-85.1, 26.5, -78.5);

    glVertex3f(-85.1, 26.5, -55.5);
    glVertex3f(-85.1, 0.0, -55.5);
    glVertex3f(-85.1, 0.0, -52.5);
    glVertex3f(-85.1, 26.5, -52.5);

    glVertex3f(-85.1, 26.5, -68.5);
    glVertex3f(-85.1, 0.0, -68.5);
    glVertex3f(-85.1, 0.0, -65.5);
    glVertex3f(-85.1, 26.5, -65.5);

    glVertex3f(-124.8, 16.0, -40.0);
    glVertex3f(-124.8, 13.5, -40.0);
    glVertex3f(-124.8, 13.5, -80.0);
    glVertex3f(-124.8, 16.0, -80.0);

    glVertex3f(-124.8, 22.0, -40.0);
    glVertex3f(-124.8, 19.5, -40.0);
    glVertex3f(-124.8, 19.5, -80.0);
    glVertex3f(-124.8, 22.0, -80.0);

    glVertex3f(-124.8, 26.5, -40.0);
    glVertex3f(-124.8, 25.5, -40.0);
    glVertex3f(-124.8, 25.5, -80.0);
    glVertex3f(-124.8, 26.5, -80.0);

    glVertex3f(-124.8, 26.5, -42.0);
    glVertex3f(-124.8, 0.0, -42.0);
    glVertex3f(-124.8, 0.0, -40.0);
    glVertex3f(-124.8, 26.5, -40.0);

    glVertex3f(-124.8, 26.5, -80.0);
    glVertex3f(-124.8, 0.0, -80.0);
    glVertex3f(-124.8, 0.0, -78.5);
    glVertex3f(-124.8, 26.5, -78.5);

    glVertex3f(-124.8, 26.5, -55.5);
    glVertex3f(-124.8, 0.0, -55.5);
    glVertex3f(-124.8, 0.0, -52.5);
    glVertex3f(-124.8, 26.5, -52.5);


    glVertex3f(-124.8, 26.5, -68.5);
    glVertex3f(-124.8, 0.0, -68.5);
    glVertex3f(-124.8, 0.0, -65.5);
    glVertex3f(-124.8, 26.5, -65.5);

    glEnd();
    //2
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-85.0, 2.0, -40.0);
    glVertex3f(-85.0, 0.0, -40.0);
    glVertex3f(-85.0, 0.0, -80.0);
    glVertex3f(-85.0, 2.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-124.9, 2.0, -40.0);
    glVertex3f(-124.9, 0.0, -40.0);
    glVertex3f(-124.9, 0.0, -80.0);
    glVertex3f(-124.9, 2.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.6, 0.6, 1.0, 0.6);
    glVertex3f(-85.2, 25.0, -42.0);
    glVertex3f(-85.2, 2.0, -42.0);
    glVertex3f(-85.2, 2.0, -80.0);
    glVertex3f(-85.2, 25.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(0.6, 0.6, 1.0, 0.6);
    glVertex3f(-124.7, 25.0, -42.0);
    glVertex3f(-124.7, 2.0, -42.0);
    glVertex3f(-124.7, 2.0, -80.0);
    glVertex3f(-124.7, 25.0, -80.0);
    glEnd();


    //list
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-84.9, 13.0, -42.0);
    glVertex3f(-84.9, 2.0, -42.0);
    glVertex3f(-84.9, 2.0, -42.5);
    glVertex3f(-84.9, 13.0, -42.5);

    glVertex3f(-84.9, 13.0, -52.0);
    glVertex3f(-84.9, 2.0, -52.0);
    glVertex3f(-84.9, 2.0, -52.5);
    glVertex3f(-84.9, 13.0, -52.5);

    glVertex3f(-84.9, 13.0, -44.0);
    glVertex3f(-84.9, 2.0, -44.0);
    glVertex3f(-84.9, 2.0, -44.5);
    glVertex3f(-84.9, 13.0, -44.5);

    glVertex3f(-84.9, 13.0, -50.0);
    glVertex3f(-84.9, 2.0, -50.0);
    glVertex3f(-84.9, 2.0, -50.5);
    glVertex3f(-84.9, 13.0, -50.5);

    glVertex3f(-84.9, 13.0, -47.0);
    glVertex3f(-84.9, 2.0, -47.0);
    glVertex3f(-84.9, 2.0, -47.5);
    glVertex3f(-84.9, 13.0, -47.5);

    glVertex3f(-84.9, 13.0, -55.0);
    glVertex3f(-84.9, 2.0, -55.0);
    glVertex3f(-84.9, 2.0, -55.5);
    glVertex3f(-84.9, 13.0, -55.5);

    glVertex3f(-84.9, 13.0, -57.0);
    glVertex3f(-84.9, 2.0, -57.0);
    glVertex3f(-84.9, 2.0, -57.5);
    glVertex3f(-84.9, 13.0, -57.5);

    glVertex3f(-84.9, 13.0, -60.0);
    glVertex3f(-84.9, 2.0, -60.0);
    glVertex3f(-84.9, 2.0, -60.5);
    glVertex3f(-84.9, 13.0, -60.5);

    glVertex3f(-84.9, 13.0, -63.0);
    glVertex3f(-84.9, 2.0, -63.0);
    glVertex3f(-84.9, 2.0, -63.5);
    glVertex3f(-84.9, 13.0, -63.5);

    glVertex3f(-84.9, 13.0, -65.0);
    glVertex3f(-84.9, 2.0, -65.0);
    glVertex3f(-84.9, 2.0, -65.5);
    glVertex3f(-84.9, 13.0, -65.5);
    
    glVertex3f(-84.9, 13.0, -68.0);
    glVertex3f(-84.9, 2.0, -68.0);
    glVertex3f(-84.9, 2.0, -68.5);
    glVertex3f(-84.9, 13.0, -68.5);
    
    glVertex3f(-84.9, 13.0, -78.0);
    glVertex3f(-84.9, 2.0, -78.0);
    glVertex3f(-84.9, 2.0, -78.5);
    glVertex3f(-84.9, 13.0, -78.5);

    glVertex3f(-84.9, 13.0, -76.0);
    glVertex3f(-84.9, 2.0, -76.0);
    glVertex3f(-84.9, 2.0, -76.5);
    glVertex3f(-84.9, 13.0, -76.5);

    glVertex3f(-84.9, 13.0, -70.0);
    glVertex3f(-84.9, 2.0, -70.0);
    glVertex3f(-84.9, 2.0, -70.5);
    glVertex3f(-84.9, 13.0, -70.5);
    
    glVertex3f(-84.9, 13.0, -73.0);
    glVertex3f(-84.9, 2.0, -73.0);
    glVertex3f(-84.9, 2.0, -73.5);
    glVertex3f(-84.9, 13.0, -73.5);
    
    glVertex3f(-84.9, 13.5, -68.0);
    glVertex3f(-84.9, 13.0, -68.0);
    glVertex3f(-84.9, 13.0, -78.5);
    glVertex3f(-84.9, 13.5, -78.5);

    glVertex3f(-84.9, 2.5, -68.0);
    glVertex3f(-84.9, 2.0, -68.0);
    glVertex3f(-84.9, 2.0, -78.5);
    glVertex3f(-84.9, 2.5, -78.5);

    glVertex3f(-84.9, 2.5, -55.0);
    glVertex3f(-84.9, 2.0, -55.0);
    glVertex3f(-84.9, 2.0, -65.5);
    glVertex3f(-84.9, 2.5, -65.5);

    glVertex3f(-84.9, 13.5, -55.0);
    glVertex3f(-84.9, 13.0, -55.0);
    glVertex3f(-84.9, 13.0, -65.5);
    glVertex3f(-84.9, 13.5, -65.5);

    glVertex3f(-84.9, 13.5, -42.0);
    glVertex3f(-84.9, 13.0, -42.0);
    glVertex3f(-84.9, 13.0, -52.5);
    glVertex3f(-84.9, 13.5, -52.5);

    glVertex3f(-84.9, 2.5, -42.0);
    glVertex3f(-84.9, 2.0, -42.0);
    glVertex3f(-84.9, 2.0, -52.5);
    glVertex3f(-84.9, 2.5, -52.5);
    
    //2
    glVertex3f(-84.9, 16.5, -42.0);
    glVertex3f(-84.9, 16.0, -42.0);
    glVertex3f(-84.9, 16.0, -52.5);
    glVertex3f(-84.9, 16.5, -52.5);

    glVertex3f(-84.9, 19.5, -42.0);
    glVertex3f(-84.9, 19.0, -42.0);
    glVertex3f(-84.9, 19.0, -52.5);
    glVertex3f(-84.9, 19.5, -52.5);

    glVertex3f(-84.9, 22.5, -42.0);
    glVertex3f(-84.9, 22.0, -42.0);
    glVertex3f(-84.9, 22.0, -52.5);
    glVertex3f(-84.9, 22.5, -52.5);

    glVertex3f(-84.9, 25.5, -42.0);
    glVertex3f(-84.9, 25.0, -42.0);
    glVertex3f(-84.9, 25.0, -52.5);
    glVertex3f(-84.9, 25.5, -52.5);

    glVertex3f(-84.9, 16.5, -55.0);
    glVertex3f(-84.9, 16.0, -55.0);
    glVertex3f(-84.9, 16.0, -65.5);
    glVertex3f(-84.9, 16.5, -65.5);

    glVertex3f(-84.9, 19.5, -55.0);
    glVertex3f(-84.9, 19.0, -55.0);
    glVertex3f(-84.9, 19.0, -65.5);
    glVertex3f(-84.9, 19.5, -65.5);

    glVertex3f(-84.9, 22.5, -55.0);
    glVertex3f(-84.9, 22.0, -55.0);
    glVertex3f(-84.9, 22.0, -65.5);
    glVertex3f(-84.9, 22.5, -65.5);

    glVertex3f(-84.9, 25.5, -55.0);
    glVertex3f(-84.9, 25.0, -55.0);
    glVertex3f(-84.9, 25.0, -65.5);
    glVertex3f(-84.9, 25.5, -65.5);

    glVertex3f(-84.9, 16.5, -68.0);
    glVertex3f(-84.9, 16.0, -68.0);
    glVertex3f(-84.9, 16.0, -78.5);
    glVertex3f(-84.9, 16.5, -78.5);

    glVertex3f(-84.9, 19.5, -68.0);
    glVertex3f(-84.9, 19.0, -68.0);
    glVertex3f(-84.9, 19.0, -78.5);
    glVertex3f(-84.9, 19.5, -78.5);

    glVertex3f(-84.9, 22.5, -68.0);
    glVertex3f(-84.9, 22.0, -68.0);
    glVertex3f(-84.9, 22.0, -78.5);
    glVertex3f(-84.9, 22.5, -78.5);

    glVertex3f(-84.9, 25.5, -68.0);
    glVertex3f(-84.9, 25.0, -68.0);
    glVertex3f(-84.9, 25.0, -78.5);
    glVertex3f(-84.9, 25.5, -78.5);

    //list ats sping
    glVertex3f(-84.9, 25.5, -78.0);
    glVertex3f(-84.9, 22.0, -78.0);
    glVertex3f(-84.9, 22.0, -78.5);
    glVertex3f(-84.9, 25.5, -78.5);

    glVertex3f(-84.9, 25.5, -76.0);
    glVertex3f(-84.9, 22.0, -76.0);
    glVertex3f(-84.9, 22.0, -76.5);
    glVertex3f(-84.9, 25.5, -76.5);

    glVertex3f(-84.9, 25.5, -73.0);
    glVertex3f(-84.9, 22.0, -73.0);
    glVertex3f(-84.9, 22.0, -73.5);
    glVertex3f(-84.9, 25.5, -73.5);

    glVertex3f(-84.9, 25.5, -70.0);
    glVertex3f(-84.9, 22.0, -70.0);
    glVertex3f(-84.9, 22.0, -70.5);
    glVertex3f(-84.9, 25.5, -70.5);
    
    glVertex3f(-84.9, 25.5, -68.0);
    glVertex3f(-84.9, 22.0, -68.0);
    glVertex3f(-84.9, 22.0, -68.5);
    glVertex3f(-84.9, 25.5, -68.5);

    glVertex3f(-84.9, 25.5, -65.0);
    glVertex3f(-84.9, 22.0, -65.0);
    glVertex3f(-84.9, 22.0, -65.5);
    glVertex3f(-84.9, 25.5, -65.5);

    glVertex3f(-84.9, 25.5, -63.0);
    glVertex3f(-84.9, 22.0, -63.0);
    glVertex3f(-84.9, 22.0, -63.5);
    glVertex3f(-84.9, 25.5, -63.5);

    glVertex3f(-84.9, 25.5, -60.0);
    glVertex3f(-84.9, 22.0, -60.0);
    glVertex3f(-84.9, 22.0, -60.5);
    glVertex3f(-84.9, 25.5, -60.5);

    glVertex3f(-84.9, 25.5, -57.0);
    glVertex3f(-84.9, 22.0, -57.0);
    glVertex3f(-84.9, 22.0, -57.5);
    glVertex3f(-84.9, 25.5, -57.5);

    glVertex3f(-84.9, 25.5, -55.0);
    glVertex3f(-84.9, 22.0, -55.0);
    glVertex3f(-84.9, 22.0, -55.5);
    glVertex3f(-84.9, 25.5, -55.5);

    glVertex3f(-84.9, 25.5, -52.0);
    glVertex3f(-84.9, 22.0, -52.0);
    glVertex3f(-84.9, 22.0, -52.5);
    glVertex3f(-84.9, 25.5, -52.5);

    glVertex3f(-84.9, 25.5, -50.0);
    glVertex3f(-84.9, 22.0, -50.0);
    glVertex3f(-84.9, 22.0, -50.5);
    glVertex3f(-84.9, 25.5, -50.5);

    glVertex3f(-84.9, 25.5, -47.0);
    glVertex3f(-84.9, 22.0, -47.0);
    glVertex3f(-84.9, 22.0, -47.5);
    glVertex3f(-84.9, 25.5, -47.5);

    glVertex3f(-84.9, 25.5, -44.0);
    glVertex3f(-84.9, 22.0, -44.0);
    glVertex3f(-84.9, 22.0, -44.5);
    glVertex3f(-84.9, 25.5, -44.5);

    glVertex3f(-84.9, 25.5, -42.0);
    glVertex3f(-84.9, 22.0, -42.0);
    glVertex3f(-84.9, 22.0, -42.5);
    glVertex3f(-84.9, 25.5, -42.5);

    //a
    glVertex3f(-84.9, 19.5, -78.0);
    glVertex3f(-84.9, 16.0, -78.0);
    glVertex3f(-84.9, 16.0, -78.5);
    glVertex3f(-84.9, 19.5, -78.5);

    glVertex3f(-84.9, 19.5, -76.0);
    glVertex3f(-84.9, 16.0, -76.0);
    glVertex3f(-84.9, 16.0, -76.5);
    glVertex3f(-84.9, 19.5, -76.5);

    glVertex3f(-84.9, 19.5, -73.0);
    glVertex3f(-84.9, 16.0, -73.0);
    glVertex3f(-84.9, 16.0, -73.5);
    glVertex3f(-84.9, 19.5, -73.5);

    glVertex3f(-84.9, 19.5, -70.0);
    glVertex3f(-84.9, 16.0, -70.0);
    glVertex3f(-84.9, 16.0, -70.5);
    glVertex3f(-84.9, 19.5, -70.5);

    glVertex3f(-84.9, 19.5, -68.0);
    glVertex3f(-84.9, 16.0, -68.0);
    glVertex3f(-84.9, 16.0, -68.5);
    glVertex3f(-84.9, 19.5, -68.5);

    glVertex3f(-84.9, 19.5, -65.0);
    glVertex3f(-84.9, 16.0, -65.0);
    glVertex3f(-84.9, 16.0, -65.5);
    glVertex3f(-84.9, 19.5, -65.5);

    glVertex3f(-84.9, 19.5, -63.0);
    glVertex3f(-84.9, 16.0, -63.0);
    glVertex3f(-84.9, 16.0, -63.5);
    glVertex3f(-84.9, 19.5, -63.5);

    glVertex3f(-84.9, 19.5, -60.0);
    glVertex3f(-84.9, 16.0, -60.0);
    glVertex3f(-84.9, 16.0, -60.5);
    glVertex3f(-84.9, 19.5, -60.5);

    glVertex3f(-84.9, 19.5, -57.0);
    glVertex3f(-84.9, 16.0, -57.0);
    glVertex3f(-84.9, 16.0, -57.5);
    glVertex3f(-84.9, 19.5, -57.5);

    glVertex3f(-84.9, 19.5, -55.0);
    glVertex3f(-84.9, 16.0, -55.0);
    glVertex3f(-84.9, 16.0, -55.5);
    glVertex3f(-84.9, 19.5, -55.5);

    glVertex3f(-84.9, 19.5, -52.0);
    glVertex3f(-84.9, 16.0, -52.0);
    glVertex3f(-84.9, 16.0, -52.5);
    glVertex3f(-84.9, 19.5, -52.5);

    glVertex3f(-84.9, 19.5, -50.0);
    glVertex3f(-84.9, 16.0, -50.0);
    glVertex3f(-84.9, 16.0, -50.5);
    glVertex3f(-84.9, 19.5, -50.5);

    glVertex3f(-84.9, 19.5, -47.0);
    glVertex3f(-84.9, 16.0, -47.0);
    glVertex3f(-84.9, 16.0, -47.5);
    glVertex3f(-84.9, 19.5, -47.5);

    glVertex3f(-84.9, 19.5, -44.0);
    glVertex3f(-84.9, 16.0, -44.0);
    glVertex3f(-84.9, 16.0, -44.5);
    glVertex3f(-84.9, 19.5, -44.5);

    glVertex3f(-84.9, 19.5, -42.0);
    glVertex3f(-84.9, 16.0, -42.0);
    glVertex3f(-84.9, 16.0, -42.5);
    glVertex3f(-84.9, 19.5, -42.5);
    glEnd();

    //3 belakng
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-124.9, 13.0, -42.0);
    glVertex3f(-124.9, 2.0, -42.0);
    glVertex3f(-124.9, 2.0, -42.5);
    glVertex3f(-124.9, 13.0, -42.5);

    glVertex3f(-124.9, 13.0, -52.0);
    glVertex3f(-124.9, 2.0, -52.0);
    glVertex3f(-124.9, 2.0, -52.5);
    glVertex3f(-124.9, 13.0, -52.5);

    glVertex3f(-124.9, 13.0, -44.0);
    glVertex3f(-124.9, 2.0, -44.0);
    glVertex3f(-124.9, 2.0, -44.5);
    glVertex3f(-124.9, 13.0, -44.5);

    glVertex3f(-124.9, 13.0, -50.0);
    glVertex3f(-124.9, 2.0, -50.0);
    glVertex3f(-124.9, 2.0, -50.5);
    glVertex3f(-124.9, 13.0, -50.5);

    glVertex3f(-124.9, 13.0, -47.0);
    glVertex3f(-124.9, 2.0, -47.0);
    glVertex3f(-124.9, 2.0, -47.5);
    glVertex3f(-124.9, 13.0, -47.5);

    glVertex3f(-124.9, 13.0, -55.0);
    glVertex3f(-124.9, 2.0, -55.0);
    glVertex3f(-124.9, 2.0, -55.5);
    glVertex3f(-124.9, 13.0, -55.5);

    glVertex3f(-124.9, 13.0, -57.0);
    glVertex3f(-124.9, 2.0, -57.0);
    glVertex3f(-124.9, 2.0, -57.5);
    glVertex3f(-124.9, 13.0, -57.5);

    glVertex3f(-124.9, 13.0, -60.0);
    glVertex3f(-124.9, 2.0, -60.0);
    glVertex3f(-124.9, 2.0, -60.5);
    glVertex3f(-124.9, 13.0, -60.5);

    glVertex3f(-124.9, 13.0, -63.0);
    glVertex3f(-124.9, 2.0, -63.0);
    glVertex3f(-124.9, 2.0, -63.5);
    glVertex3f(-124.9, 13.0, -63.5);

    glVertex3f(-124.9, 13.0, -65.0);
    glVertex3f(-124.9, 2.0, -65.0);
    glVertex3f(-124.9, 2.0, -65.5);
    glVertex3f(-124.9, 13.0, -65.5);

    glVertex3f(-124.9, 13.0, -68.0);
    glVertex3f(-124.9, 2.0, -68.0);
    glVertex3f(-124.9, 2.0, -68.5);
    glVertex3f(-124.9, 13.0, -68.5);

    glVertex3f(-124.9, 13.0, -78.0);
    glVertex3f(-124.9, 2.0, -78.0);
    glVertex3f(-124.9, 2.0, -78.5);
    glVertex3f(-124.9, 13.0, -78.5);

    glVertex3f(-124.9, 13.0, -76.0);
    glVertex3f(-124.9, 2.0, -76.0);
    glVertex3f(-124.9, 2.0, -76.5);
    glVertex3f(-124.9, 13.0, -76.5);

    glVertex3f(-124.9, 13.0, -70.0);
    glVertex3f(-124.9, 2.0, -70.0);
    glVertex3f(-124.9, 2.0, -70.5);
    glVertex3f(-124.9, 13.0, -70.5);

    glVertex3f(-124.9, 13.0, -73.0);
    glVertex3f(-124.9, 2.0, -73.0);
    glVertex3f(-124.9, 2.0, -73.5);
    glVertex3f(-124.9, 13.0, -73.5);

    glVertex3f(-124.9, 13.5, -68.0);
    glVertex3f(-124.9, 13.0, -68.0);
    glVertex3f(-124.9, 13.0, -78.5);
    glVertex3f(-124.9, 13.5, -78.5);

    glVertex3f(-124.9, 2.5, -68.0);
    glVertex3f(-124.9, 2.0, -68.0);
    glVertex3f(-124.9, 2.0, -78.5);
    glVertex3f(-124.9, 2.5, -78.5);

    glVertex3f(-124.9, 2.5, -55.0);
    glVertex3f(-124.9, 2.0, -55.0);
    glVertex3f(-124.9, 2.0, -65.5);
    glVertex3f(-124.9, 2.5, -65.5);

    glVertex3f(-124.9, 13.5, -55.0);
    glVertex3f(-124.9, 13.0, -55.0);
    glVertex3f(-124.9, 13.0, -65.5);
    glVertex3f(-124.9, 13.5, -65.5);

    glVertex3f(-124.9, 13.5, -42.0);
    glVertex3f(-124.9, 13.0, -42.0);
    glVertex3f(-124.9, 13.0, -52.5);
    glVertex3f(-124.9, 13.5, -52.5);

    glVertex3f(-124.9, 2.5, -42.0);
    glVertex3f(-124.9, 2.0, -42.0);
    glVertex3f(-124.9, 2.0, -52.5);
    glVertex3f(-124.9, 2.5, -52.5);

    glVertex3f(-124.9, 16.5, -42.0);
    glVertex3f(-124.9, 16.0, -42.0);
    glVertex3f(-124.9, 16.0, -52.5);
    glVertex3f(-124.9, 16.5, -52.5);

    glVertex3f(-124.9, 19.5, -42.0);
    glVertex3f(-124.9, 19.0, -42.0);
    glVertex3f(-124.9, 19.0, -52.5);
    glVertex3f(-124.9, 19.5, -52.5);

    glVertex3f(-124.9, 22.5, -42.0);
    glVertex3f(-124.9, 22.0, -42.0);
    glVertex3f(-124.9, 22.0, -52.5);
    glVertex3f(-124.9, 22.5, -52.5);

    glVertex3f(-124.9, 25.5, -42.0);
    glVertex3f(-124.9, 25.0, -42.0);
    glVertex3f(-124.9, 25.0, -52.5);
    glVertex3f(-124.9, 25.5, -52.5);

    glVertex3f(-124.9, 16.5, -55.0);
    glVertex3f(-124.9, 16.0, -55.0);
    glVertex3f(-124.9, 16.0, -65.5);
    glVertex3f(-124.9, 16.5, -65.5);

    glVertex3f(-124.9, 19.5, -55.0);
    glVertex3f(-124.9, 19.0, -55.0);
    glVertex3f(-124.9, 19.0, -65.5);
    glVertex3f(-124.9, 19.5, -65.5);

    glVertex3f(-124.9, 22.5, -55.0);
    glVertex3f(-124.9, 22.0, -55.0);
    glVertex3f(-124.9, 22.0, -65.5);
    glVertex3f(-124.9, 22.5, -65.5);

    glVertex3f(-124.9, 25.5, -55.0);
    glVertex3f(-124.9, 25.0, -55.0);
    glVertex3f(-124.9, 25.0, -65.5);
    glVertex3f(-124.9, 25.5, -65.5);

    glVertex3f(-124.9, 16.5, -68.0);
    glVertex3f(-124.9, 16.0, -68.0);
    glVertex3f(-124.9, 16.0, -78.5);
    glVertex3f(-124.9, 16.5, -78.5);

    glVertex3f(-124.9, 19.5, -68.0);
    glVertex3f(-124.9, 19.0, -68.0);
    glVertex3f(-124.9, 19.0, -78.5);
    glVertex3f(-124.9, 19.5, -78.5);

    glVertex3f(-124.9, 22.5, -68.0);
    glVertex3f(-124.9, 22.0, -68.0);
    glVertex3f(-124.9, 22.0, -78.5);
    glVertex3f(-124.9, 22.5, -78.5);

    glVertex3f(-124.9, 25.5, -68.0);
    glVertex3f(-124.9, 25.0, -68.0);
    glVertex3f(-124.9, 25.0, -78.5);
    glVertex3f(-124.9, 25.5, -78.5);
   
    glVertex3f(-124.9, 19.5, -78.0);
    glVertex3f(-124.9, 16.0, -78.0);
    glVertex3f(-124.9, 16.0, -78.5);
    glVertex3f(-124.9, 19.5, -78.5);

    glVertex3f(-124.9, 19.5, -76.0);
    glVertex3f(-124.9, 16.0, -76.0);
    glVertex3f(-124.9, 16.0, -76.5);
    glVertex3f(-124.9, 19.5, -76.5);

    glVertex3f(-124.9, 19.5, -73.0);
    glVertex3f(-124.9, 16.0, -73.0);
    glVertex3f(-124.9, 16.0, -73.5);
    glVertex3f(-124.9, 19.5, -73.5);

    glVertex3f(-124.9, 19.5, -70.0);
    glVertex3f(-124.9, 16.0, -70.0);
    glVertex3f(-124.9, 16.0, -70.5);
    glVertex3f(-124.9, 19.5, -70.5);

    glVertex3f(-124.9, 19.5, -68.0);
    glVertex3f(-124.9, 16.0, -68.0);
    glVertex3f(-124.9, 16.0, -68.5);
    glVertex3f(-124.9, 19.5, -68.5);

    glVertex3f(-124.9, 19.5, -65.0);
    glVertex3f(-124.9, 16.0, -65.0);
    glVertex3f(-124.9, 16.0, -65.5);
    glVertex3f(-124.9, 19.5, -65.5);

    glVertex3f(-124.9, 19.5, -63.0);
    glVertex3f(-124.9, 16.0, -63.0);
    glVertex3f(-124.9, 16.0, -63.5);
    glVertex3f(-124.9, 19.5, -63.5);

    glVertex3f(-124.9, 19.5, -60.0);
    glVertex3f(-124.9, 16.0, -60.0);
    glVertex3f(-124.9, 16.0, -60.5);
    glVertex3f(-124.9, 19.5, -60.5);

    glVertex3f(-124.9, 19.5, -57.0);
    glVertex3f(-124.9, 16.0, -57.0);
    glVertex3f(-124.9, 16.0, -57.5);
    glVertex3f(-124.9, 19.5, -57.5);

    glVertex3f(-124.9, 19.5, -55.0);
    glVertex3f(-124.9, 16.0, -55.0);
    glVertex3f(-124.9, 16.0, -55.5);
    glVertex3f(-124.9, 19.5, -55.5);

    glVertex3f(-124.9, 19.5, -52.0);
    glVertex3f(-124.9, 16.0, -52.0);
    glVertex3f(-124.9, 16.0, -52.5);
    glVertex3f(-124.9, 19.5, -52.5);

    glVertex3f(-124.9, 19.5, -50.0);
    glVertex3f(-124.9, 16.0, -50.0);
    glVertex3f(-124.9, 16.0, -50.5);
    glVertex3f(-124.9, 19.5, -50.5);

    glVertex3f(-124.9, 19.5, -47.0);
    glVertex3f(-124.9, 16.0, -47.0);
    glVertex3f(-124.9, 16.0, -47.5);
    glVertex3f(-124.9, 19.5, -47.5);

    glVertex3f(-124.9, 19.5, -44.0);
    glVertex3f(-124.9, 16.0, -44.0);
    glVertex3f(-124.9, 16.0, -44.5);
    glVertex3f(-124.9, 19.5, -44.5);

    glVertex3f(-124.9, 19.5, -42.0);
    glVertex3f(-124.9, 16.0, -42.0);
    glVertex3f(-124.9, 16.0, -42.5);
    glVertex3f(-124.9, 19.5, -42.5);
   

     glVertex3f(-124.9, 25.5, -78.0);
    glVertex3f(-124.9, 22.0, -78.0);
    glVertex3f(-124.9, 22.0, -78.5);
    glVertex3f(-124.9, 25.5, -78.5);

    glVertex3f(-124.9, 25.5, -76.0);
    glVertex3f(-124.9, 22.0, -76.0);
    glVertex3f(-124.9, 22.0, -76.5);
    glVertex3f(-124.9, 25.5, -76.5);

    glVertex3f(-124.9, 25.5, -73.0);
    glVertex3f(-124.9, 22.0, -73.0);
    glVertex3f(-124.9, 22.0, -73.5);
    glVertex3f(-124.9, 25.5, -73.5);

    glVertex3f(-124.9, 25.5, -70.0);
    glVertex3f(-124.9, 22.0, -70.0);
    glVertex3f(-124.9, 22.0, -70.5);
    glVertex3f(-124.9, 25.5, -70.5);
    
    glVertex3f(-124.9, 25.5, -68.0);
    glVertex3f(-124.9, 22.0, -68.0);
    glVertex3f(-124.9, 22.0, -68.5);
    glVertex3f(-124.9, 25.5, -68.5);

    glVertex3f(-124.9, 25.5, -65.0);
    glVertex3f(-124.9, 22.0, -65.0);
    glVertex3f(-124.9, 22.0, -65.5);
    glVertex3f(-124.9, 25.5, -65.5);

    glVertex3f(-124.9, 25.5, -63.0);
    glVertex3f(-124.9, 22.0, -63.0);
    glVertex3f(-124.9, 22.0, -63.5);
    glVertex3f(-124.9, 25.5, -63.5);

    glVertex3f(-124.9, 25.5, -60.0);
    glVertex3f(-124.9, 22.0, -60.0);
    glVertex3f(-124.9, 22.0, -60.5);
    glVertex3f(-124.9, 25.5, -60.5);

    glVertex3f(-124.9, 25.5, -57.0);
    glVertex3f(-124.9, 22.0, -57.0);
    glVertex3f(-124.9, 22.0, -57.5);
    glVertex3f(-124.9, 25.5, -57.5);

    glVertex3f(-124.9, 25.5, -55.0);
    glVertex3f(-124.9, 22.0, -55.0);
    glVertex3f(-124.9, 22.0, -55.5);
    glVertex3f(-124.9, 25.5, -55.5);

    glVertex3f(-124.9, 25.5, -52.0);
    glVertex3f(-124.9, 22.0, -52.0);
    glVertex3f(-124.9, 22.0, -52.5);
    glVertex3f(-124.9, 25.5, -52.5);

    glVertex3f(-124.9, 25.5, -50.0);
    glVertex3f(-124.9, 22.0, -50.0);
    glVertex3f(-124.9, 22.0, -50.5);
    glVertex3f(-124.9, 25.5, -50.5);

    glVertex3f(-124.9, 25.5, -47.0);
    glVertex3f(-124.9, 22.0, -47.0);
    glVertex3f(-124.9, 22.0, -47.5);
    glVertex3f(-124.9, 25.5, -47.5);

    glVertex3f(-124.9, 25.5, -44.0);
    glVertex3f(-124.9, 22.0, -44.0);
    glVertex3f(-124.9, 22.0, -44.5);
    glVertex3f(-124.9, 25.5, -44.5);

    glVertex3f(-124.9, 25.5, -42.0);
    glVertex3f(-124.9, 22.0, -42.0);
    glVertex3f(-124.9, 22.0, -42.5);
    glVertex3f(-124.9, 25.5, -42.5);
    glEnd();

    //3 belakng kanan
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-124.9, 13.0, -17.5);
    glVertex3f(-124.9, 2.0, -17.5);
    glVertex3f(-124.9, 2.0, -18.0);
    glVertex3f(-124.9, 13.0, -18.0);

    glVertex3f(-124.9, 13.0, -7.5);
    glVertex3f(-124.9, 2.0, -7.5);
    glVertex3f(-124.9, 2.0, -8.0);
    glVertex3f(-124.9, 13.0, -8.0);

    glVertex3f(-124.9, 13.0, -4.5);
    glVertex3f(-124.9, 2.0, -4.5);
    glVertex3f(-124.9, 2.0, -5.0);
    glVertex3f(-124.9, 13.0, -5.0);

    glVertex3f(-124.9, 13.0, 5.5);
    glVertex3f(-124.9, 2.0, 5.5);
    glVertex3f(-124.9, 2.0, 5.0);
    glVertex3f(-124.9, 13.0, 5.0);

    glVertex3f(-124.9, 13.0, 8.5);
    glVertex3f(-124.9, 2.0, 8.5);
    glVertex3f(-124.9, 2.0, 8.0);
    glVertex3f(-124.9, 13.0, 8.0);

    glVertex3f(-124.9, 13.0, 18.5);
    glVertex3f(-124.9, 2.0, 18.5);
    glVertex3f(-124.9, 2.0, 18.0);
    glVertex3f(-124.9, 13.0, 18.0);

    glVertex3f(-124.9, 13.0, -15.5);
    glVertex3f(-124.9, 2.0, -15.5);
    glVertex3f(-124.9, 2.0, -16.0);
    glVertex3f(-124.9, 13.0, -16.0);

    glVertex3f(-124.9, 13.0, -12.5);
    glVertex3f(-124.9, 2.0, -12.5);
    glVertex3f(-124.9, 2.0, -13.0);
    glVertex3f(-124.9, 13.0, -13.0);

    glVertex3f(-124.9, 13.0, -9.5);
    glVertex3f(-124.9, 2.0, -9.5);
    glVertex3f(-124.9, 2.0, -10.0);
    glVertex3f(-124.9, 13.0, -10.0);

    glVertex3f(-124.9, 13.0, -2.5);
    glVertex3f(-124.9, 2.0, -2.5);
    glVertex3f(-124.9, 2.0, -3.0);
    glVertex3f(-124.9, 13.0, -3.0);

    glVertex3f(-124.9, 13.0, 0.5);
    glVertex3f(-124.9, 2.0, 0.5);
    glVertex3f(-124.9, 2.0, 0.0);
    glVertex3f(-124.9, 13.0, 0.0);

    glVertex3f(-124.9, 13.0, 3.5);
    glVertex3f(-124.9, 2.0, 3.5);
    glVertex3f(-124.9, 2.0, 3.0);
    glVertex3f(-124.9, 13.0, 3.0);

    glVertex3f(-124.9, 13.0, 10.5);
    glVertex3f(-124.9, 2.0, 10.5);
    glVertex3f(-124.9, 2.0, 10.0);
    glVertex3f(-124.9, 13.0, 10.0);

    glVertex3f(-124.9, 13.0, 13.5);
    glVertex3f(-124.9, 2.0, 13.5);
    glVertex3f(-124.9, 2.0, 13.0);
    glVertex3f(-124.9, 13.0, 13.0);

    glVertex3f(-124.9, 13.0, 16.5);
    glVertex3f(-124.9, 2.0, 16.5);
    glVertex3f(-124.9, 2.0, 16.0);
    glVertex3f(-124.9, 13.0, 16.0);

    glVertex3f(-124.9, 13.5, -18.0);
    glVertex3f(-124.9, 13.0, -18.0);
    glVertex3f(-124.9, 13.0, -7.5);
    glVertex3f(-124.9, 13.5, -7.5);

    glVertex3f(-124.9, 2.5, -18.0);
    glVertex3f(-124.9, 2.0, -18.0);
    glVertex3f(-124.9, 2.0, -7.5);
    glVertex3f(-124.9, 2.5, -7.5);

    glVertex3f(-124.9, 2.5, -5.0);
    glVertex3f(-124.9, 2.0, -5.0);
    glVertex3f(-124.9, 2.0, 5.5);
    glVertex3f(-124.9, 2.5, 5.5);

    glVertex3f(-124.9, 13.5, -5.0);
    glVertex3f(-124.9, 13.0, -5.0);
    glVertex3f(-124.9, 13.0, 5.5);
    glVertex3f(-124.9, 13.5, 5.5);

    glVertex3f(-124.9, 13.5, 8.0);
    glVertex3f(-124.9, 13.0, 8.0);
    glVertex3f(-124.9, 13.0, 18.5);
    glVertex3f(-124.9, 13.5, 18.5);

    glVertex3f(-124.9, 2.5, 8.0);
    glVertex3f(-124.9, 2.0, 8.0);
    glVertex3f(-124.9, 2.0, 18.5);
    glVertex3f(-124.9, 2.5, 18.5);

    glVertex3f(-124.9, 16.5, -18.0);
    glVertex3f(-124.9, 16.0, -18.0);
    glVertex3f(-124.9, 16.0, -7.5);
    glVertex3f(-124.9, 16.5, -7.5);

    glVertex3f(-124.9, 19.5, -18.0);
    glVertex3f(-124.9, 19.0, -18.0);
    glVertex3f(-124.9, 19.0, -7.5);
    glVertex3f(-124.9, 19.5, -7.5);

    glVertex3f(-124.9, 22.5, -18.0);
    glVertex3f(-124.9, 22.0, -18.0);
    glVertex3f(-124.9, 22.0, -7.5);
    glVertex3f(-124.9, 22.5, -7.5);

    glVertex3f(-124.9, 25.5, -18.0);
    glVertex3f(-124.9, 25.0, -18.0);
    glVertex3f(-124.9, 25.0, -7.5);
    glVertex3f(-124.9, 25.5, -7.5);

    glVertex3f(-124.9, 16.5, -5.0);
    glVertex3f(-124.9, 16.0, -5.0);
    glVertex3f(-124.9, 16.0, 5.5);
    glVertex3f(-124.9, 16.5, 5.5);

    glVertex3f(-124.9, 19.5, -5.0);
    glVertex3f(-124.9, 19.0, -5.0);
    glVertex3f(-124.9, 19.0, 5.5);
    glVertex3f(-124.9, 19.5, 5.5);

    glVertex3f(-124.9, 22.5, -5.0);
    glVertex3f(-124.9, 22.0, -5.0);
    glVertex3f(-124.9, 22.0, 5.5);
    glVertex3f(-124.9, 22.5, 5.5);

    glVertex3f(-124.9, 25.5, -5.0);
    glVertex3f(-124.9, 25.0, -5.0);
    glVertex3f(-124.9, 25.0, 5.5);
    glVertex3f(-124.9, 25.5, 5.5);

    glVertex3f(-124.9, 16.5, 8.0);
    glVertex3f(-124.9, 16.0, 8.0);
    glVertex3f(-124.9, 16.0, 18.5);
    glVertex3f(-124.9, 16.5, 18.5);

    glVertex3f(-124.9, 19.5, 8.0);
    glVertex3f(-124.9, 19.0, 8.0);
    glVertex3f(-124.9, 19.0, 18.5);
    glVertex3f(-124.9, 19.5, 18.5);

    glVertex3f(-124.9, 22.5, 8.0);
    glVertex3f(-124.9, 22.0, 8.0);
    glVertex3f(-124.9, 22.0, 18.5);
    glVertex3f(-124.9, 22.5, 18.5);

    glVertex3f(-124.9, 25.5, 8.0);
    glVertex3f(-124.9, 25.0, 8.0);
    glVertex3f(-124.9, 25.0, 18.5);
    glVertex3f(-124.9, 25.5, 18.5);

    glVertex3f(-124.9, 19.5, 18.0);
    glVertex3f(-124.9, 16.0, 18.0);
    glVertex3f(-124.9, 16.0, 18.5);
    glVertex3f(-124.9, 19.5, 18.5);

    glVertex3f(-124.9, 19.5, 16.0);
    glVertex3f(-124.9, 16.0, 16.0);
    glVertex3f(-124.9, 16.0, 16.5);
    glVertex3f(-124.9, 19.5, 16.5);

    glVertex3f(-124.9, 19.5, 13.0);
    glVertex3f(-124.9, 16.0, 13.0);
    glVertex3f(-124.9, 16.0, 13.5);
    glVertex3f(-124.9, 19.5, 13.5);

    glVertex3f(-124.9, 19.5, 10.0);
    glVertex3f(-124.9, 16.0, 10.0);
    glVertex3f(-124.9, 16.0, 10.5);
    glVertex3f(-124.9, 19.5, 10.5);

    glVertex3f(-124.9, 19.5, 8.0);
    glVertex3f(-124.9, 16.0, 8.0);
    glVertex3f(-124.9, 16.0, 8.5);
    glVertex3f(-124.9, 19.5, 8.5);

    glVertex3f(-124.9, 19.5, 5.0);
    glVertex3f(-124.9, 16.0, 5.0);
    glVertex3f(-124.9, 16.0, 5.5);
    glVertex3f(-124.9, 19.5, 5.5);

    glVertex3f(-124.9, 19.5, 3.0);
    glVertex3f(-124.9, 16.0, 3.0);
    glVertex3f(-124.9, 16.0, 3.5);
    glVertex3f(-124.9, 19.5, 3.5);

    glVertex3f(-124.9, 19.5, 0.0);
    glVertex3f(-124.9, 16.0, 0.0);
    glVertex3f(-124.9, 16.0, 0.5);
    glVertex3f(-124.9, 19.5, 0.5);

    glVertex3f(-124.9, 19.5, -3.0);
    glVertex3f(-124.9, 16.0, -3.0);
    glVertex3f(-124.9, 16.0, -2.5);
    glVertex3f(-124.9, 19.5, -2.5);

    glVertex3f(-124.9, 19.5, -5.0);
    glVertex3f(-124.9, 16.0, -5.0);
    glVertex3f(-124.9, 16.0, -4.5);
    glVertex3f(-124.9, 19.5, -4.5);

    glVertex3f(-124.9, 19.5, -8.0);
    glVertex3f(-124.9, 16.0, -8.0);
    glVertex3f(-124.9, 16.0, -7.5);
    glVertex3f(-124.9, 19.5, -7.5);

    glVertex3f(-124.9, 19.5, -10.0);
    glVertex3f(-124.9, 16.0, -10.0);
    glVertex3f(-124.9, 16.0, -9.5);
    glVertex3f(-124.9, 19.5, -9.5);

    glVertex3f(-124.9, 19.5, -13.0);
    glVertex3f(-124.9, 16.0, -13.0);
    glVertex3f(-124.9, 16.0, -12.5);
    glVertex3f(-124.9, 19.5, -12.5);

    glVertex3f(-124.9, 19.5, -16.0);
    glVertex3f(-124.9, 16.0, -16.0);
    glVertex3f(-124.9, 16.0, -15.5);
    glVertex3f(-124.9, 19.5, -15.5);

    glVertex3f(-124.9, 19.5, -18.0);
    glVertex3f(-124.9, 16.0, -18.0);
    glVertex3f(-124.9, 16.0, -17.5);
    glVertex3f(-124.9, 19.5, -17.5);


    glVertex3f(-124.9, 25.5, -18.0);
    glVertex3f(-124.9, 22.0, -18.0);
    glVertex3f(-124.9, 22.0, -18.5);
    glVertex3f(-124.9, 25.5, -18.5);

    glVertex3f(-124.9, 25.5, -76.0);
    glVertex3f(-124.9, 22.0, -76.0);
    glVertex3f(-124.9, 22.0, -76.5);
    glVertex3f(-124.9, 25.5, -76.5);

    glVertex3f(-124.9, 25.5, -73.0);
    glVertex3f(-124.9, 22.0, -73.0);
    glVertex3f(-124.9, 22.0, -73.5);
    glVertex3f(-124.9, 25.5, -73.5);

    glVertex3f(-124.9, 25.5, -70.0);
    glVertex3f(-124.9, 22.0, -70.0);
    glVertex3f(-124.9, 22.0, -70.5);
    glVertex3f(-124.9, 25.5, -70.5);

    glVertex3f(-124.9, 25.5, -68.0);
    glVertex3f(-124.9, 22.0, -68.0);
    glVertex3f(-124.9, 22.0, -68.5);
    glVertex3f(-124.9, 25.5, -68.5);

    glVertex3f(-124.9, 25.5, -65.0);
    glVertex3f(-124.9, 22.0, -65.0);
    glVertex3f(-124.9, 22.0, -65.5);
    glVertex3f(-124.9, 25.5, -65.5);

    glVertex3f(-124.9, 25.5, -63.0);
    glVertex3f(-124.9, 22.0, -63.0);
    glVertex3f(-124.9, 22.0, -63.5);
    glVertex3f(-124.9, 25.5, -63.5);

    glVertex3f(-124.9, 25.5, -60.0);
    glVertex3f(-124.9, 22.0, -60.0);
    glVertex3f(-124.9, 22.0, -60.5);
    glVertex3f(-124.9, 25.5, -60.5);

    glVertex3f(-124.9, 25.5, -57.0);
    glVertex3f(-124.9, 22.0, -57.0);
    glVertex3f(-124.9, 22.0, -57.5);
    glVertex3f(-124.9, 25.5, -57.5);

    glVertex3f(-124.9, 25.5, -55.0);
    glVertex3f(-124.9, 22.0, -55.0);
    glVertex3f(-124.9, 22.0, -55.5);
    glVertex3f(-124.9, 25.5, -55.5);

    glVertex3f(-124.9, 25.5, -52.0);
    glVertex3f(-124.9, 22.0, -52.0);
    glVertex3f(-124.9, 22.0, -52.5);
    glVertex3f(-124.9, 25.5, -52.5);

    glVertex3f(-124.9, 25.5, -50.0);
    glVertex3f(-124.9, 22.0, -50.0);
    glVertex3f(-124.9, 22.0, -50.5);
    glVertex3f(-124.9, 25.5, -50.5);

    glVertex3f(-124.9, 25.5, -47.0);
    glVertex3f(-124.9, 22.0, -47.0);
    glVertex3f(-124.9, 22.0, -47.5);
    glVertex3f(-124.9, 25.5, -47.5);

    glVertex3f(-124.9, 25.5, -44.0);
    glVertex3f(-124.9, 22.0, -44.0);
    glVertex3f(-124.9, 22.0, -44.5);
    glVertex3f(-124.9, 25.5, -44.5);

    glVertex3f(-124.9, 25.5, -42.0);
    glVertex3f(-124.9, 22.0, -42.0);
    glVertex3f(-124.9, 22.0, -42.5);
    glVertex3f(-124.9, 25.5, -42.5);
    glEnd();
    //list
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-74.9, 35.0, -40.0);
    glVertex3f(-74.9, 33.0, -40.0);
    glVertex3f(-74.9, 33.0, -20.0);
    glVertex3f(-74.9, 35.0, -20.0);
    
    glVertex3f(-74.9, 2.0, -25.0);
    glVertex3f(-74.9, 0.0, -25.0);
    glVertex3f(-74.9, 0.0, -20.0);
    glVertex3f(-74.9, 2.0, -20.0);

    glVertex3f(-74.9, 2.0, -40.0);
    glVertex3f(-74.9, 0.0, -40.0);
    glVertex3f(-74.9, 0.0, -35.0);
    glVertex3f(-74.9, 2.0, -35.0);

    glVertex3f(-95.1, 35.0, -40.0);
    glVertex3f(-95.1, 33.0, -40.0);
    glVertex3f(-95.1, 33.0, -20.0);
    glVertex3f(-95.1, 35.0, -20.0);

    glVertex3f(-95.0, 35.0, -19.9);
    glVertex3f(-95.0, 33.0, -19.9);
    glVertex3f(-75.0, 33.0, -19.9);
    glVertex3f(-75.0, 35.0, -19.9);

    glVertex3f(-95.0, 35.0, -40.1);
    glVertex3f(-95.0, 33.0, -40.1);
    glVertex3f(-75.0, 33.0, -40.1);
    glVertex3f(-75.0, 35.0, -40.1);
   

    glVertex3f(-74.9, 5.0, -35.0);
    glVertex3f(-74.9, 4.0, -35.0);
    glVertex3f(-74.9, 4.0, -25.0);
    glVertex3f(-74.9, 5.0, -25.0);

    glVertex3f(-74.9, 26.0, -33.0);
    glVertex3f(-74.9, 25.0, -33.0);
    glVertex3f(-74.9, 25.0, -27.0);
    glVertex3f(-74.9, 26.0, -27.0);
    

    glVertex3f(-78.0, 21.0, -33.0);
    glVertex3f(-75.0, 21.0, -33.0);
    glVertex3f(-75.0, 25.0, -33.0);
    glVertex3f(-78.0, 25.0, -33.0);


    glVertex3f(-78.0, 21.0, -27.0);
    glVertex3f(-75.0, 21.0, -27.0);
    glVertex3f(-75.0, 25.0, -27.0);
    glVertex3f(-78.0, 25.0, -27.0);

    glVertex3f(-78.0, 11.0, -27.0);
    glVertex3f(-75.0, 11.0, -27.0);
    glVertex3f(-75.0, 18.0, -27.0);
    glVertex3f(-78.0, 18.0, -27.0);


    glVertex3f(-78.0, 11.0, -33.0);
    glVertex3f(-75.0, 11.0, -33.0);
    glVertex3f(-75.0, 18.0, -33.0);
    glVertex3f(-78.0, 18.0, -33.0);

    glVertex3f(-78.0, 5.0, -33.0);
    glVertex3f(-75.0, 5.0, -33.0);
    glVertex3f(-75.0, 8.0, -33.0);
    glVertex3f(-78.0, 8.0, -33.0);

    glVertex3f(-78.0, 5.0, -27.0);
    glVertex3f(-75.0, 5.0, -27.0);
    glVertex3f(-75.0, 8.0, -27.0);
    glVertex3f(-78.0, 8.0, -27.0);

    glVertex3f(-74.9, 19.0, -33.0);
    glVertex3f(-74.9, 18.0, -33.0);
    glVertex3f(-74.9, 18.0, -27.0);
    glVertex3f(-74.9, 19.0, -27.0);

    glVertex3f(-74.9, 11.0, -33.0);
    glVertex3f(-74.9, 10.0, -33.0);
    glVertex3f(-74.9, 10.0, -27.0);
    glVertex3f(-74.9, 11.0, -27.0);

    glVertex3f(-74.9, 8.5, -33.0);
    glVertex3f(-74.9, 8.0, -33.0);
    glVertex3f(-74.9, 8.0, -27.0);
    glVertex3f(-74.9, 8.5, -27.0);

    glVertex3f(-74.9, 21.5, -33.0);
    glVertex3f(-74.9, 21.0, -33.0);
    glVertex3f(-74.9, 21.0, -27.0);
    glVertex3f(-74.9, 21.5, -27.0);
    glEnd();

    //list
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-84.9, 13.0, -42.0);
    glVertex3f(-84.9, 2.0, -42.0);
    glVertex3f(-84.9, 2.0, -42.5);
    glVertex3f(-84.9, 13.0, -42.5);

    glVertex3f(-84.9, 13.0, -52.0);
    glVertex3f(-84.9, 2.0, -52.0);
    glVertex3f(-84.9, 2.0, -52.5);
    glVertex3f(-84.9, 13.0, -52.5);

    glVertex3f(-84.9, 13.0, -44.0);
    glVertex3f(-84.9, 2.0, -44.0);
    glVertex3f(-84.9, 2.0, -44.5);
    glVertex3f(-84.9, 13.0, -44.5);

    glVertex3f(-84.9, 13.0, -50.0);
    glVertex3f(-84.9, 2.0, -50.0);
    glVertex3f(-84.9, 2.0, -50.5);
    glVertex3f(-84.9, 13.0, -50.5);

    glVertex3f(-84.9, 13.0, -47.0);
    glVertex3f(-84.9, 2.0, -47.0);
    glVertex3f(-84.9, 2.0, -47.5);
    glVertex3f(-84.9, 13.0, -47.5);

    glVertex3f(-84.9, 13.0, -55.0);
    glVertex3f(-84.9, 2.0, -55.0);
    glVertex3f(-84.9, 2.0, -55.5);
    glVertex3f(-84.9, 13.0, -55.5);

    glVertex3f(-84.9, 13.0, -57.0);
    glVertex3f(-84.9, 2.0, -57.0);
    glVertex3f(-84.9, 2.0, -57.5);
    glVertex3f(-84.9, 13.0, -57.5);

    glVertex3f(-84.9, 13.0, -60.0);
    glVertex3f(-84.9, 2.0, -60.0);
    glVertex3f(-84.9, 2.0, -60.5);
    glVertex3f(-84.9, 13.0, -60.5);

    glVertex3f(-84.9, 13.0, -63.0);
    glVertex3f(-84.9, 2.0, -63.0);
    glVertex3f(-84.9, 2.0, -63.5);
    glVertex3f(-84.9, 13.0, -63.5);

    glVertex3f(-84.9, 13.0, -65.0);
    glVertex3f(-84.9, 2.0, -65.0);
    glVertex3f(-84.9, 2.0, -65.5);
    glVertex3f(-84.9, 13.0, -65.5);
    
    glVertex3f(-84.9, 13.0, -68.0);
    glVertex3f(-84.9, 2.0, -68.0);
    glVertex3f(-84.9, 2.0, -68.5);
    glVertex3f(-84.9, 13.0, -68.5);
    
    glVertex3f(-84.9, 13.0, -78.0);
    glVertex3f(-84.9, 2.0, -78.0);
    glVertex3f(-84.9, 2.0, -78.5);
    glVertex3f(-84.9, 13.0, -78.5);

    glVertex3f(-84.9, 13.0, -76.0);
    glVertex3f(-84.9, 2.0, -76.0);
    glVertex3f(-84.9, 2.0, -76.5);
    glVertex3f(-84.9, 13.0, -76.5);

    glVertex3f(-84.9, 13.0, -70.0);
    glVertex3f(-84.9, 2.0, -70.0);
    glVertex3f(-84.9, 2.0, -70.5);
    glVertex3f(-84.9, 13.0, -70.5);
    
    glVertex3f(-84.9, 13.0, -73.0);
    glVertex3f(-84.9, 2.0, -73.0);
    glVertex3f(-84.9, 2.0, -73.5);
    glVertex3f(-84.9, 13.0, -73.5);
    
    glVertex3f(-84.9, 13.5, -68.0);
    glVertex3f(-84.9, 13.0, -68.0);
    glVertex3f(-84.9, 13.0, -78.5);
    glVertex3f(-84.9, 13.5, -78.5);

    glVertex3f(-84.9, 2.5, -68.0);
    glVertex3f(-84.9, 2.0, -68.0);
    glVertex3f(-84.9, 2.0, -78.5);
    glVertex3f(-84.9, 2.5, -78.5);

    glVertex3f(-84.9, 2.5, -55.0);
    glVertex3f(-84.9, 2.0, -55.0);
    glVertex3f(-84.9, 2.0, -65.5);
    glVertex3f(-84.9, 2.5, -65.5);

    glVertex3f(-84.9, 13.5, -55.0);
    glVertex3f(-84.9, 13.0, -55.0);
    glVertex3f(-84.9, 13.0, -65.5);
    glVertex3f(-84.9, 13.5, -65.5);

    glVertex3f(-84.9, 13.5, -42.0);
    glVertex3f(-84.9, 13.0, -42.0);
    glVertex3f(-84.9, 13.0, -52.5);
    glVertex3f(-84.9, 13.5, -52.5);

    glVertex3f(-84.9, 2.5, -42.0);
    glVertex3f(-84.9, 2.0, -42.0);
    glVertex3f(-84.9, 2.0, -52.5);
    glVertex3f(-84.9, 2.5, -52.5);
    
    //2
    glVertex3f(-84.9, 16.5, -42.0);
    glVertex3f(-84.9, 16.0, -42.0);
    glVertex3f(-84.9, 16.0, -52.5);
    glVertex3f(-84.9, 16.5, -52.5);

    glVertex3f(-84.9, 19.5, -42.0);
    glVertex3f(-84.9, 19.0, -42.0);
    glVertex3f(-84.9, 19.0, -52.5);
    glVertex3f(-84.9, 19.5, -52.5);

    glVertex3f(-84.9, 22.5, -42.0);
    glVertex3f(-84.9, 22.0, -42.0);
    glVertex3f(-84.9, 22.0, -52.5);
    glVertex3f(-84.9, 22.5, -52.5);

    glVertex3f(-84.9, 25.5, -42.0);
    glVertex3f(-84.9, 25.0, -42.0);
    glVertex3f(-84.9, 25.0, -52.5);
    glVertex3f(-84.9, 25.5, -52.5);

    glVertex3f(-84.9, 16.5, -55.0);
    glVertex3f(-84.9, 16.0, -55.0);
    glVertex3f(-84.9, 16.0, -65.5);
    glVertex3f(-84.9, 16.5, -65.5);

    glVertex3f(-84.9, 19.5, -55.0);
    glVertex3f(-84.9, 19.0, -55.0);
    glVertex3f(-84.9, 19.0, -65.5);
    glVertex3f(-84.9, 19.5, -65.5);

    glVertex3f(-84.9, 22.5, -55.0);
    glVertex3f(-84.9, 22.0, -55.0);
    glVertex3f(-84.9, 22.0, -65.5);
    glVertex3f(-84.9, 22.5, -65.5);

    glVertex3f(-84.9, 25.5, -55.0);
    glVertex3f(-84.9, 25.0, -55.0);
    glVertex3f(-84.9, 25.0, -65.5);
    glVertex3f(-84.9, 25.5, -65.5);

    glVertex3f(-84.9, 16.5, -68.0);
    glVertex3f(-84.9, 16.0, -68.0);
    glVertex3f(-84.9, 16.0, -78.5);
    glVertex3f(-84.9, 16.5, -78.5);

    glVertex3f(-84.9, 19.5, -68.0);
    glVertex3f(-84.9, 19.0, -68.0);
    glVertex3f(-84.9, 19.0, -78.5);
    glVertex3f(-84.9, 19.5, -78.5);

    glVertex3f(-84.9, 22.5, -68.0);
    glVertex3f(-84.9, 22.0, -68.0);
    glVertex3f(-84.9, 22.0, -78.5);
    glVertex3f(-84.9, 22.5, -78.5);

    glVertex3f(-84.9, 25.5, -68.0);
    glVertex3f(-84.9, 25.0, -68.0);
    glVertex3f(-84.9, 25.0, -78.5);
    glVertex3f(-84.9, 25.5, -78.5);

    //list ats sping
    glVertex3f(-84.9, 25.5, -78.0);
    glVertex3f(-84.9, 22.0, -78.0);
    glVertex3f(-84.9, 22.0, -78.5);
    glVertex3f(-84.9, 25.5, -78.5);

    glVertex3f(-84.9, 25.5, -76.0);
    glVertex3f(-84.9, 22.0, -76.0);
    glVertex3f(-84.9, 22.0, -76.5);
    glVertex3f(-84.9, 25.5, -76.5);

    glVertex3f(-84.9, 25.5, -73.0);
    glVertex3f(-84.9, 22.0, -73.0);
    glVertex3f(-84.9, 22.0, -73.5);
    glVertex3f(-84.9, 25.5, -73.5);

    glVertex3f(-84.9, 25.5, -70.0);
    glVertex3f(-84.9, 22.0, -70.0);
    glVertex3f(-84.9, 22.0, -70.5);
    glVertex3f(-84.9, 25.5, -70.5);
    
    glVertex3f(-84.9, 25.5, -68.0);
    glVertex3f(-84.9, 22.0, -68.0);
    glVertex3f(-84.9, 22.0, -68.5);
    glVertex3f(-84.9, 25.5, -68.5);

    glVertex3f(-84.9, 25.5, -65.0);
    glVertex3f(-84.9, 22.0, -65.0);
    glVertex3f(-84.9, 22.0, -65.5);
    glVertex3f(-84.9, 25.5, -65.5);

    glVertex3f(-84.9, 25.5, -63.0);
    glVertex3f(-84.9, 22.0, -63.0);
    glVertex3f(-84.9, 22.0, -63.5);
    glVertex3f(-84.9, 25.5, -63.5);

    glVertex3f(-84.9, 25.5, -60.0);
    glVertex3f(-84.9, 22.0, -60.0);
    glVertex3f(-84.9, 22.0, -60.5);
    glVertex3f(-84.9, 25.5, -60.5);

    glVertex3f(-84.9, 25.5, -57.0);
    glVertex3f(-84.9, 22.0, -57.0);
    glVertex3f(-84.9, 22.0, -57.5);
    glVertex3f(-84.9, 25.5, -57.5);

    glVertex3f(-84.9, 25.5, -55.0);
    glVertex3f(-84.9, 22.0, -55.0);
    glVertex3f(-84.9, 22.0, -55.5);
    glVertex3f(-84.9, 25.5, -55.5);

    glVertex3f(-84.9, 25.5, -52.0);
    glVertex3f(-84.9, 22.0, -52.0);
    glVertex3f(-84.9, 22.0, -52.5);
    glVertex3f(-84.9, 25.5, -52.5);

    glVertex3f(-84.9, 25.5, -50.0);
    glVertex3f(-84.9, 22.0, -50.0);
    glVertex3f(-84.9, 22.0, -50.5);
    glVertex3f(-84.9, 25.5, -50.5);

    glVertex3f(-84.9, 25.5, -47.0);
    glVertex3f(-84.9, 22.0, -47.0);
    glVertex3f(-84.9, 22.0, -47.5);
    glVertex3f(-84.9, 25.5, -47.5);

    glVertex3f(-84.9, 25.5, -44.0);
    glVertex3f(-84.9, 22.0, -44.0);
    glVertex3f(-84.9, 22.0, -44.5);
    glVertex3f(-84.9, 25.5, -44.5);

    glVertex3f(-84.9, 25.5, -42.0);
    glVertex3f(-84.9, 22.0, -42.0);
    glVertex3f(-84.9, 22.0, -42.5);
    glVertex3f(-84.9, 25.5, -42.5);

    //a
    glVertex3f(-84.9, 19.5, -78.0);
    glVertex3f(-84.9, 16.0, -78.0);
    glVertex3f(-84.9, 16.0, -78.5);
    glVertex3f(-84.9, 19.5, -78.5);

    glVertex3f(-84.9, 19.5, -76.0);
    glVertex3f(-84.9, 16.0, -76.0);
    glVertex3f(-84.9, 16.0, -76.5);
    glVertex3f(-84.9, 19.5, -76.5);

    glVertex3f(-84.9, 19.5, -73.0);
    glVertex3f(-84.9, 16.0, -73.0);
    glVertex3f(-84.9, 16.0, -73.5);
    glVertex3f(-84.9, 19.5, -73.5);

    glVertex3f(-84.9, 19.5, -70.0);
    glVertex3f(-84.9, 16.0, -70.0);
    glVertex3f(-84.9, 16.0, -70.5);
    glVertex3f(-84.9, 19.5, -70.5);

    glVertex3f(-84.9, 19.5, -68.0);
    glVertex3f(-84.9, 16.0, -68.0);
    glVertex3f(-84.9, 16.0, -68.5);
    glVertex3f(-84.9, 19.5, -68.5);

    glVertex3f(-84.9, 19.5, -65.0);
    glVertex3f(-84.9, 16.0, -65.0);
    glVertex3f(-84.9, 16.0, -65.5);
    glVertex3f(-84.9, 19.5, -65.5);

    glVertex3f(-84.9, 19.5, -63.0);
    glVertex3f(-84.9, 16.0, -63.0);
    glVertex3f(-84.9, 16.0, -63.5);
    glVertex3f(-84.9, 19.5, -63.5);

    glVertex3f(-84.9, 19.5, -60.0);
    glVertex3f(-84.9, 16.0, -60.0);
    glVertex3f(-84.9, 16.0, -60.5);
    glVertex3f(-84.9, 19.5, -60.5);

    glVertex3f(-84.9, 19.5, -57.0);
    glVertex3f(-84.9, 16.0, -57.0);
    glVertex3f(-84.9, 16.0, -57.5);
    glVertex3f(-84.9, 19.5, -57.5);

    glVertex3f(-84.9, 19.5, -55.0);
    glVertex3f(-84.9, 16.0, -55.0);
    glVertex3f(-84.9, 16.0, -55.5);
    glVertex3f(-84.9, 19.5, -55.5);

    glVertex3f(-84.9, 19.5, -52.0);
    glVertex3f(-84.9, 16.0, -52.0);
    glVertex3f(-84.9, 16.0, -52.5);
    glVertex3f(-84.9, 19.5, -52.5);

    glVertex3f(-84.9, 19.5, -50.0);
    glVertex3f(-84.9, 16.0, -50.0);
    glVertex3f(-84.9, 16.0, -50.5);
    glVertex3f(-84.9, 19.5, -50.5);

    glVertex3f(-84.9, 19.5, -47.0);
    glVertex3f(-84.9, 16.0, -47.0);
    glVertex3f(-84.9, 16.0, -47.5);
    glVertex3f(-84.9, 19.5, -47.5);

    glVertex3f(-84.9, 19.5, -44.0);
    glVertex3f(-84.9, 16.0, -44.0);
    glVertex3f(-84.9, 16.0, -44.5);
    glVertex3f(-84.9, 19.5, -44.5);

    glVertex3f(-84.9, 19.5, -42.0);
    glVertex3f(-84.9, 16.0, -42.0);
    glVertex3f(-84.9, 16.0, -42.5);
    glVertex3f(-84.9, 19.5, -42.5);
    glEnd();
    
    //ruangan
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(-78.0, 8.0, -33.0);
    glVertex3f(-78.0, 5.0, -33.0);
    glVertex3f(-78.0, 5.0, -27.0);
    glVertex3f(-78.0, 8.0, -27.0);

    glVertex3f(-78.0, 18.0, -33.0);
    glVertex3f(-78.0, 11.0, -33.0);
    glVertex3f(-78.0, 11.0, -27.0);
    glVertex3f(-78.0, 18.0, -27.0);

    glVertex3f(-78.0, 25.0, -33.0);
    glVertex3f(-78.0, 21.0, -33.0);
    glVertex3f(-78.0, 21.0, -27.0);
    glVertex3f(-78.0, 25.0, -27.0);

    glVertex3f(-78.0, 8.0, -33.0);
    glVertex3f(-75.0, 8.0, -33.0);
    glVertex3f(-75.0, 8.0, -27.0);
    glVertex3f(-78.0, 8.0, -27.0);

    glVertex3f(-78.0, 5.0, -33.0);
    glVertex3f(-75.0, 5.0, -33.0);
    glVertex3f(-75.0, 5.0, -27.0);
    glVertex3f(-78.0, 5.0, -27.0);

    glVertex3f(-78.0, 11.0, -33.0);
    glVertex3f(-75.0, 11.0, -33.0);
    glVertex3f(-75.0, 11.0, -27.0);
    glVertex3f(-78.0, 11.0, -27.0);

    glVertex3f(-78.0, 18.0, -33.0);
    glVertex3f(-75.0, 18.0, -33.0);
    glVertex3f(-75.0, 18.0, -27.0);
    glVertex3f(-78.0, 18.0, -27.0);
    
    glVertex3f(-78.0, 21.0, -33.0);
    glVertex3f(-75.0, 21.0, -33.0);
    glVertex3f(-75.0, 21.0, -27.0);
    glVertex3f(-78.0, 21.0, -27.0);
    
    glVertex3f(-78.0, 25.0, -33.0);
    glVertex3f(-75.0, 25.0, -33.0);
    glVertex3f(-75.0, 25.0, -27.0);
    glVertex3f(-78.0, 25.0, -27.0);
    glEnd();

    

   
    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();

}

void idle() {
    if (!mouseDown) {
        xrot += 0.3f;
        yrot += 0.4f;
    }

    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y) {
    if (mouseDown) {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key, int b, int v)
{
    switch (key)
    {
    case 'w':
    case 'W':
        zmov += 3.0;
        break;
    case 'd':
    case 'D':
        xmov -= 3.0;
        break;
    case 's':
    case 'S':
        zmov -= 3.0;
        break;
    case 'a':
    case 'A':
        xmov += 3.0;
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(110.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
    

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200, 700);
    glutInitWindowPosition(250, 50);
    glutCreateWindow("Geraldi 672016283");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);

    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}