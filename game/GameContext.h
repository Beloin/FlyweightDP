//
// Created by beloin on 21/04/2022.
//

#ifndef FLYWEIGHT_GAMECONTEXT_H
#define FLYWEIGHT_GAMECONTEXT_H
#include "iostream"

class GameContext {
private:
    char **rows;
    int xs;
    int ys;

public:
    explicit GameContext(int size);
    GameContext(int x, int y);

    void setItem(int x, int y, char value);
    char &getItem(int x, int y);
    char &at(int x, int y);

    void output(std::ostream &out);
};


#endif //FLYWEIGHT_GAMECONTEXT_H
