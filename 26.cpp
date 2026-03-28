#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // erase removes elements and unique removes consecutive duplicates
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        
        return nums.size();
    }
};