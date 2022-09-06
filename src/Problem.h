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
    //Run with test cases
    virtual void Run(){}

    //Solves the problem
    virtual T Solve() = 0;
};
#endif //PROBLEM_H
