#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            nums[i] = nums[i] * nums[i];
        
        std::sort(nums.begin(), nums.end());
        
        return nums;
    }
};