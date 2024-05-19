#include <string>

class Solution {
public:
    int fib(int n) {
        if (n <= 0)
            return 0;
        else if (n == 1)
            return 1;

        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution s;
    int results = s.fib(22);

    return 0;
}