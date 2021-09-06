#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include "drawObj.h"

int VERTEX_COUNT = 0;


TextureInfo **textures = NULL;

Vec3 *VERTICES = NULL;
Vec3 *NORMALS = NULL;
Vec2 *TEX_COORDS = NULL;
Vecs **vecs = NULL;

void aplyTexture(int index){
    if (0 <= index <= MAX_TEXTURE)
    {
        if (textures[index])
        {
            int textureID = textures[index]->textureID;
            glBindTexture(GL_TEXTURE_2D, textureID); // define a textura
            // GL_TEXTURE_2D ==> define que será usada uma textura 2D (bitmaps)
            // textureID ==> define o número da textura
        }
    }
    else
    {
        printf("Indice de textura inválido.");
        exit(1);
    }
}

void drawHouse(){
    /*----------chão--------------*/
    glPushMatrix(); // insere a matriz de transformação corrente na pilha, ou seja, delimita, junto da glPopMatrix() o conjunto de transformações 
    glEnable(GL_TEXTURE_2D); // habilita o uso de texturas
    glTranslatef(0, 0.5, 0); // translação
    // aplyTexture(2); // QUANDO CHEGA AQUI A JANELA FECHA SOZINHA.
    drawObject(17, 1, 1, 1, 0);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
    /*---------------------------*/
}

void drawObject(int index, float r, float g, float b, int ap_texture) {
    if(0 <= index < MAX_TEXTURE) {
        int i;
        float OFF_SET_COL = 0.1;
       
        VERTICES = vecs[index]->VERTICES;
        NORMALS = vecs[index]->NORMALS ;
        TEX_COORDS = vecs[index]->TEX_COORDS;
        VERTEX_COUNT = vecs[index]->VERTEX_COUNT;
        
        if(ap_texture) {
            OFF_SET_COL = 0;
        }
        else {
            OFF_SET_COL = 0.1;
        }

        glBegin(GL_TRIANGLES);
	    for(i = 0; i < VERTEX_COUNT;i++){
            glColor3f (r + OFF_SET_COL , g + OFF_SET_COL , b + OFF_SET_COL) ;
            glTexCoord2f(TEX_COORDS[i].x, TEX_COORDS[i].y);
            glNormal3f(NORMALS[i].x, NORMALS[i].y, NORMALS[i].z);
            glVertex3f(VERTICES[i].x, VERTICES[i].y, VERTICES[i].z);
            OFF_SET_COL = - OFF_SET_COL;
	    }
	    glEnd();
        
    }
    else {
        printf("Indice fora do range permitido: [0, %d)", MAX_TEXTURE);
        exit(1);
    }
}