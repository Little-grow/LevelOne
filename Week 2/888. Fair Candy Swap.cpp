#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>&
    A, vector<int>& B)
    {
        vector<int> answer;
        int bSum = accumulate(B.begin(), B.end(), 0);
        int half = (accumulate(A.begin(), A.end(), 0) + bSum)/2;

        for (int i = 0 ; i < A.size(); i++)
        {
            int toFind = bSum + A[i] - half;
            vector<int>::iterator it = find(B.begin(), B.end(), toFind);
             if(it!=B.end()){
                return vector<int> {A[i], *it};
            }
        }
        return vector<int> {0,0};
    }
};
