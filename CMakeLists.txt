cmake_minimum_required(VERSION 3.10)
project(flyweight)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        flyweight
        game/GameContext.cpp
        game/GameContext.h
        Flyweight/types/PersonType.cpp
        Flyweight/types/PersonType.h
        Flyweight/types/GunType.cpp
        Flyweight/types/GunType.h
        Flyweight/Person.cpp
        Flyweight/Person.h
        Flyweight/Gun.cpp
        Flyweight/Gun.h

        main.cpp
)
