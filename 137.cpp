#include <vector>
#include <unordered_map>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int results{};
        std::unordered_map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        for (auto it = m.begin(); it != m.end(); it++) {
            if ((*it).second == 1) {
                results = (*it).first;
                break;
            }
        }
        
        return results;
    }
};