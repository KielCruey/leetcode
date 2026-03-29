#include <vector>
#include <algorithm>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        auto index = -1;

        // finding max element
        auto maxValue = *std::max_element(std::begin(nums), std::end(nums));

        // finding what position max number's position
        auto iterator = std::find(nums.begin(), nums.end(), maxValue);
        if (iterator != nums.end()) {
            index = iterator - nums.begin();
        }

        // checks if right/left side have numbers not larger than half the max value
        bool rightSide = checkRight(nums, maxValue, index);
        bool leftSide = checkLeft(nums, maxValue, index);

        return (rightSide && leftSide) ? index : -1;;
    }

    // checks if every element on the LEFT of the index is at most half the size
    bool checkLeft(std::vector<int>& nums, int largestNum, int index) {
        bool results = true;

        for (auto i = 0; i < index; i++) {
            // condition if larger then half, then fails
            if (nums[i] > largestNum / 2) {
                results = false;
                break;
            }
        }

        return results;
    }

    // checks if every element on the RIGHT of the index is at most half the size
    bool checkRight(std::vector<int>& nums, int largestNum, int index) {
        bool results = true;

        for (auto i = nums.size() - 1; index < i; i--) {
            // condition if larger then half, then fails
            if (nums[i] > largestNum / 2) {
                results = false;
                break;
            }
        }

        return results;
    }
};