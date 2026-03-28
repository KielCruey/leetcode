#include <iostream>
#include <vector>

class Solution 
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        std::vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
            for(int j = i + 1; j < nums.size(); j++)
                if(target == nums[i] + nums[j])
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }

        return result;
    }
};