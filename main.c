#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>


#include "headers/camera.h"
#include "headers/obj_import.h"
#include "headers/cam_movement.h"
#include "headers/draw_objects.h"
#include "stb_image.h"

#define WINDOW_WIDTH 1366
#define WINDOW_HEIGHT 768

//#define DEBUG
#ifdef DEBUG
#define D(x) x
#else
#define D(x)
#endif

float* cam_pos;
float* cam_center;
float* cam_nv;

void* cam = NULL;

void display();

void setup_lighting();

int main(int argc, char** argv) {
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow("CG - COZINHA");

    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDepthFunc(GL_LEQUAL);
    glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
    glDepthRange(0.0f, 1.0f);


    setup_lighting();
   
    cam = (Camera*)init_camera();
    init_obj_vecs();
    init_textures_vec();

    load_obj_display("C:/projeto-cg/models/cadeira.obj", 0);

    load_obj_display("C:/projeto-cg/models/caneca.obj", 2);

    load_obj_display("C:/projeto-cg/models/geladeira.obj", 6);

    load_obj_display("C:/projeto-cg/models/ventilador/helice.obj", 7);

    load_obj_display("C:/projeto-cg/models/lixeira.obj", 11);

    load_obj_display("C:/projeto-cg/models/portaFechada.obj", 13);

    load_obj_display("C:/projeto-cg/models/janelaFechada.obj", 14);

    load_obj_display("C:/projeto-cg/models/mesa.obj", 15);
    load_obj_display("C:/projeto-cg/models/quadro.obj", 3);

    

    load_obj_display("C:/projeto-cg/models/casa/chao.obj", 17);
    load_obj_display("C:/projeto-cg/models/casa/teto.obj", 18);
    load_obj_display("C:/projeto-cg/models/casa/paredecomporta.obj", 19);
    load_obj_display("C:/projeto-cg/models/casa/paredecomum.obj", 20);
    load_obj_display("C:/projeto-cg/models/casa/paredecomjanela.obj", 21);

    
    load_obj_display("C:/projeto-cg/models/janela/base.obj", 22);
    load_obj_display("C:/projeto-cg/models/janela/janela.obj", 23);
    load_obj_display("C:/projeto-cg/models/janela/janela2.obj", 24);

    load_obj_display("C:/projeto-cg/models/pia.obj", 25);

    
    load_obj_display("C:/projeto-cg/models/estante/estante.obj", 28);

    load_obj_display("C:/projeto-cg/models/luminaria.obj", 30);

    load_obj_display("C:/projeto-cg/models/fogao.obj", 32);

    load_texture("C:/projeto-cg/textures/quadro-vangogh.jpg", 0);
    load_texture("C:/projeto-cg/textures/container.jpg", 1);
    load_texture("C:/projeto-cg/textures/new_piso.jpg", 2);
    load_texture("C:/projeto-cg/textures/new_parede.jpg", 3);
    load_texture("C:/projeto-cg/textures/textura_cama.jpg", 4);
    load_texture("C:/projeto-cg/textures/casa.jpeg", 5);
    load_texture("C:/projeto-cg/textures/texturademadeira.jpg", 7);
    load_texture("C:/projeto-cg/textures/textura_livro.jpg", 8);
    
    glutDisplayFunc(display);
    glutKeyboardFunc(moveCam);
    glutSpecialFunc(moveCamSpec);
    glutMotionFunc(mouse_func);
    glutPassiveMotionFunc(pass_mouse_func); 
    glutMainLoop();
    return 0;
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  
    int i ;


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
    

    //ventilador
    glPushMatrix();
    glTranslatef ( 25 ,65 , -30 ) ;
    glScalef(4.0, 4.0, 4.0);
    glRotatef(90, 90, 0.9, 0);
    draw_helix();
    glPopMatrix();

    //casa
    draw_house();

    //cadeira
    glPushMatrix();
    glTranslatef ( -10 , 1.7 , -43 ) ;
    glScalef(4.0, 4.0, 4.0);
    glRotatef(90, 0, 1, 0);
    draw_objects(0, 0.9, 0, 0.9, 1);
    glPopMatrix();

    //caneca
    glPushMatrix();
    glTranslatef ( -13 , 15.8 , -65 ) ;
    glScalef(4.0, 4.0, 4.0);
    glRotatef(90, 0, 1, 0);
    draw_objects(2, 0.9, 0.9, 0, 1);
    glPopMatrix();

    //estante
    glPushMatrix();
    draw_bookcase();
    glPopMatrix();

    //geladeira
    glPushMatrix();
    glTranslatef ( 5 , 0.8 , 67 ) ;
    glScalef(10.0, 10.0, 6.0);
    glRotatef(180, 0, 1, 0);
    draw_objects(6, 0.9, 0, 0.9, 0);
    glPopMatrix();

    //janela
    glPushMatrix();
    draw_window();
    glPopMatrix();

    //lixeira
    glPushMatrix();
    glEnable( GL_TEXTURE_2D ); 
    glTranslatef ( 26 , 1.5 , -66 ) ;
    aply_texture(1);
    glScalef(2.0, 2.0, 2.0);
    draw_objects(11, 1, 1, 1, 1);
    glDisable( GL_TEXTURE_2D ); 
    glPopMatrix();

    //porta 
    glPushMatrix();
    draw_door();
    glPopMatrix();

    //mesa
    glPushMatrix();
    glTranslatef ( -15 , 1.5 , -83) ;
    glScalef(2.0, 2.0, 4.0);
    glRotatef(-90, 0, 1, 0);
    draw_objects(15, 1, 1, 1, 1);
    glPopMatrix();

    //luminaria
    glPushMatrix();
    glTranslatef ( 20 , 15 , -62 ) ;
    glScalef(7.0, 7.0, 7.0);
    draw_objects(30, 1, 0, 0, 1);
    glPopMatrix();

    //pia
    glPushMatrix();
    glTranslatef ( -50 ,8, 65 ) ;
    glScalef(7.0, 7.0, 7.0);
    glRotatef(-90, 0, 1, 0);
    draw_objects(25, 1, 1, 1, 1);
    glPopMatrix();

    //quadro
    glPushMatrix();
    glTranslatef ( 0 ,30 , -73.7 ) ;
    glScalef(1.5, 1.5, 1.5);
    draw_objects(3, 0.1, 0.5, 0.8, 0);
    glPopMatrix();

    glPushMatrix();
    glEnable( GL_TEXTURE_2D ); 
    glTranslatef ( 1.75 ,30.5 , -71 ) ;
    //Desenha a imagem que vai no quadro
    aply_texture(0);
    glScalef(10.0, 9.0, 1.0);
    draw_cube();
    glDisable( GL_TEXTURE_2D ); 
    glPopMatrix();
    
    glFlush();
    glutSwapBuffers () ;
    glutPostRedisplay();
}

