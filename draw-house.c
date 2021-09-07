#include <GL/gl.h>
#include <GL/glut.h>

int d = 20, p, gx=0, hy=0, hxc=496, gyc=795, gyc, ha, gb;

void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);

    //paredes da cozinha

    //parede esquerda
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex3f (3, 250, 0);
    glVertex3f (390, 350, 0);
    glVertex3f (390, 1000, 0);
    glVertex3f (0, 1000, 0);
    glEnd();

    //parede do meio
    glColor3ub (139, 99, 108);
    glBegin(GL_POLYGON);
    glVertex3f (390, 350, 0);
    glVertex3f (1000, 250, 0);
    glVertex3f (1000, 1000, 0);
    glVertex3f (0, 0, 0); //quando comenta essa linha a parede deita
    glEnd();


    //processamento de rotina de coloração do open gl
    p = 1 - d;

    if (p<0)
    {
        gx = gx+1;
        hy = d;
        p = p + (2*gx)+1;
    }
    else
    {
        gx = gx + 1;
        hy = d - 1;
        p = p + (2*gx)+1-(2*hy) ;
    }

    ha = gx ;
        gb = hy ;
        glColor3f (1.0, 0.0, 0.0);

        glBegin(GL_POLYGON);
        glVertex2i (ha+hxc, gb+gyc);
        glVertex2i ( gb+hxc,ha+gyc);
        glVertex2i (ha+hxc,-1*gb+gyc);
        glVertex2i (-1*ha+hxc,gb+gyc);
        glVertex2i (-1*ha+hxc,-1*gb+gyc);
        glVertex2i ( gb+hxc,-1*ha+gyc);
        glVertex2i ( -1*gb+hxc,ha+gyc);
        glVertex2i ( -1*gb+hxc,-1*ha+gyc);
        glEnd();

        while(gx<hy){

        if (p<0)
        {
            gx = gx+1;
            hy = hy;
            p = p + (2*gx)+1;
        }
        else
        {
            gx = gx + 1;
            hy = hy - 1;
            p = p + (2*gx)+1-(2*hy) ;
        }

        ha = gx ;
        gb = hy ;
        glColor3f (1.0, 0.0, 0.0);

        glBegin(GL_POLYGON);
        glVertex2i (ha+hxc, gb+gyc);
         glVertex2i ( gb+hxc,ha+gyc);
        glVertex2i (ha+hxc,-1*gb+gyc);
        glVertex2i (-1*ha+hxc,gb+gyc);
        glVertex2i (-1*ha+hxc,-1*gb+gyc);
        glVertex2i ( gb+hxc,-1*ha+gyc);
        glVertex2i ( -1*gb+hxc,ha+gyc);
        //glVertex2i ( -1*gb+hxc,-1*ha+gyc);
        glEnd();
    }

    glFlush(); // enviar para o hardware todos os comandos emitidos até ao momento
}

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0); //limpa o buffer de cores e especifica o rgb
    
    glMatrixMode(GL_PROJECTION); //especifica qual matriz que estamos usando
                                //GL_PROJECTION: aplica operações de matriz subsequentes à pilha de matriz de projeção. 
    glLoadIdentity(); //seta a minha matriz com sua matriz identidade equivalente 
    glOrtho(0.0, 1000.0, 0.0, 1000.0, 0.0, 1000.0);

}

int main(int argc, char** argv) { // argc: numero de parâmetros fornecidos
                                  // argv: contém as strings.
    glutInit(&argc, argv); //glutInit: inicializa a biblioteca GLUT
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); //displayMode: indico que vou usar o OpenGL em janela
                                                //GLUT_SINGLE: bit mask ativado para usar apenas uma única janela
                                                //GLUT_RGB: coloco minha janela no modo RGBA/RGB
    glutInitWindowSize (1280, 720); //defino o tamanho da janela
    glutInitWindowPosition(10, 10); //defino em que posição x,y minha janela vai ser inicializada
    glutCreateWindow("DRAW-HOUSE"); //crio a janela com as especificações acima e passo um nome como parâmetro
    init();
    glutDisplayFunc(display); //indico qual função vai ser o meu display (o que deve aparecer em tela)

    glutMainLoop(); // Em casos em que temos animações é necessário manter em loop.

    return 0;
}