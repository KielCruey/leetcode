#include <vector>

// use dynamic programming
class Solution {
public:
    std::vector<int> memo;

    int climbStairs(int n) {
        // initialize
        if (memo.empty()) 
            for (int i = 0; i < n; i++)
                memo.push_back(NULL);

        // checks to see if previously calculated
        if (memo[n-1] != NULL)
            return memo[n-1];

        int result;

        if (n == 1) result = 1;
        else if (n == 2) result = 2;
        else result = climbStairs(n-1) + climbStairs(n-2);

        // store the calculated new value
        memo[n-1] = result;

        return result;
    }
};