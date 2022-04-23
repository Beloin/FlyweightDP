//
// Created by beloin on 21/04/2022.
//

#ifndef FLYWEIGHT_GUN_H
#define FLYWEIGHT_GUN_H


#include "types/GunType.h"

class Gun {
private:
    GunType *type;
    int row, column;

public:
    Gun(GunType *type, int row, int column) : type(type), row(row), column(column) {}

    void draw(GameContext context) {
        this->type->draw(context, row, column);
    }

    void shoot(GameContext ctx, int x_aim, int y_aim);
};


#endif //FLYWEIGHT_GUN_H
