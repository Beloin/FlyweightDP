//
// Created by beloin on 22/04/2022.
//

#ifndef FLYWEIGHT_PERSONTYPE_H
#define FLYWEIGHT_PERSONTYPE_H

#include "string"
#include "../../game/GameContext.h"

using namespace std;

class PersonType {
private:
    string *sprite;
    int size;
    string *color;

public:
    void draw(GameContext context, int row, int column);
    PersonType(string sprite, int size, string color);

};


#endif //FLYWEIGHT_PERSONTYPE_H
