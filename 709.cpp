#include <string>

#define ASCII_CAP_BEGIN 65
#define ASCII_CAP_END 90

class Solution {
public:
    std::string toLowerCase(std::string s) {
        for (int i = 0; i < s.size(); i++)
            if ((int)s[i] >= ASCII_CAP_BEGIN && (int)s[i] <= ASCII_CAP_END)
                s[i] = s[i] + 32; // difference between uppercase and lowercase
        
        return s;
    }
};