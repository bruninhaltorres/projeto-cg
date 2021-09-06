#include <GL/gl.h>
#include <GL/glut.h>
#include "drawObj.h"

#define WINDOW_WIDHT 640
#define WINDOW_HEIGHT 480

void display();

void setup_lighting() {

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(WINDOW_WIDHT, WINDOW_HEIGHT);
    glutCreateWindow("OpenGL");

    // Em uma aplicação, a área utilizada para armazenar temporariamente os dados é denominada buffer

    glEnable (GL_DEPTH_TEST); //Serve para habilitar recursos gráficos do OpenGL e nesse caso está habilitando o depth-buffering, ou seja, profundidade do buffer que vai armazenar a coordenada z
    glDepthMask (GL_TRUE); //valida a escrita na profundidade do buffer
    glDepthFunc (GL_LEQUAL); // vai da o pixel de profundidade (coordenada z)
    glEnable (GL_CULL_FACE); // não faz necessário carregar partes que não serão vistas, o que melhora o desempenho
	glCullFace (GL_BACK); //utiliza o cull face para os elementos que não são visíveis e que estão por trás (back)
    glDepthRange ( 0.0f , 1.0f ); //faz a relação normalizada das cordenadas do buffer para a janela
                                //A configuração de (0,1) mapeia o plano próximo a 0 e o plano distante para 1. Com este mapeamento, o alcance do buffer de profundidade é totalmente utilizado.‎
    
    setup_lighting();
    
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}

void display() {
    drawHouse();
}