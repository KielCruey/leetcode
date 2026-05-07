#include <vector>

class Solution {
public:
    std::vector<int> getRow(int numRows) {
        std::vector<int> results;
		int row = numRows + 1; // levels in pascal triangle start at 0
        
        int coeff = 1;
        for (int j = 1; j <= row; j++) {
            results.push_back(coeff);
            coeff = coeff * (row - j) / j;
        }

        return results;
    }
};

int main() {
    Solution solution;
    std::vector<int> result = solution.getRow(3);

    return 0;
}