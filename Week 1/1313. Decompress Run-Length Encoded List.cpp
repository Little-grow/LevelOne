#include<vector>
#include<iostream>

using namespace std;

 vector<int> decompressRLElist(vector<int>& nums)
 {
    int n = nums.size();
    vector<int> res;
    int i = 0;
    while(2*i < n)
    {
        int freq = nums[2*i];
        while(freq--)
            res.push_back(nums[2*i+1]);
        ++i;
    }
    return res;
 }
