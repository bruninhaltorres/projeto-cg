#include <GL/gl.h>
#include <GL/glut.h>

#include "camera.h"
#include "movimento-camera.h"
#include "drawObj.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

//#define DEBUG
#ifdef DEBUG
#define D(x) x
#else
#define D(x)
#endif

int d = 20, p, gx=0, hy=0, hxc=496, gyc=795, gyc, ha, gb;

float* cam_pos;
float* cam_center;
float* cam_nv;

void* cam = NULL;

void display();

int main(int argc, char** argv) { // argc: numero de parâmetros fornecidos
                                  // argv: contém as strings.
    glutInit(&argc, argv); //glutInit: inicializa a biblioteca GLUT
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); //displayMode: indico que vou usar o OpenGL em janela
                                                //GLUT_SINGLE: bit mask ativado para usar apenas uma única janela
                                                //GLUT_RGB: coloco minha janela no modo RGBA/RGB
    glutInitWindowSize (WINDOW_WIDTH, WINDOW_HEIGHT); //defino o tamanho da janela
    // glutInitWindowPosition(10, 10); //defino em que posição x,y minha janela vai ser inicializada
    glutCreateWindow("DRAW-HOUSE"); //crio a janela com as especificações acima e passo um nome como parâmetro

    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDepthFunc(GL_LEQUAL);
    glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
    glDepthRange(0.0f, 1.0f);

    cam = (Camera*)init_camera();

    glutDisplayFunc(display);
    glutKeyboardFunc(moveCam);
    glutSpecialFunc(moveCamSpec);
    glutMotionFunc(mouse_func);
    glutPassiveMotionFunc(pass_mouse_func); 
    glutMainLoop();

    return 0;
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT  | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.0); //limpa o buffer de cores e especifica o rgb
    int i;

    glMatrixMode ( GL_PROJECTION ) ;
    glLoadIdentity () ;
    gluPerspective ( FOV , 1.0f * WINDOW_WIDTH / WINDOW_HEIGHT ,
    0.001f , 1000.0f ) ;

    cam_pos = getCamPos(cam);
    cam_center = getCamCenter(cam);
    cam_nv = getCamNV(cam);

    gluLookAt( cam_pos[IX] , cam_pos[IY] , cam_pos[IZ] , cam_center[IX] , cam_center[IY] ,
    cam_center[IZ] , cam_nv[IX] , cam_nv[IY] , cam_nv[IZ] ) ;
    
    glMatrixMode ( GL_MODELVIEW ) ;
    glLoadIdentity () ;

    
    D(
        glPushMatrix();
        draw_axis();
        glPopMatrix();

        glPushMatrix();
        draw_axis_ticks();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(20 , 25 , -61);
        glutSolidSphere(1.0, 50, 50);

        glPopMatrix();
    )
    //drawHouse();
    glFlush(); // enviar para o hardware todos os comandos emitidos até ao momento
}