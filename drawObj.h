#define MAX_TEXTURE 50

typedef struct TextureInfo{
    int textureID;
}TextureInfo;

typedef struct Vec2 {
	float x, y;
}Vec2;

typedef struct Vec3 {
	float x, y, z;
}Vec3;

typedef struct Vecs {
    Vec3 *VERTICES;
    Vec3 *NORMALS;
    Vec2 *TEX_COORDS;
    int VERTEX_COUNT;
}Vecs;

void drawHouse();
void drawObject(int index,  float r, float g, float b, int ap_texture);
void aplyTexture();