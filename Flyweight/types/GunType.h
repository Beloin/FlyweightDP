//
// Created by beloin on 21/04/2022.
//

#ifndef FLYWEIGHT_GUNTYPE_H
#define FLYWEIGHT_GUNTYPE_H

#include "string"
#include "../../game/GameContext.h"

using namespace std;

class GunType {

private:
    string *sprite;
    int size;
    string *color;

public:
    void draw(GameContext context, int x, int y);
    GunType(string *sprite, int size, string *color);
    GunType(string sprite, int size, string color);
};


#endif //FLYWEIGHT_GUNTYPE_H
