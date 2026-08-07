#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int numZeros{};
        int product{1};        
        std::vector<int> results(nums.size(), 0);

        // if there's a zero in nums vector
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) numZeros++;

            // trivial solution -- equal or more than 2 zeros
            if (numZeros >= 2) return results;
        }

        // product of all numbers without zeros
        for (int i : nums)
            if(i != 0)
                product *= i;

        for (int i = 0; i < nums.size(); i++) {
            if (numZeros == 1 && nums[i] != 0) results[i] = 0;
            else if (numZeros == 1 && nums[i] == 0) results[i] = product;
            else results[i] = product / nums[i];
        }

        return results;
    }
};