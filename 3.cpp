#include <string>
#include <unordered_map>

class Solution {
public:
    // dynamic sliding window
    int lengthOfLongestSubstring(std::string s) {
        int results{}, temp{};

        std::unordered_map<std::string, int> m;
        std::unordered_map<std::string, int>::iterator d; // data
        std::string::iterator sit = s.begin(); // left side iterator

        // right side iterator -- always going forward
        for (auto right = s.begin(); right != s.end(); right++) {
            m[std::to_string(*right)]++; // (key, value) char, int
            temp++;

            d = m.find(std::to_string(*right));

            // remove chars from map until value is 1
            while ((*d).second == 2) {
                m[std::to_string(*sit)]--;
                temp--;

                sit++;
            }

            // find max
            results = std::max(results, temp);
        }

        return results;
    }
};