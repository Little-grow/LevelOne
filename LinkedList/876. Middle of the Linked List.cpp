#include<iostream>
#include"ListNode.h"

using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
		ListNode* cur = head;
		int count = 0;
		while (cur!=NULL)
		{
			cur = cur->next;
			++count;
		}
		count % 2 != 0 ? count /= 2 : (count /= 2) + 1;
        cur = head;
		while (count--)
		{
			cur = cur->next;
		}
		return cur;
    }
};