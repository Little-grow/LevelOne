#include<vector>
#include<iostream>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr)
{
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for(int i = 1 ; i<n ; i++)
    {
        prefixSum[i]= prefixSum[i-1]+arr[i];
    }

    long long summation = prefixSum[n-1] ;
    for(int i = 2; i < n ; i+=2)
    {
        summation+=prefixSum[i];
        int j=i+1, k =0;
        while(j!=n)
        {
            summation+=prefixSum[j]-prefixSum[k];
            ++j, ++k;
        }
    }
    return summation;
}
