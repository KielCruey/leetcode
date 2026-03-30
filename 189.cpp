#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        std::vector<int> v; // temp vector
        int remaider = k % nums.size();
        int newIndex = nums.size() - remaider; // new location for push_back nums

        for (int i = 0; i < nums.size(); i++) {
            // resets k
            if (newIndex >= nums.size())
                newIndex = 0;
                            
            v.push_back(nums.at(newIndex));

            newIndex++;
        }

        nums = v;
    }
};