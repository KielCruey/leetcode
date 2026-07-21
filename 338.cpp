#include <vector>
#include <bitset>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> results;

        for (int i = 0; i <= n; i++)
            results.push_back(std::bitset<32>(i).count());

        return results;
    }
};