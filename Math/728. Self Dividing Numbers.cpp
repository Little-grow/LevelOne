#include<vector>
#include<algorithm>
#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:

    bool isSelfDividingNumber(int n, unordered_map<int,bool>&memo)
    {
        if (n < 10)
            return true;
        if (memo.find(n) != memo.end())
            return memo[n];
        int num = n;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit == 0 || n % digit != 0)
            {
                memo[n] = false;
                return false;
            }
            num /= 10;
        }
        memo[n] = true;
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> res;
        unordered_map<int, bool> memo;
        for (int n = left; n < right+1; n++)
        {
            if (isSelfDividingNumber(n, memo))
                res.push_back(n);
        }
    }
  
};