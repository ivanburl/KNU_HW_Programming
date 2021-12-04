
#ifndef YAHTZEE_DICE_H
#define YAHTZEE_DICE_H

#include"Random.h"

class Dice {
private:
    Random randomizer = Random(1,6);
    int dice = -1;
public:
    void next_roll();
    int current_number_on_dice();
};


#endif //YAHTZEE_DICE_H
