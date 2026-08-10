#include <vector>
#include <algorithm>

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
        int operations{}, sum{};
        std::vector<int>::iterator l = nums.begin();
        std::vector<int>::iterator r = nums.end() - 1;

        std::sort(nums.begin(), nums.end());

        while (l < r) {
            sum = *l + *r;

            if (sum == k) {
                operations++;
                l++;
                r--;
            }
            else if (sum > k) r--;
            else l++;
        }

        return operations;
    }
};