#include <vector>
#include <algorithm> // swap
#include <cmath>

class Solution {
public:
    bool isEven{};
    int midE{}, midOL{}, midOH{};

    void rotate(std::vector<std::vector<int>>& matrix) {
        // odd matrix
        if (matrix.size() % 2 == 1) {
            midE = std::floor(matrix.size() / 2);
        }
        else {
            midOL = std::floor(matrix.size() / 2);
            midOH = std::ceil(matrix.size() / 2);
        }

        // corners
        rotateCorners(matrix);
        rotateSides(matrix);
    }

    void rotateCorners(std::vector<std::vector<int>>& matrix) {
        int maxI = matrix.size() - 1;

        for (int i = 0; i < midE; i++) {
            std::swap(matrix[i][i], matrix[i][maxI - i]);
            std::swap(matrix[i][i], matrix[maxI - i][maxI - i]);
            std::swap(matrix[i][i], matrix[maxI - i][i]);
        }
    }

    void rotateSides(std::vector<std::vector<int>>& matrix) {
        int maxI = matrix.size() - 1;

        
        for (int i = 0; i <= midE; i++) {
            std::swap(matrix[i][i + 1], matrix[maxI - i][maxI]);
            std::swap(matrix[i][i + 1], matrix[maxI - i][maxI - i]);
            std::swap(matrix[i][i + 1], matrix[maxI - i][i]);
        }
        
        
    }
};

int main() {
    Solution s;
    std::vector<std::vector<int>> matrix{ { 1,2,3 }, { 4, 5, 6 }, { 7, 8, 9 } };

    s.rotate(matrix);

    return 0;
}