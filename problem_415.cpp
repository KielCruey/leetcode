#include <string>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int num1Size = static_cast<int>(num1.size());
        int num2Size = static_cast<int>(num2.size());

        // add leading zeros
        if (num1Size > num2Size) num2 = addLeadingZeros(num2, num1Size);
        if (num2Size > num1Size) num1 = addLeadingZeros(num1, num2Size);

        auto sum = sumNumbers(num1, num2);

        return "";
    }

    std::string addLeadingZeros(std::string sNum, int size) {
        std::string zeros = "";
        int numLeadingZeros = static_cast<int>(size - sNum.size());

        for (int i = 0; i < numLeadingZeros; i++) {
            zeros = zeros + "0";
        } 

        return zeros + sNum;
    }

    // adding each digit and considering if there's a carry
    // both numbers should be same size
    std::string sumNumbers(std::string num1, std::string num2) {
        std::string results = "";
        bool carry = false;

        for (int i = 0; i < num1.size(); i++) {
            if (!carry) {
                auto te = num1[i];
                auto t = num2[i];

                int num1Digit = static_cast<int>(num1[i]) + static_cast<int>(num2[i]);
                results = results + to_string(num1Digit);
            }
        }

        return "";
    }
};

int main() {
    Solution s;

    // test 1
    std::string num1 = "11";
    std::string num2 = "123456";

    auto results = s.addStrings(num1, num2);


    return 0;
}
