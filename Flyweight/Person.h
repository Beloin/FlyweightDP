//
// Created by beloin on 22/04/2022.
//

#ifndef FLYWEIGHT_PERSON_H
#define FLYWEIGHT_PERSON_H


#include "types/PersonType.h"

class Person {
private:
    PersonType *pt;
    int row, column;
    string *name;

public:
    void draw(GameContext context) {
        this->pt->draw(context, row, column);
    }

    Person(PersonType *pt, int row, int column, string name) : pt(pt), row(row), column(column), name(new string(std::move(name))) {}
};


#endif //FLYWEIGHT_PERSON_H
