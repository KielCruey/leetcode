#include <vector>
#include <algorithm>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        auto size = nums.size();

        // sorts and resized the indeterminate value unique() function gives
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), it));

        // if new nums size change, then there was duplicates
        if (nums.size() < size)
            return true;

        return false;
    }
};