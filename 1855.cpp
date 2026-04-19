#include <vector>
#include <iterator> // advanced

class Solution {
public:
    int maxDistance(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<std::pair<int, int>> validPairs;

        findValidPairs(validPairs, nums1, nums2);

        return findMaximumDistance(validPairs);
    }

    void findValidPairs(std::vector<std::pair<int, int>>& validPairs, std::vector<int> nums1, std::vector<int> nums2) {
        std::vector<int>::iterator it1 = nums1.begin();
        std::vector<int>::iterator it2 = nums2.begin();
        
        int i{};
        int j{};

        while (it1 != nums1.end() && it2 != nums2.end()) {
            if (*it1 <= *it2) {
                if (i <= j)
                    validPairs.push_back(std::pair<int, int>(i, j));

                it2++;
                j++;

                if (it2 == nums2.end()) {
                    it1++;
                    i++;

                    it2 = nums2.begin();
                    std::advance(it2, i);

                    j = i;
                }
            }
            else if (*it1 > *it2) {
                it1++;
                i++;

                it2 = nums2.begin();
                std::advance(it2, i);

                j = i;
            }
        }
    }

    int findMaximumDistance(std::vector<std::pair<int, int>>& validPairs) {
        int max{};

        for (int i = 0; i < validPairs.size(); i++)
            if (validPairs[i].second - validPairs[i].first > max)
                max = validPairs[i].second - validPairs[i].first;
        
        return max;
    }
};

int main() {
    Solution s;

    /*
    std::vector<int> num1{ 55,30,5,4,2 };
    std::vector<int> num2{ 100,20,10,10,5 };
    */

    std::vector<int> num1{ 2,2,2 };
    std::vector<int> num2{ 10,10,1 };

    s.maxDistance(num1, num2);

    return 0;
}