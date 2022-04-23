//
// Created by beloin on 21/04/2022.
//

#include "GameContext.h"

GameContext::GameContext(int size) : GameContext(size, size) {

}

GameContext::GameContext(int x, int y) {
    this->xs = x;
    this->ys = y;
    this->rows = new char*[x];
    for (int i = 0; i < x; ++i) {
        this->rows[i] = new char[y];
        for (int j = 0; j < y; ++j) {
            this->rows[i][j] = '*';
        }
    }
}

void GameContext::setItem(int x, int y, char value) {
//    int location = (xs * this->x_size) + ys;
    this->rows[x][y] = value;
}

char &GameContext::getItem(int x, int y) {
    return this->rows[x][y];
}

char &GameContext::at(int x, int y) {
    return this->getItem(x, y);
}

void GameContext::output(std::ostream &out) {
    out << "Game: \n";
    for (int x = 0; x < xs; ++x) {
        for (int y = 0; y < ys; ++y) {
            out << this->getItem(x, y) << " ";
        }
        out << "\n";
    }
}
