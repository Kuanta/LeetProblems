#ifndef PROBLEM_H
#define PROBLEM_H

#include <string>

template <typename T>
class Problem
{
public:
    std::string input;

public:
    Problem()
    {
        input = "";
    }
    Problem(std::string input)
    {
        this->input = input;
    }
    virtual T Solve() = 0;
};
#endif //PROBLEM_H
