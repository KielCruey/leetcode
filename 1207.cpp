#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> m;
        std::vector<int> v;

        // loading map
        for (auto i : arr) 
            m[i]++;

        size_t mSize = m.size();

        // vector for all the map's values
        for (const auto& [key, value] : m)
            v.push_back(value);
        
        // deletes all duplicates
        std::sort(v.begin(), v.end());
        std::vector<int>::iterator index = std::unique(v.begin(), v.end());
        v.erase(index, v.end());

        size_t vSize = v.size();

        return vSize == mSize ? true : false;
    }
};