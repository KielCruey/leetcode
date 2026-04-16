#include <vector>
#include <algorithm> 

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        int sum{};

        // to maximize the min pairs, the pair should have the smallest difference
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i = i + 2)
            sum = sum + nums.at(i);            

        return sum;
    }
};