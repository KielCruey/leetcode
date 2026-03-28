#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        auto max = 0; 
        
        // trivial solution 
        if(nums.size() < 3)
            max = *max_element(nums.begin(), nums.end());
        else
        {
            // max element will be at the last index
            sort(nums.begin(), nums.end());
            // removes adjacent duplicates
            auto last = unique(nums.begin(), nums.end());
            // unique function doesn't change the vector's size -- erase undefined values at end
            nums.erase(last, nums.end());
            
            for(int i : nums)
                std::cout << i << std::endl;
            
            // checks if deleted duplicates creates a vector less than three
            if(nums.size() < 3)
                max = *max_element(nums.begin(), nums.end());
            else
            {
                // deleting 1st and 2nd maximum values
                nums.erase(nums.end() - 1);
                nums.erase(nums.end() - 1);
    
                max = *max_element(nums.begin(), nums.end());
            }
        }
        
        return max;
    }
};