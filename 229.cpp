#include <vector>
#include <cmath>
#include <map>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        int minSize = std::floor((double)nums.size() / 3);
		std::vector<int> mElements; // majority elements

        // 1 - key, 2 - value
        std::map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
            map[nums[i]]++; // increment the key

        for (std::map<int, int>::iterator it = map.begin(); it != map.end(); ++it)
            if (minSize < (*it).second)
                mElements.push_back((*it).first);

        return mElements;
    }
};