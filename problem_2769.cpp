#include <iostream>

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};

int main() {
    Solution s;

    // test 1
    //int num = 4; int t = 1; // answer 6;
    //int results = s.theMaximumAchievableX(num, t);
    //std::cout << "results: " << results << std::endl;

    // test 2
    int num = 3; int t = 2; // answer 7;
    int results = s.theMaximumAchievableX(num, t);
    std::cout << "results: " << results << std::endl;

    return 0;
}