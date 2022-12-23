#include<iostream>
#include<unordered_map>

using namespace std; 

class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char, char> m;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (m.count(s[i]) && t[i] != m[s[i]])
                return false;
            else
            {
                for (auto& x : m)
                {
                    if (x.second == t[i])
                        return false;
                }
            }
            m[s[i]] = t[i];
        }
        return true;
    }
};