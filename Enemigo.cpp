#include "Enemigo.h"
Enemigo::Enemigo(SDL_Renderer* renderer)

{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigo.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 247;
    rect_textura.y = 596;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "tubo.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 10;
    rect_bala.y = 800;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Enemigo::logica()
{
    rect_textura.y-=1;
    if(rect_textura.y==430)
    {
        rect_textura.y+=1;
    }
}

Enemigo::~Enemigo()
{
    //dtor
}
