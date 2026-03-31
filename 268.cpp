#include <vector>
#include <algorithm>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int results = -1;

        std::sort(nums.begin(), nums.end());

        // finds if there's a number missing in the middle
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                results = i;
                break;
            }
        }

        // then "n" number is missing
        if (results == -1)
            return nums.size();

        return results;
    }
};