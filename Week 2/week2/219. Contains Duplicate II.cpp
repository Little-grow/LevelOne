#include<iostream>
#include<unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
         unordered_map<int,int> m;
         int n = nums.size();
         for (int i = 0; i < n; i++)
         {
             int e = nums[i];
             auto it = m.find(e);
             if (it != m.end() && (abs(i - m[e]) <= k ))
                    return true;

             m[e]=i;
         }

         return false;
    }
};
