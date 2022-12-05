#include<vector>
#include<iostream>

using namespace std;

int findLucky(vector<int>& arr)
 {
    int freq[500] {};
    for(int x : arr)
    {
        ++freq[x];
    }
    for (int i= 1 ; i <= 500; i ++)
        if(freq[i]==i)
            return i;
    return -1;
 }
