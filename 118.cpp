#include <vector>

// use dynamic programming, because previous problem effect current problem
class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        
        std::vector<std::vector<int>> v(numRows);

        // adding rows 0 and 1 -- they are known

        int row = 0;
		int index = 0;
        while (row != numRows + 1) {
            //if (v[row].size() == 0)
                //v[row].resize(1);

			v[row].push_back(pI(row, index));
            index++;
        }


        // base cases
        return v;
    }

    // pacsal's index -- with 3 base cases
    int pI(int row, int index) {
        if (row <= 1 && index <= 1)
            return 1;
        
		return pI(row - 1, index) + pI(row - 1, index - 1);
    }
};

int main() {
    Solution s;
    auto v = s.generate(5);
    return 0;
}