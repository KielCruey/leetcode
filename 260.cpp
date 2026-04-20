#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        std::vector<int> v;
        std::unordered_map<int, int> m;

        // adding nums into a map
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        // finding the two nums
        for (auto i : m) {
            if (i.second == 1)
                v.push_back(i.first);

            // two unique numbers
            if (v.size() == 2)
                break;
        }

        return v;
    }
};