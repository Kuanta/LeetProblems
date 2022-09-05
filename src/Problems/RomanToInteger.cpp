//
// Created by erdem on 5.09.2022.
//

#include "RomanToInteger.h"

int RomanToInteger::Solve()
{
    int value = 0;
    int previousValue = INT_MAX;
    for(int i=0;i<this->input.size();++i)
    {
        int currentValue = RomanToDecimal(input.at(i));

        //Handle edge cases
        if(currentValue > previousValue)
        {
            value = (value - previousValue) + currentValue - previousValue;
        }else
        {
            value += currentValue;
        }
        previousValue = currentValue;
    }
    std::cout<<"Decimal of "<<input<<" is "<<value<<std::endl;
    return value;
}

RomanToInteger::RomanToInteger(std::string input) : Problem(input) {
    Initialize();
}

RomanToInteger::RomanToInteger() : Problem()
{
    Initialize();
}

void RomanToInteger::Initialize()
{
    romanNumbersMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
    };
}

int RomanToInteger::RomanToDecimal(char roman)
{
    if(romanNumbersMap.find(roman) == romanNumbersMap.end())
    {
        std::cout<<roman<<" isn't a roman number"<<std::endl;
        return 0;
    }
    return romanNumbersMap[roman];
}