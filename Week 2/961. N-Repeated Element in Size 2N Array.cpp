#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums)
    {
        int n = (int) nums.size();
        unordered_map<int,int> m ;
        for(int i = 0; i < n ; i++)
        {
            m[nums[i]]++;
            if (m.count(nums[i]) == n/2)
                return nums[i];
        }


    }
};
