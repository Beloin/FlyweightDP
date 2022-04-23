//
// Created by beloin on 22/04/2022.
//

#include "PersonType.h"

#include <utility>

void PersonType::draw(GameContext context, int row, int column) {
    char head = 'O';
    char body = '|';
    char arm = '-';
    char leftLeg = '/';
    char rightLeg = '\\';

    // Starts with left leg
    context.setItem(row, column, leftLeg);
    // Right leg
    context.setItem(row, column+2, rightLeg);

    // Body
    context.setItem(row-1, column+1, body);
    // Left Arm
    context.setItem(row-1, column, arm);
    // Right arm
    context.setItem(row-1, column+2, arm);
    // Head
    context.setItem(row-2, column+1, head);
}

PersonType::PersonType(string sprite, int size, string color) :
sprite(new string(std::move(sprite))), size(size), color(new string (std::move(color))) {}
