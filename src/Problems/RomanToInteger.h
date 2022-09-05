#ifndef ROMANTOINTEGER_H
#define ROMANTOINTEGER_H

#include <iostream>
#include <map>
#include "Problem.h"

class RomanToInteger : public Problem<int>{
    //Members
private:
    std::map<char, int> romanNumbersMap;

    //Methods
public:
    RomanToInteger();
    RomanToInteger(std::string input);
    int Solve();
    int RomanToDecimal(char roman);

private:
    void Initialize();
};


#endif //ROMANTOINTEGER_H
