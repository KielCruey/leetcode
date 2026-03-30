#include <vector>
#include <map>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::map<int, int> map;
        int results;

        for (int i = 0; i < nums.size(); i++)
            map[nums[i]]++; // increment key's value

        for (std::map<int, int>::iterator it = map.begin(); it != map.end(); it++) {
            // only one element in vector 
            if ((*it).second == 1) {
                results = (*it).first;
                break;
            }
            
        }

        return results;
    }
};