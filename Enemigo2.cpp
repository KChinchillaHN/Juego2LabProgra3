#include "Enemigo2.h"

Enemigo2::Enemigo2(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigo2.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 10;
    rect_textura.y = 700;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala2.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 10;
    rect_bala.y = 700;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo2::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Enemigo2::logica()
{
    rect_textura.x+=8;
    if(rect_textura.x==1500)
    {
        rect_textura.x=10;
    }
}

Enemigo2::~Enemigo2()
{
    //dtor
}
