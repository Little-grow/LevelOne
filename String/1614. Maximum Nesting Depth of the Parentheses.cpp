#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int maxDepth(string s) 
    {
        int depth = 0;
        int maxDepth = 0;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                depth += 1, maxDepth = max(depth, maxDepth);
            else if (s[i] == ')')
                depth -= 1;
        }
        return maxDepth;
    }
};