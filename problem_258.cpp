#include <string>

#define ASCII_BASE 48

class Solution {
public:
    int addDigits(int num) {
        int results = 0, temp = 0;
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

int main() {
    
    // test 1 -> answer: 2
    //int num = 38;

    // test 2 -> answer: 3
    int num = 147;

    Solution s;
    int results = s.addDigits(num);

	return 0;
}