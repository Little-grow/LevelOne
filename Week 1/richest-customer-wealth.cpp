#include <iostream>
#include<vector>
// #include<bits/stdc++.h>

using namespace std;

int maximumWealth(vector<vector<int>>&accounts) {
    int wealth = 0;
    for (vector<int> Customer : accounts)
    {
        int sum = 0;
        for (int x : Customer)
        {
            sum+=x;
        }
       wealth = max(sum,wealth);
    }
    return wealth;
}

