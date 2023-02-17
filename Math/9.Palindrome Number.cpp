#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        string s = to_string(x);
        int n = s.length()-1;
        for (int i = 0; i < s.length()/2; i++)
        {

            if (s[i] != s[n])
                return false;
            n--;
        }
        return true;
    }
}; 0