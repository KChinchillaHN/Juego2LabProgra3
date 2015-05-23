#include "Tubo1.h"
Tubo1::Tubo1(SDL_Renderer* renderer)

{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "tubo.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 247;
    rect_textura.y = 603;
    rect_textura.w = w;
    rect_textura.h = h;
}

void Tubo1::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Tubo1::logica()
{
}

Tubo1::~Tubo1()
{
    //dtor
}
