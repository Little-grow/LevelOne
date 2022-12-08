 #include<vector>
#include<iostream>

using namespace std;

 bool isToeplitzMatrix(vector<vector<int>>& matrix)
    {
        int n = matrix[0].size();
        int m = matrix.size();
        for (int i = m-1; i > 0; i++)
        {
            for(int j = n-1; j > 0; j++)
            {
                if (matrix[i][j] != matrix[i-1][j-1])
                        return false;
            }
        }
        return true;
    }
