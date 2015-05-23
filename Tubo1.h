#ifndef TUBO1_H
#define TUBO1_H
#include "Personaje.h"

class Tubo1 : public Personaje
{
    public:
        SDL_Texture *textura, *textura_bala;
        SDL_Rect rect_textura, rect_bala;
        SDL_Renderer *renderer;

        void dibujar();
        void logica();

        Tubo1(SDL_Renderer* renderer);
        virtual ~Tubo1();
    protected:
    private:
};

#endif // TUBO1_H
