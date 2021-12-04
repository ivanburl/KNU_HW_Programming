
#ifndef YAHTZEE_PLAYER_H
#define YAHTZEE_PLAYER_H

#include"Dice.h"
#include<vector>
#include<stdlib.h>
#include<iostream>
#include<string>

class Player {
private:
    const std::vector<std::string> names_of_categories = {
            "Ones", "Twos", "Threes", "Fours", "Fives", "Sixes",
            "Three of a kind", "Four of a kind", "Full House",
            "Small straight", "Large straight", "Chance",
            "Yahtzee"
    };

    int categories[13];//13 categories of win
    Dice dices[5];//five dices for game
    bool locked[5];//dices which we locked
    int score = 0;//final score
    int number_of_payer = -1;// the number of player

public:
    Player(int number);
    void roll_dices();
    bool lock_dices(std::vector<int> &lockers);
    bool choose_category(int category);
    void print_current_result();
    void print_divider();
    int calculate(int category);
    std::vector<std::string> get_combinations();
};


#endif //YAHTZEE_PLAYER_H
