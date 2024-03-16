#include <vector>
#include <iostream>

using namespace std;

// 525. Contiguous Array
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        checkEvenVector(nums);

        int numZeros = 0;
        int numOnes = 0;

        // counts number of ones and zeros
        for (auto i : nums) {
            if (i == 0) numZeros++;
            else numOnes++;
        }

        return checkMaxPairs(numZeros, numOnes);
    }

    void checkEvenVector(vector<int>& nums) {
        if (nums.size() % 2 != 0 )
            nums.pop_back();
    }

    int checkContiguous(int numZeros, int numOnes) {
        int results = 0;


        return 2 * results;
    }
};

int main() {
    //std::vector<int> nums = { 0,1 }; // answer 2
    //std::vector<int> nums = { 0, 1, 0 }; // answer 2
    std::vector<int> nums = { 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1 }; // answer 4
    //std::vector<int> nums = { 0, 0, 1, 0, 0, 0, 1, 1 }; // answer 6
    //std::vector<int> nums = { 0, 1, 1, 0, 1, 1, 1, 0 }; // answer 4
     
    Solution s;
    auto index = s.findMaxLength(nums);

    return 0;
}