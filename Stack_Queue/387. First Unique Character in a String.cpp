#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();

        vector<int> count(26);

        for (char c : s) {
            count[c - 'a'] += 1;
        }

        for (int i = 0; i < n; i++) {
            if (count[s[i] - 'a'] == 1) return i;
        }

        return -1;
    }
};