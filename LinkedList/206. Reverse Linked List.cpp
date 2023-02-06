#include<iostream>
#include"ListNode.h"

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        while (head &&& head->next)
        {
            auto* temp = head->next;
            head->next = head->next->next;
            head = temp;
        }
        return head;
    }
    /* √‰  Õ·› Ì √‰ﬂ „‘ Â »’Ì ›Ì Õ·Ê· ·ÌÂ«*/
};

