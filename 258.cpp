#define ASCII_BASE 48

#include <string>

class Solution {
public:
    int addDigits(int num) {
        int results = 0;
        int temp = 0;
        std::string s = std::to_string(num);

        while (s.size() != 1) {
            temp = 0;

            for (int i = 0; i < s.size(); i++)
                temp += (int)s[i] - ASCII_BASE;

            // int to string
            s = std::to_string(temp);

            // string comparison
            if (s.size() == 1)
                results = temp;
        }

        return std::stoi(s);
    }
};