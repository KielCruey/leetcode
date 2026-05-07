#include <vector>
#include <set>

class Solution {
public:
    int subsetXORSum(std::vector<int>& nums) {
        int sum{};

        std::set<int> set;

        for (int i = 0; i < nums.size(); i++) {
            int value = nums[i];

            for (int j = i + 1; j < nums.size(); j++) {

            }
        }

        return sum;
    }
};

int main() {
    Solution s;
    std::vector<int> nums{ 1, 3 };
    s.subsetXORSum(nums);
}