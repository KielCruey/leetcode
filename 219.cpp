#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> um; // key and value (number of times that numb in the vector)

        // initialize all keys to 0
        for (int i = 0; i < nums.size(); i++)
            um[nums[i]]++; // checks if key exists already, if so increment

        // checks all keys and sees if one key has a value less than k
        for (int i = 0; i < um.size(); i++) {
            // a keys occurs more than once
            if (um[nums[i]] > 0)
                return true;
        }

        return false;
    }
};

int main() {
    Solution s;
    std::vector<int> v{ 1,2,3,1,2,3 };
    s.containsNearbyDuplicate(v, 2);

    return 0;
}