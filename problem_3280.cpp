#include <string>
#include <bitset>
#include <vector>

// 3280. Convert Date to Binary
class Solution {
public:
    std::string convertDateToBinary(std::string date) {
        // string to int
        auto year = stoi(date.substr(0, 4));
        auto month = stoi(date.substr(5, 2));
        auto day = stoi(date.substr(8, 2));

        // int to binary
        auto binaryYear = std::bitset<16>(year).to_string();
        auto binaryMonth = std::bitset<4>(month).to_string();
        auto binaryDay = std::bitset<8>(day).to_string();

        // filter out leading zeros
        binaryYear.erase(0, binaryYear.find_first_not_of('0'));
        binaryMonth.erase(0, binaryMonth.find_first_not_of('0'));
        binaryDay.erase(0, binaryDay.find_first_not_of('0'));

        std::string results = binaryYear + "-" + binaryMonth + "-" + binaryDay;
        return results;
    }
};

int main()
{
    Solution s;

    // test 1 
    std::string test = "2080-02-29"; // answer "100000100000-10-11101"

    // test 2
    // std::string test = "1900-01-01"; // answer "11101101100-1-1"

    std::string results = s.convertDateToBinary(test);

    return 0;
}