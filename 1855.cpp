#include <vector>
#include <algorithm> // max

class Solution {
public:
    int maxDistance(std::vector<int>& nums1, std::vector<int>& nums2) {
        int i{};
        int j{};
        int n1 = nums1.size(), n2 = nums2.size();
        int results = 0;

        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                results = std::max(results, j - i);
                j++;
            }
            else
                i++;
        }

        return results;
    }
};