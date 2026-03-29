#include <vector>

class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        std::vector<int> results;
        
        for(int i = 0; i < nums.size(); i++)
        {
            // has a remainder, which means odd
            if(nums[i] % 2)
                results.push_back(nums[i]);
            // no remainder, which means even
            else
                results.insert(results.begin(), nums[i]);
        }
        
        return results;
    }
};