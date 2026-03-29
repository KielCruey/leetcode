#include <vector>
#include <cmath>
#include <map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int minSize = std::ceil((double)nums.size() / 2);
        int mElement = 0; // majority element
        int results;

        // 1 - key, 2 - value
        std::map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
            map[nums[i]]++; // increment the key

        for (std::map<int, int>::iterator it = map.begin(); it != map.end(); ++it) {
            if (minSize <= (*it).second) {
                results = (*it).first;
                break;
            }
        }

        return results;
    }
};