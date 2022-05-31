#include"Fibb.h"

long long Fibb::next() {
    
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
    return f2;
}