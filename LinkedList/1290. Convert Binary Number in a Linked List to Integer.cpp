#include<string>
#include"ListNode.h"
using namespace std;

class Solution {
public:
    int getDecimalValue(ListNode* head) {
		string binary = "";
		while (head)
		{
			binary += to_string(head->val);
			head = head->next;
		}

		int deciaml = 0;
		int base = 1;
		for (int i = binary.length() - 1; i >= 0; i--)
		{
			int lastDigit = stoi(string(1, binary[i])) & 1;
			deciaml += lastDigit * base;
			base *= 2;
		}
		return deciaml;
		
    }

	int binary_to_decimal(string binary)
	{
		int deciaml = 0;
		int base = 1;
		for (int i = binary.length() - 1; i >= 0; i--)
		{
			int lastDigit = stoi(string(1, binary[i])) & 1;
			deciaml += lastDigit * base;
			base *= 2;
		}
		return deciaml;
	}
};