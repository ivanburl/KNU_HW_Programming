
#ifndef UZVARLIB_UZVAR_H
#define UZVARLIB_UZVAR_H

#include<string>

class UzVar{
private:
    std::string name = "";
    std::string value = "";
    bool _isSet= 0;
public:
    UzVar() = default;
    UzVar(std::string name, std::string value): name(name), value(value) {};
    bool isSet() const;
    void SetVal(std::string value);
    void SetName(std::string name);
    bool Clear();
    std::string GetVal() const;
    std::string GetName() const;
};

#endif