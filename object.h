#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
using namespace std;
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Object {
private:
SDL_Rect dest;
SDL_Rect src;
SDL_Texture* tex;

public:
Object() {}
SDL_Rect getDest() const {return dest;}
SDL_Rect getSource() const {return src;}
void setDest(double x, double y, double w, double h);
void setSource(double x, double y, double w, double h);
void setImage(string filename, SDL_Renderer* ren);
SDL_Texture* getTex() const {return tex;}
};

#endif //OBJECT_H
