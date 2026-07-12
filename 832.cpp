#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
		int size = image.size();
		int vSize = image[0].size(); // will alway have at least one subvector

		// reversing subvectors
		for (int i = 0; i < size; i++) {
			// reversing
			for (int j = 0; j < vSize / 2; j++) {
				std::swap(image[i][j], image[i][vSize - j - 1]);
			}
		}

		// inverting subvectors
		for (int i = 0; i < size; i++) {
			// inverting
			for (int j = 0; j < vSize; j++) {
				if (image[i][j] == 1) image[i][j] = 0;
				else image[i][j] = 1;
			}
		}

		return image;
    }
};