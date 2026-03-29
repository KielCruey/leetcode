#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        auto size = nums.size();
        std::vector<int> temp;
        
        // sorts smallest to largest
        std::sort(nums.begin(), nums.end());
        
        // deleted duplicates and unique() outputs indeterminate values at the end when it "deletes"
        auto it = std::unique(nums.begin(), nums.end());
        nums.resize(std::distance(nums.begin(), it));
        
        for(int i = 0 ; i < size; i++)
        {
            // checks if missing number isn't there
            if(nums[i] != i + 1)
            {
                // keeps on checking the first
                temp.push_back(i + 1);
                // inserts a next number is supposed to be there
                nums.insert(nums.begin() + i, i + 1);
            }
        }

        return temp;   
    }
};