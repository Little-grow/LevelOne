#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for (auto& ch : s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
                parentheses.push(ch);
            else
            {
                if (parentheses.empty()) 
                    return false;
                else
                {
                    char top = parentheses.top();
                    if ((ch == ')' && top != '(') ||
                        (ch == '}' && top != '{') ||
                        (ch == ']' && top != '['))
                        return false;
                    parentheses.pop();
                }
            }
           
        }
        return parentheses.empty();
    }
};