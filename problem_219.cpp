#include <vector>
#include <algorithm>

#include <iostream>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        // edge condition -- checks if received only one or less elements in the vector
        if (nums.size() <= 1 || nums.empty())
            return false;

        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[i] == nums[j] && abs(i - j) <= k)
                    return true;

        return false;
    }
};

int main() {
    // test 1 -> answer: true
    //std::vector<int> nums = { 1,2,3,1 };
    //int k = 3;

    // test 2 -> answer: true
    //std::vector<int> nums = { 1,0,1,1 };
    //int k = 1;

    // test 3 -> answer: false
    std::vector<int> nums = { 1,2,3,1,2,3 };
    int k = 2;

    Solution s;
    bool results = s.containsNearbyDuplicate(nums, k);

	return 0;
 }