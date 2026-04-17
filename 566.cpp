#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int columns = mat[0].size();
        int allEle = rows * columns; // all elements
        int mult = r * c;

        // error checking
        if (allEle != mult)
            return mat;

        // flatten the matrix into a 1D vector
        std::vector<int> m;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                m.push_back(mat[i][j]);

        // create the reshaped matrix
        std::vector<std::vector<int>> v(r, std::vector<int>(c));
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                v[i][j] = m[i * c + j];

        return v;
    }
};