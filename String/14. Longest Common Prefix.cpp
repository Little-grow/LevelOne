#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int len = INT_MAX;
        string shortStr;
        for (auto& str: strs)
        {
            if (str.length() < len)
            {
                len = str.length();
                shortStr = str;
            }
        }

        string prefix = ""; 
        bool ok = true;
        for (size_t i = 0; i < len && ok; i++)
        {
            for (size_t j = 0; j < strs.size() && ok; j++)
            {
                if (shortStr[i] != strs[j][i])
                    ok = false;
            }
            if (ok)
                prefix += shortStr[i];
        }
        return prefix;
    }
};