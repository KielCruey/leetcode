#include <string>
#include <vector>

#include <iostream>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        int shortestSize = strs.front().size();
        std::string results = "";
        char letterCompare;
        
        // finds shorts string size in vector
        for (std::string& s : strs) {
            if (shortestSize != 0 && s.size() < shortestSize)
                shortestSize = s.size();
        }

        // finds the commond letter in the vector
        for (int i = 0; i < shortestSize; i++) {
            letterCompare = strs.front()[i];

            for (std::string& s : strs) {
                std::cout << s[i] << std::endl;

                if (letterCompare != s[i]) {
                    return results;
                }
            }
            
            results = results + letterCompare;
        }

        return results;
    }
};

int main() {
    // tests
    std::vector<std::string> strs = { "flower", "flow", "flight" };

    Solution s;
    std::string results = s.longestCommonPrefix(strs);

    return 0;
}