void setup_lighting() {
    float mat_specular[] = {1.0f, 1.0f, 1.0f};
	float mat_shininess[] = {50.0f};
	float light_position[] = {0.0f, 65.0f, 0.0f, 1.0f};
    float light_diffuse [] = {1.0f , 1.0f , 1.0f }; // Luz branca

    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
	//lampada
    glMaterialfv(GL_LIGHT1 , GL_SPECULAR , mat_specular);
	glLightfv(GL_LIGHT1, GL_POSITION, light_position);
    glLightfv ( GL_LIGHT1 , GL_DIFFUSE , light_diffuse ) ;

    //spot : ponto luminoso
    float spot_direction [] = {-0.7f , -0.3f , 0.0f };
    float spot_cutoff [] = {15.0f }; // Ângulo de dispersão da luz
    float spot_specular[] = {1.0f, 1.0f, 0.0f};//amarelo
    float spot_position[] = {20 , 25 , -61, 1.0 };
    float spot_difuse[] = {1.0, 1.0, 0.0};

    glMaterialfv(GL_LIGHT0 , GL_SPECULAR , spot_specular);
    glLightfv ( GL_LIGHT0 , GL_DIFFUSE , spot_difuse ) ;

    glLightfv(GL_LIGHT0, GL_POSITION, spot_position);
    glLightfv ( GL_LIGHT0 , GL_SPOT_DIRECTION , spot_direction ) ;
    glLightfv ( GL_LIGHT0 , GL_SPOT_CUTOFF , spot_cutoff ) ;
	
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    
    glEnable(GL_COLOR_MATERIAL);
}