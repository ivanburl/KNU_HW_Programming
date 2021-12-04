

#ifndef YAHTZEE_RANDOM_H
#define YAHTZEE_RANDOM_H

#include <random>

class Random {
private:
    std::random_device device;
    std::mt19937 randomizer;
    std::uniform_int_distribution<std::mt19937::result_type> range;

public:
    Random(int min_value,int max_value);
    int get_next();
};


#endif //YAHTZEE_RANDOM_H
