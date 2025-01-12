#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        int originalSize = nums.size();

        for (int i = 0; i < originalSize; i++)
            nums.push_back(nums.at(i));

        return nums;
    }
};


int main() {
    Solution s;

    // test 1
    //std::vector<int> nums = { 1, 2, 1 }; // answer {1,2,1,1,2,1}

    //test 2
    std::vector<int> nums = { 1, 3, 2 ,1 }; // answer {1,3,2,1,1,3,2,1}

    auto index = s.getConcatenation(nums);

    return 0;
}