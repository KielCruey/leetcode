#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> results;
        std::unordered_map<std::string, std::vector<std::string>> m;

        std::vector<std::string> t = strs; // temp

        // index is sorted strings, and key is the unique string value
        for (int i = 0; i < strs.size(); i++) {
            std::sort(t[i].begin(), t[i].end());
            m[t[i]].push_back(strs[i]);
        }
            
        // pushing back all unique values in map -- pushing back vector of strings
        for (auto &it : m) 
            results.push_back(it.second);
        
        return results;
    }
};