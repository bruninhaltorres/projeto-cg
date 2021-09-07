#include <GL/gl.h>
#include <GL/glut.h>

int d = 20, p, gx=0, hy=0, hxc=496, gyc=795, gyc, ha, gb;

void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);

    //paredes da cozinha

    //parede esquerda
    glColor3ub (139, 99, 108);
    glBegin(GL_POLYGON);
    glVertex3f (3, 250, 0);
    glVertex3f (390, 350, 0);
    glVertex3f (390, 1000, 0);
    glVertex3f (0, 1000, 0);
    glEnd();

    //parede do meio
    glColor3ub (139, 99, 120);
    glBegin(GL_POLYGON);
    glVertex3f (390, 350, 0);
    glVertex3f (1000, 250, 0);
    glVertex3f (1000, 1000, 0);
    glVertex3f (390, 1000, 0);
    glEnd();

    //teto
    glColor3ub (155,142,126);
    glBegin(GL_POLYGON);
    glVertex3f (650, 1000, 0);
    glVertex3f (390, 950, 0);
    glVertex3f (180, 1000, 0);
    glEnd();

    //wall right-right
    // glColor3ub (46,139,87);
    // glBegin(GL_POLYGON);
    // glVertex3f (600, 300, 0);
    // glVertex3f (1000, 250, 0);
    // glVertex3f (1000, 1000, 0);
    // glVertex3f (600, 1000, 0);
    // glEnd();

    //floor - white
    glColor3ub (71,71,71);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (0, 250, 0);
    glVertex3f (390, 350, 0);
    glVertex3f (1000, 250, 0);
    glVertex3f (1000, 0, 0);
    glEnd();

    //window left
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (230, 500, 0);
    glVertex3f (325, 520, 0);
    glVertex3f (325, 900, 0);
    glVertex3f (230, 900, 0);
    glEnd();

    //window left - right inner
    glColor3ub (131,102,92);
    glBegin(GL_POLYGON);
    glVertex3f (310, 890, 0);
    glVertex3f (325, 900, 0);
    glVertex3f (325, 520, 0);
    glVertex3f (310, 525, 0);
    glEnd();

    //window left - bottom
    glColor3ub (195,182,166);
    glBegin(GL_POLYGON);
    glVertex3f (230, 500, 0);
    glVertex3f (325, 520, 0);
    glVertex3f (310, 525, 0);
    glVertex3f (230, 510, 0);
    glEnd();

    //window left - top
    glColor3ub (195,182,166);
    glBegin(GL_POLYGON);
    glVertex3f (230, 900, 0);
    glVertex3f (325, 900, 0);
    glVertex3f (310, 890, 0);
    glVertex3f (230, 890, 0);
    glEnd();

    //window left grill-middle-vertical
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (275, 512, 0);
    glVertex3f (280, 512, 0);
    glVertex3f (280, 895, 0);
    glVertex3f (275, 895, 0);
    glEnd();

    //window left grill-bottom
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (230, 600, 0);
    glVertex3f (320, 615, 0);
    glVertex3f (320, 625, 0);
    glVertex3f (230, 610, 0);
    glEnd();

    //window left grill-middle
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (230, 700, 0);
    glVertex3f (320, 715, 0);
    glVertex3f (320, 725, 0);
    glVertex3f (230, 710, 0);
    glEnd();

    //window left grill-top-horizontal
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (230, 800, 0);
    glVertex3f (320, 810, 0);
    glVertex3f (320, 820, 0);
    glVertex3f (230, 810, 0);
    glEnd();

    //window right
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (1000, 500, 0);
    glVertex3f (900, 500, 0);
    glVertex3f (900, 900,0);
    glVertex3f (1000,900, 0);
    glEnd();
    //window right-inner bottom
    glColor3ub (105,87,62);
    glBegin(GL_POLYGON);
    glVertex3f (1000, 500, 0);
    glVertex3f (900, 500, 0);
    glVertex3f (910, 510,0);
    glVertex3f (1000,510, 0);
    glEnd();
    //window right-inner left
    glColor3ub (131,102,92);
    glBegin(GL_POLYGON);
    glVertex3f (900, 900, 0);
    glVertex3f (910, 890, 0);
    glVertex3f (910, 510,0);
    glVertex3f (900,500, 0);
    glEnd();

    //window right-inner top
    glColor3ub (102,87,62);
    glBegin(GL_POLYGON);
    glVertex3f (900, 900, 0);
    glVertex3f (910, 890, 0);
    glVertex3f (1000, 890,0);
    glVertex3f (1000,900, 0);
    glEnd();

    //window right grill bottom-vertical
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (905, 600, 0);
    glVertex3f (1000, 600, 0);
    glVertex3f (1000, 610,0);
    glVertex3f (905,610, 0);
    glEnd();

    //window right grill middle-vertical
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (905, 700, 0);
    glVertex3f (1000, 700, 0);
    glVertex3f (1000, 710,0);
    glVertex3f (905,710, 0);
    glEnd();

    //window right grill top-vertical
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (905, 800, 0);
    glVertex3f (1000, 800, 0);
    glVertex3f (1000, 810,0);
    glVertex3f (905,810, 0);
    glEnd();

    //window right grill bottom-horizontal
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (965, 505, 0);
    glVertex3f (965, 895, 0);
    glVertex3f (970, 895,0);
    glVertex3f (970,505, 0);
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