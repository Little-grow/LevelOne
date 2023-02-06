#include <iostream>
#include<vector>
#include<algorithm>
 using namespace std;
int maxProduct(vector<int>& nums)
{
  sort(nums.begin(), nums.end(), greater<int>());
   int n1 = nums[0] - 1 ;
   int n2 = nums[1] - 1;
    return n1 * n2;
}

