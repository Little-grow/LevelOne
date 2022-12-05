#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int minStartValue(vector<int>& nums)
 {
     int cumMin = INT_MAX;
     int cumSum = 0;

     for(int i = 0; i < nums.size() ; i++)
     {
       cumSum+=nums[i];
       cumMin = min(cumMin,cumSum);
     }
    if (cumMin > 0) return 1;
    return -cumMin + 1;
 }
