#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        int max, min;
        std::vector<int> r;

        // ordering vector from smallest to largest
        std::sort(nums.begin(), nums.end());

        int index{};
        min = nums[0];
        max = nums[nums.size() - 1];
        
        while (min < max) {
            if (nums[index] != min) {
                r.push_back(min);
                min++;
            }
            else {
                min++;
                index++;
            }            
        }

        return r;
    }
};