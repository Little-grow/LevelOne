#include<vector>
#include<iostream>

using namespace std;
 int diagonalSum(vector<vector<int>>& mat)
  {
      int n = mat.size();
      int sum = 0;

      for (int i = 0 ; i <n ; i++)
      {
        for (int j = 0;  j < n ; j++)
        {
            if(i==j)
                sum+=mat[i][j];
           else if ((j+i) == (n-1))
                sum+=mat[i][j];
        }
      }
      return sum;
  }
