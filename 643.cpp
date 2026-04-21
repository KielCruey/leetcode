#include <vector>

class Solution {
public:
    // sliding window problem
    double findMaxAverage(std::vector<int>& nums, int k) {
        // error condition
        if (k > nums.size())
            return 0;

        double results{};
        double temp{};

        // find first window
        for (int i = 0; i < k; i++)
            temp += nums[i];

        results = temp; // first window is largest

        // window stays the same size -- adds right item and removes left
        for (int i = k; i < nums.size(); i++) {
            temp += nums[i]; // add item
            temp -= nums[i - k]; // delete item
            results = std::max(temp, results);             
        }

        return results / k; // average
    }
};