#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int results = -1; // what index number

        for (auto i = 0; i < nums.size(); i++) {
            int leftSum = sumLeft(nums, i);
            int rightSum = sumRight(nums, i);

            // checks if there is a pivotIndex
            if (leftSum == rightSum) {
                results = i;
                break;
            }
        }

        return results;
    }

    // sums everything LEFT of the index
    int sumLeft(std::vector<int>& nums, int index) {
        int leftSum = NULL;

        for (auto i = 0; i < index; i++) {
            leftSum = leftSum + nums.at(i);
        }

        return leftSum;
    }

    // sums everything RIGHT of the index
    int sumRight(std::vector<int>& nums, int index) {
        int rightSum = NULL;

        for (auto i = nums.size() - 1; index < i; i--) {
            rightSum = rightSum + nums.at(i);
        }

        return rightSum;
    }
};