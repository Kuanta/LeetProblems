//
// Created by erdem on 5.09.2022.
//

#include "Palindrome.h"

void Palindrome::Run()
{

    const int size = 4;
    int list[size] = {
        1,1,0,1
    };

    head = new ListNode<int>();
    ListNode<int> *p_current = head;
    for(int i=0;i<size;++i)
    {
        p_current->value = list[i];
        if(i < size-1)
        {
            ListNode<int>* next = new ListNode<int>();
            next->value = list[i+1];
            p_current->next = next;
            p_current = next;
        }else{
            p_current->next = nullptr;
        }
    }
    input = *head;
    std::cout<<"Is Palindrome:"<<Solve()<<std::endl;
}

bool Palindrome::Solve()
{
    ListNode<int>* head = &input;
    if(head->next == nullptr) return true;
    bool result = true;
    ListNode<int>* oppositeNode = Iterate(head, &result);
    return result;
}

ListNode<int>* Palindrome::Iterate(ListNode<int> *current, bool *result)
{
    if(current->next == nullptr) //Reached the end
    {

        return current;
    }
    ListNode<int>* edge = Iterate(current->next, result);

    if(head->value == edge->value)
    {
        head = head->next;
    }else{
        *result = false;
    }
    return current;
}