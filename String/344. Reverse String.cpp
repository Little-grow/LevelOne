#include<algorithm>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size() - 1;
        int j = 0;
        for (int i = n; i >= n/2; i--)
        {
            char x = s[j];
            s[j++] = s[i];
            s[i] = x;
        }
    }
};