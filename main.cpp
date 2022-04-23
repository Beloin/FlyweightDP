//
// Created by beloin on 20/04/2022.
//

#include "game/GameContext.h"
#include "iostream"
#include "Flyweight/types/GunType.h"
#include "Flyweight/Gun.h"
#include "Flyweight/Person.h"

using namespace std;

int main() {
    auto game = GameContext(20);

    auto pistol = new GunType("pistol.png", 2, "White");
    auto ak47 = new GunType("ak47.svg", 4, "Black");
    auto defaultPerson = new PersonType("Person.suv", 12, "blue");

    auto user = new Person(defaultPerson, 4, 1, "Julian");
    auto userPistol = new Gun(pistol, 3, 4);
    auto user2Pistol = new Gun(pistol, 4, 0);
    auto userAk = new Gun(ak47, 5, 6);


    userPistol->draw(game);
//    user2Pistol->draw(game);
    userAk->draw(game);
    user->draw(game);

    game.output(std::cout);

    return 0;
}