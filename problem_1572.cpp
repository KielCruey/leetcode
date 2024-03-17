#include <vector>
#include <iostream>

using namespace std;

// 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = static_cast<int>(mat.size());

        return size;
    }
};

vector<vector<int>> initialize3x3() {
    vector<int> v1{ 1, 2, 3 };
    vector<int> v2{ 4, 5, 6 };
    vector<int> v3{ 7, 8, 9 };

    vector<vector<int>> mat{ v1, v2, v3 };

    return mat;
}

vector<vector<int>> initialize4x4() {
    vector<int> v1{ 1, 2, 3, 4 };
    vector<int> v2{ 5, 6, 7, 8};
    vector<int> v3{ 9, 10, 11, 12};
    vector<int> v4{ 13, 14, 15, 16};

    vector<vector<int>> mat{ v1, v2, v3 , v4 };

    return mat;
}

int main() {
    vector<vector<int>> mat = initialize3x3();

    Solution s;
    auto index = s.diagonalSum(mat);

    return 0;
}

