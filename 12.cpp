#include <string>

class Solution {
public:
    std::string intToRoman(int num) {
        std::string results = "";
        auto remainder = num % 1000;
        int value = num / 1000;

        // 1000's
        if (value != 0)
            for (int i = 0; i < value; i++)
                results += "M";

        // 100's
        value = remainder / 100;
        remainder = num % 100;
        results = digit(results, "M", "D", "C", value);

        // 10's
        value = remainder / 10;
        remainder = num % 10;
        results = digit(results, "C", "L", "X", value);

        // 1's
        value = remainder;
        results = digit(results, "X", "V", "I", value);

        return results;
    }

    // sL = string large -- sM = string medium -- sS = string small
    std::string digit(std::string results, std::string sL, std::string sM, std::string sS, int value) {
        if (value != 0) {
            if (0 < value && value < 4) {
                for (int i = 0; i < value; i++)
                    results += sS;
            }
            else if (value == 4) results += sS + sM;
            else if (4 < value && value < 9) {
                results += sM;
                for (int i = 0; i < value - 5; i++)
                    results += sS;
            }
            else if (value == 9) results += sS + sL;
        }

        return results;
    }
};