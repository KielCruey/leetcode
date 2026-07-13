#include <vector>
#include <cmath> // ceil

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = n;
        int flowerCount{};

        // counts all flowers
        for (int i = 0; i < flowerbed.size(); i++)
			if (flowerbed[i] == 1) flowerCount++;

        // throwing out impossible cases -- maximum acceptable flowers
        if (flowerCount > std::ceil((double)flowerbed.size() / (double)(n + 1)))
            return false;

        // only checks possible solutions -- checks placement of flowers
        for (int i = 0; i < flowerbed.size(); i++) {
            if (count < n && flowerbed[i] == 1) return false;

            if (flowerbed[i] == 0) count++;
            else count = 0;
        }

        return true;
    }
};

int main() {
    Solution solution;
    //std::vector<int> flowerbed = {1, 1, 0, 0, 0, 0, 0, 0, 1};
    //int n = 3;

    // failed cases
    //std::vector<int> flowerbed = { 1,0,0,0,1 };
    //int n = 2;

    // failed cases
    std::vector<int> flowerbed = { 0, 1, 0, 1, 0 };
	int n = 1;

    bool result = solution.canPlaceFlowers(flowerbed, n);
    return 0;
}