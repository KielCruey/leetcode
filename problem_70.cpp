#include <string>

class Solution {
public:
    // solutions is basically a fibinacci sequence
    int climbStairs(int n) {
        if (n == 1 || n == 0)
            return 1;

        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

int main() {
    Solution s;
    int results = s.climbStairs(22);

    return 0;
}