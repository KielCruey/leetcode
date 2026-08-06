#include <string>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string s) {
        char c{};
        std::string s1;
        std::vector<std::string> v;
        
        // partitioning each word
        for (int i = 0; i < s.size(); i++) {
            c = s[i];

            if (0 <= s[i] - 65 && s[i] - 65 < 26 || 0 <= s[i] - 97 && s[i] - 97 < 26 || 0 <= s[i] - 48 && s[i] - 48 <= 9)
                s1 = s1 + c;
            else if(s[i] == 32 && !s1.empty()) {
                v.push_back(s1);
                s1.clear();
            }
        }

        if(!s1.empty())
            v.push_back(s1);
        s1.clear();
       
        size_t size = v.size();
        // reconstructing the string -- reverse
        for (int i = 0; i < size; i++) {
            s1 = s1 + v.back();
            v.pop_back();

            // adding space
            if (!v.empty())
                s1 = s1 + " ";
        }

        return s1;
    }
};