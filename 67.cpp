#include <string>
#include <bitset>
#include <format>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) { 
        std::bitset<1000> bitsA(a); // converts string to binary
        std::bitset<1000> bitsB(b);
		std::bitset<1001> sumBits = bitsA.to_ullong() + bitsB.to_ullong();

        return sumBits.to_string();
    }
};

int main() {
    Solution s;

	//std::string a = "11";
    //std::string b = "1";

    std::string a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    std::string b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";

    std::string result = s.addBinary(a, b);
	return 0;
}