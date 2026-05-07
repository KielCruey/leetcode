#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> results(numRows);

        int level{};
        for(int i = 1; i <= numRows; i++) {
			int coeff = 1;

            for (int j = 1; j <= i; j++) {
                results[level].push_back(coeff);
				coeff = coeff * (i - j) / j;
            }
            
            level++;
		}

        return results;
    }
};