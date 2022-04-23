# Flywight

- Muitos objetos a serem criados
- Usável para definir estados intrínsecos em comum aos objetos, ou seja, os dados que não mudam dependendo do contexto.

Jogo de tiro, "sprites" para tiros, personagens e ambiente.

Bala é um Flywight.
Personagem é um Flyweight
Itens do ambiente também são Flyweight.


GunType <- Gun
GunTypeFactory <- GunDisplay

Gun:
 - bulletsLeft
 - xs, ys
 - GunType (Intrinsic State)

Person:
 - xs, ys
 - hp
 - magic
 - PersonType (Intrinsic State)

Wall:
 - xs, ys
 - xe, ye
 - WallType (Intrinsic State)

GameContext:
 - matrix: Matrix

Game:
 - context: GameContext