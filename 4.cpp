#include <vector>
#include <algorithm>
#include <cmath> 

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // add nums2 values to nums1
        for (int i = 0; i < nums2.size(); i++)
            nums1.push_back(nums2[i]);

        std::sort(nums1.begin(), nums1.end());

        int remainder = nums1.size() % 2;
        int medianI = std::floor((double)nums1.size() / 2.0);

        // even vector index -- average of two values
        if(remainder == 0) 
            return ((double)nums1[medianI] + (double)nums1[medianI - 1]) / 2;
        
        // odd vector index
        return nums1[medianI];
    }
};