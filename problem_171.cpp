#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    // only capital letters only
    int titleToNumber(std::string columnTitle) {
        std::vector<char> v;

        for (int i = 0; i < columnTitle.size(); i++)
            v.push_back(columnTitle[i]);

        std::reverse(v.begin(), v.end());

        return calculateStringASCIIToNumber(v);
    }

    // ASCII to int
    int calculateStringASCIIToNumber(std::vector<char> v) {
        int sum = 0;

        for (int i = 0; i < v.size(); i++) 
            sum = sum + pow(26, i) * (v[i] - 64);

        return sum;
    }
};

int main() {

    //std::string input = "ZY";
    std::string input = "BB";

    Solution s;
    auto results = s.titleToNumber(input);

	return 0;
}