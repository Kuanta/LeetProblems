#include "Problems/RomanToInteger.h"

#include <iostream>

int main() {
    std::string input = "MCMXCIV";
    RomanToInteger rti(input);
    int solution = rti.Solve();
    return 0;
}
