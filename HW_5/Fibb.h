#ifndef HW_FIBB_H
#define HW_FIB_H

#include<iostream>

class Fibb {
    private:
        long long f1 = 0, f2 = 0, f3 = 1;
    public:
        long long next();
};

#endif