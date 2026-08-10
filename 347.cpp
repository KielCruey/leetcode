#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        int maxKey = INT_MIN; int maxValue = INT_MIN;
        std::vector<int>::iterator maxIT;
        std::unordered_map<int, int> m;
        std::vector<int> results;

        // counting number of occurances of each number
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;

        // vector with only unique numbers
        std::sort(nums.begin(), nums.end());
        std::vector<int>::iterator it = std::unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());

        // find max, delete max element, do it again
        while (results.size() < k) {
            for (const auto& pair : m) 
                if (pair.second > maxValue) {
                    maxKey = pair.first;
                    maxValue = pair.second;
                }
                
            // delete map and vector key
            maxIT = std::find(nums.begin(), nums.end(), maxKey);
            nums.erase(maxIT);
            m.erase(maxKey);

            // push back answer
            results.push_back(maxKey); 

            // reset
            maxKey = INT_MIN;
            maxValue = INT_MIN;
        }

        return results;        
    }
};