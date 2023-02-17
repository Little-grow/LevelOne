#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n & 1) != 0 ? n * 2 : n;
    }
};