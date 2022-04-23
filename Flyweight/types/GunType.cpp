//
// Created by beloin on 21/04/2022.
//

#include "GunType.h"

#include <utility>

GunType::GunType(string *sprite, int size, string *color) : sprite(sprite), size(size), color(color) {}

void GunType::draw(GameContext context, int x, int y) {
    // Row
    int row = x;
    // Column
    int column = y;
    for (char i : *this->sprite) {
        context.at(row, column) =  i;
//        context.setItem(row, column, i);
        column++;
    }
}

GunType::GunType(string sprite, int size, string color) {
    this->sprite = new string(std::move(sprite));
    this->color = new string(std::move(color));
    this->size = size;
}

