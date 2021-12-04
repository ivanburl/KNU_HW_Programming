

#include "Random.h"

Random::Random(int min_value, int max_value) {
    randomizer.seed(device());
    std::uniform_int_distribution<std::mt19937::result_type> tmp(min_value,max_value);
    this->range = tmp;
}

int Random::get_next() {
    return range(randomizer);
}

