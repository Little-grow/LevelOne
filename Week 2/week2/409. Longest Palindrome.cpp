#include<iostream>
#include<unordered_map>
using namespace std;

class Solution { // acc
public:
    int longestPalindrome(string s) {
     int odd = 0 ;
     unordered_map<char, int> m;
     for (auto c: s)
        odd += m[c]++ %2 ? -1 : 1;
     return min(s.size(), s.size() - odd + 1);
    }
};



class Sln { // acc
public:
    int longestPalindrome(string s) {

      int chars[52];
      int x = s.size();
        for (int i =0 ; i < x; i++)
        {
            char c = s[i];
            if (s[i] <= 'z' && s[i] >='a')
            {
                chars[c-'a']++;
            }
            else
            {
                chars[c-'A'+26]++;
            }
        }
        int count = 0;
        for (int i = 0; i < 52; i++)
        {
            count += chars[i]/2;
        }
        count *= 2 ;
    return min(x , count + 1);
    }
};
