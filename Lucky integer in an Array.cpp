#include<vector>
#include<iostream>

using namespace std;

int findLucky(vector<int>& arr)
 {
    int freq[501] {};
    for(int x : arr)
    {
        ++freq[x];
    }
    int best = -1;
    for (int i= 2 ; i <= 500; i ++)
     {
         if(freq[i]==i)
            best = max(best,i);
     }
    return best;
 }
int main()
{
return 0;
}
