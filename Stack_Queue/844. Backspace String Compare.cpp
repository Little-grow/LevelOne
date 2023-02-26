#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char>s1, t1;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '#' && !s1.empty())
            {
                s1.pop();
                continue;
            }
            s1.push(s[i]);
               
        }
        for (size_t i = 0; i < t.length(); i++)
        {
            if (t[i] == '#' && !t1.empty())
            {
                t1.pop();
                continue;
            }
            else
                t1.push(t[i]);
        }
        if (s1.size() != t1.size()) {
            return false;
        }
        while (!s1.empty()) {
            if (s1.top() != t1.top()) {
                return false;
            }
            s1.pop();
            t1.pop();
        }
        return true;
    }
};