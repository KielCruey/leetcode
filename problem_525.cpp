#include <vector>
#include <iostream>

using namespace std;

// 525. Contiguous Array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        checkArrayIsEven(nums); // only works on even number size vectors

        return checkVector(nums);;
    }

    // if vector isn't even, remove last element
    void checkArrayIsEven(vector<int>& nums) {
        // check is reminder -- if so then it's not even
        if (nums.size() % 2 != 0)
            nums.pop_back();
    }

    // checks if there number of 0's and 1's are the same
    bool checkEqual(vector<int>& nums) {
        int numZeros = 0;
        int numOnes = 0;

        for (auto i : nums) {
            if (i == 0) numZeros++;
            else numOnes++;
        }

        return (numZeros == numOnes) ? true : false;
    }

    // looks if the vector has same amout of 1's and 0's, if not decrease vector size and does it again
    int checkVector(vector<int>& nums) {
        bool isEqual = checkEqual(nums);

        if (!isEqual) {
            nums.pop_back();
            nums.pop_back();

            checkVector(nums);
        }

        return static_cast<int>(nums.size());
    }
};

int main() {
    //std::vector<int> nums = { 0,1 };
    //std::vector<int> nums = { 0,1,0 };
    std::vector<int> nums = { 0, 1, 1, 0 , 1, 1, 1, 1, 1, 1, 1 };

    Solution s;
    auto index = s.findMaxLength(nums);

    return 0;
}