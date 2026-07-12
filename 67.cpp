#include <string>
#include <format>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
		auto value1 = std::stoll(a, nullptr, 2);
        auto value2 = std::stoll(b, nullptr, 2);
        auto sum = value1 + value2;

        return std::format("{:b}", sum);
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