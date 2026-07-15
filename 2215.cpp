#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> findDifference(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<std::vector<int>> results(2);

        sortUnique(nums1);
        sortUnique(nums2);

        int size1 = nums1.size();
        // checks duplicates, and delete them from nums1 and nums2
        for (int i = 0; i < size1; i++) {
            int temp = nums1.back();
            nums1.pop_back();
            results[0].push_back(temp); // assumes no duplicates

            // check is assumption is a duplicate
            for (int j = 0; j < nums2.size(); j++) {
                if (temp == nums2.at(j)) {
                    results[0].pop_back();
                    nums2.erase(nums2.begin() + j); // deletes nums2 duplicate
                }
            }
        }

        // puts non-duplicated numbers into results[1] vector
        for (int i = 0; i < nums2.size(); i++)
            results[1].push_back(nums2.at(i));

        return results;
    }

    void sortUnique(std::vector<int>& v) {
        std::sort(v.begin(), v.end());
        auto last = std::unique(v.begin(), v.end());
        v.erase(last, v.end());
    }
};

int main() {
    Solution s;
    std::vector<int> nums1 = { 1, 2, 3 };
    std::vector<int> nums2 = { 2, 4, 6 };

    //std::vector<int> nums1 = { 1,2,3,3 };
    //std::vector<int> nums2 = { 1,1,2,2 };

    auto t = s.findDifference(nums1, nums2);

    return 0;
}