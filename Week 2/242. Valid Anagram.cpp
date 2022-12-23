#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int>sMap;
        unordered_map<char, int>tMap;

        if (s.length() != t.length())
            return false;

        for (size_t i = 0; i < s.length(); i++)
        {
            sMap[s[i]]++;
        }

        for (size_t i = 0; i < t.length(); i++)
        {
            tMap[t[i]]++;
        }

        for (auto& i : sMap)
        {
            if (!tMap.count(i.first))
                return false;
            if (tMap[i.first] != i.second)
                return false;
        }   
        return true;
    }
};