#include <vector>
#include <string>

#define ASCII_BASE 48

class Solution {
public:
    int differenceOfSum(std::vector<int>& nums) {
        int sumOfNums = 0, sumOfDigits = 0;

        // sum of element nums in vector
        for (int i : nums)
            sumOfNums += i;

        sumOfDigits = digitVectorSum(nums);

        return abs(sumOfNums - sumOfDigits);
    }

    int digitVectorSum(std::vector<int> nums) {
        int sumOfDigits = 0, tempSum = 0;

        for (int a = 0; a < nums.size(); a++) {
            tempSum = 0;

            std::string s = std::to_string(nums[a]);

            for (int i = 0; i < s.size(); i++)
                tempSum += (int)s[i] - ASCII_BASE;

            // sum the given vector indexed number to overall sum of digits
            sumOfDigits += tempSum;
        }

        return sumOfDigits;
    }
};

int main() {
    // test 1 -> answer: |25 - 16| = 9
    //std::vector<int> v = { 1, 15, 6, 3 };

    // test 2 -> answer: |10 - 10| = 0
    std::vector<int> v = { 1, 2, 3, 4 };

    Solution s;
    int results = s.differenceOfSum(v);

	return 0;
}