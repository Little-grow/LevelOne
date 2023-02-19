#include<vector>

using namespace std;

class Solution {
public:

    int fib(int n) {
        if (n == 0)
            return 0;

        vector<int> fibonacci(n + 1);
        fibonacci[0] = 0, fibonacci[1] = 1, fibonacci[2] = 1;

        for (size_t i = 3; i < n; i++)
        {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
        return fibonacci[n];
    }
};