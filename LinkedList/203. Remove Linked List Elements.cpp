#include<iostream>
#include"ListNode.h"

using namespace std;


class Solution 
{
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        if (head == NULL)
            return NULL;
        head->next = removeElements(head->next, val);
        return head->val == val ? head : head->next;
    }
};