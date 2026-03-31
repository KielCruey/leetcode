#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> v;
        
        // sorting increasing num\s, find only unique nums, then erase the dulicate nums
        std::sort(nums1.begin(), nums1.end());
        auto last1 = std::unique(nums1.begin(), nums1.end());
        nums1.erase(last1, nums1.end());

        // sorting increasing nums, find only unique nums, then erase the dulicate nums
        std::sort(nums2.begin(), nums2.end());
        auto last2 = std::unique(nums2.begin(), nums2.end());
        nums2.erase(last2, nums2.end());

        std::vector<int>::iterator it1;
        std::vector<int>::iterator it2;

        for (int i = 0; i < nums1.size(); i++) {
            for (int t = 0; t < nums2.size(); t++) {
                if (nums1.at(i) == nums2.at(t)) {
                    v.push_back(nums1.at(i));
                    break;
                }
            }
        }

        return v;
    }
};