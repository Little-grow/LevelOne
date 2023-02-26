#include<iostream>
#include"ListNode.h"

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* temp = nullptr;
        ListNode* prev = nullptr;
        while (head)
        {
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
};

