#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        auto maxIndex = std::max_element(std::begin(prices), std::end(prices));


        return 0;
    }
};


int main() {

    std::vector<int> v = { 7, 1, 5, 3, 6, 4 };
    Solution s;
    auto results = s.maxProfit(v);

    return 0;
}