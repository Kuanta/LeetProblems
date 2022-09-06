//
// Created by erdem on 5.09.2022.
//

#ifndef LEETCODE_PALINDROME_H
#define LEETCODE_PALINDROME_H

#include <iostream>
#include "Problem.h"
#include "Utils/LinkedList.h"

class Palindrome : public Problem<bool>{
public:
    ListNode<int> input;

public:
    Palindrome(){}
    void Run();
    bool Solve();

private:
    ListNode<int>* head = nullptr;
    ListNode<int>* Iterate(ListNode<int> *current, bool *result);
};


#endif //LEETCODE_PALINDROME_H
