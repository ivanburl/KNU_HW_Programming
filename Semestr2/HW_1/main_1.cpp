//1. Як зробити запам'ятовування яке поле юніона викортстовується.
#include<bits/stdc++.h>
using namespace std;

enum class DataType
{
    Integer, Float
};

//here we can save all info about used type
struct Data {
    DataType type;
    union {
        int a;
        float b;
    };
};

void whichType(Data &data) {
    switch (data.type)
    {
    case DataType::Integer:
        /* code */
        break;
    case DataType::Float:
        /* code */
        break;
    default:
        /* code */
        break;
    }
}

//in C++17 exist variant class


int main() {
    Data example1, example2;
    example1.type = DataType::Integer;
    example1.a = 0;

    example2.type = DataType::Float;
    example2.b = 0.1f;


    //for comparison with variant using

    variant<int, float> v1;
    v1 = 42; //now it is float

    int res = get<int>(v1); // or get<0> (first type in variant declaration)
    float res2;
    try {
        res2 = get<float>(v1);
    } catch (const std::bad_variant_access& ex) {
        std::cout << ex.what() << '\n';
    }

    //Really... Both are extremelly ugly =)
}

//3. Написати програму з прикладом перевантаження.

