#include <vector>
#include <algorithm>

#include <iostream>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        bool results = false;

        // edge condition -- checks if received only one element in vector
        if (nums.size() <= 1 || nums.empty())
            return false;

        sort(nums.begin(), nums.end(), std::greater<int>()); // sorting largest to smallest
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end()); // deletes dulicate numbers next to each other

        // edge condition -- only one distinct number
        if (nums.size() <= 1)
            return false;

        // assumes at least 2 elements in vector
        auto pNum1 = nums.begin();
        auto pNum2 = nums.begin() + 1;

        while (*pNum1 + *pNum2 > k)
        {
            //std::cout
        }

        return false;
    }
};

int main() {
    // test 1 -> answer: true
    std::vector<int> nums = { 1,2,3,1 };
    int k = 3;

    // test 2 -> answer: true
    //std::vector<int> nums = { 1,0,1,1 };
    //int k = 1;

    // test 3 -> answer: false
    //std::vector<int> nums = { 1,2,3,1,2,3 };
    //int k = 2;

    Solution s;
    bool results = s.containsNearbyDuplicate(nums, k);

	return 0;
 }