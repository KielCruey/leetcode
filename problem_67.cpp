#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b) {
        // converts strings to binary number
        int num1 = checkEmptyString(a);
        int num2 = checkEmptyString(b);
  
        return decimalToBinary(num1 + num2);
    }

    int checkEmptyString(std::string string) {
        int tempNum;

        if (string.empty()) { tempNum = 0; }
        else { tempNum = stoi(string, 0, 2); }

        return tempNum;
    }

    std::string decimalToBinary(int num) {
        std::string results = "";
        // short hand to initialize all elements to zero
        // LSB get added to index 0 and MSB closest to index 63
        int binaryNum[96] = { 0 };
        int i = 0;

        // checking edge condition
        if (num == 0) {
            results = "0";
        }
        // calculating the digits by determining the reminder
        else {
            while (num > 0) {
                binaryNum[i] = num % 2;
                num = num / 2;
                i++;
            }

            // taking the binaryNum int array digits and creating a completed string
            for (i = i - 1; i >= 0; i--) {
                results = results + std::to_string(binaryNum[i]);
            }
        }

        return results;
    }
};

int main() {
    Solution s;

    // test1
    std::string a = "1010";
    std::string b = "1011";

    // test2 -- edge condition
    //std::string a = "0";
    //std::string b = "0";

    // test 3
    //std::string a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    //std::string b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";

    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << std::endl;
    }

    auto results = s.addBinary(a, b);

	return 0;
}
