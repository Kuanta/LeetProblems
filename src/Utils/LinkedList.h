#ifndef LEETCODE_LINKEDLIST_H
#define LEETCODE_LINKEDLIST_H

template<typename T>
struct ListNode
{
    T value;
    ListNode* next;
    ListNode()
    {
        next = nullptr;
    }
    ListNode(T value)
    {
        this->value = value;
        next = nullptr;
    }
    ListNode(T value, ListNode *next)
    {
        this->value = value;
        this->next = next;
    }

};
#endif //LEETCODE_LINKEDLIST_H
