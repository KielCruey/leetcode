#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int results{};

        for (int i = s.size(); i > 0; i--) {
            if (s[i - 1] == 32 && results != 0) break;

            if(s[i - 1] != 32) results++;
        }   

        return results;
    }
};