#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
   void shift(vector<vector<int>>& grid){
      int n = grid.size();
      int m = grid[0].size();
      int x = grid[n-1][m-1];
      for(int i = n-1; i>=0; i--){
         for(int j = m-1;j>=0;j--){
            if(j == 0 && i>0){
               grid[i][j] = grid[i-1][m-1];
            }
            else if(j>0){
               grid[i][j] = grid[i][j-1];
            }
         }
      }
       grid[0][0] = x;
   }
   vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
      while(k--){
         shift(g);
      }
      return g;
   }
};

