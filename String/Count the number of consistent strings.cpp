#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string>& words)
    {
        unordered_map<char, int> mp;
        for (size_t i = 0; i < allowed.size(); i++)
            mp[allowed[i]] = i;

        int cnt = words.size();
        for (size_t i = 0; i < words.size(); i++)
        {
            int j = 0;
            if (!mp.count(words[i][j]))
            {
                cnt--;
                continue;
            }
            j++;
        }
        return cnt;
    }
};