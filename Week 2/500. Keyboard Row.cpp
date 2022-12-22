#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
       unordered_set<char> s1 ({'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o','p'});
       unordered_set<char> s2 ({'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'});
       unordered_set<char> s3 ({'z', 'x', 'c', 'v', 'b', 'n', 'm'});
        vector<string> res;

       for (int i =0 ; i < words.size(); i++)
       {
           int n = words[i].size();
           string wrd = words[i];
           transform(wrd.begin(), wrd.end(), wrd.begin(), ::tolower);
           unordered_set<char> w (wrd, wrd+n);
              if (w <= s1 || w <= s2 || w <= s3)
                res.push_back(word);
       }


       for(auto word : words)
       {
           int n = word.length();
           string wrd = (word.lo);
           unordered_set<char> w (wrd, wrd+n);
           if (w <= s1 || w <= s2 || w <= s3)
                res.push_back(word);
       }
       return res;
    }
};
