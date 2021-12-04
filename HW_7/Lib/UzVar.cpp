#include"UzVar.h"

bool UzVar::isSet() const {
    return _isSet;
}

void UzVar::SetVal(std::string val) {
    this -> value = val;    
}

void UzVar::SetName(std::string name) {
    this -> name = name;
}

bool UzVar::Clear() {
    name.clear();
    value.clear();
    return true;
}

std::string UzVar::GetVal() const {
    return value;
}

std::string UzVar::GetName() const {
    return name;
}