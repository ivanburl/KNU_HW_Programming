
#include "Dice.h"

void Dice::next_roll() {
    dice = randomizer.get_next();
}

int Dice::current_number_on_dice() {
    return this->dice;
}
