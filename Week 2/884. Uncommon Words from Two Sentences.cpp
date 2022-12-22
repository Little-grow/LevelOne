#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> Split(string str, string delim)
    {
        size_t  pos = 0;
        vector<string> res;
        string token = "";
        while (( pos = str.find (delim)) != string::npos)
         {
                token = str.substr(0, pos);
                res.push_back(token);
                str.erase(0, pos + delim.size());
         }
         return res;
    }
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        unordered_map<string,int> m;
        vector<string> answer;
        vector<string> str1 = Split(s1," ");
        vector<string> str2 = Split(s2," ");

        for(int i = 0 ; i < str1.size(); i++)
        {
            auto it = m.find(str1[i]);
            if (it != m.end())
                m[str1[i]]++;
            else
                m[str1[i]] = 0;
       }
       for(int i = 0; i < str2.size(); i++)
       {
           auto it = m.find(str2[i]);
           if (it != m.end())
              m[str2[i]]++;
           else
              m[str2[i]]=0;
       }

       for(auto it : m)
       {
           if (it.second != 0)
               answer.push_back(it.first);
       }
       return answer;
    }
};

int main()
{
    return 0;
}
