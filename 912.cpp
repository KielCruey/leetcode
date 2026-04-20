#include <vector>
#include <algorithm> // swap

// quicksort
class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        // medium of three to pick the pivot
        std::vector<int> results;

        int pivot = findPivot(nums);

        quicksort(nums, 0, nums.size() - 1);


        return nums;
    }

    // start/end indices
    void quicksort(std::vector<int> v, int startI, int endI) {
        if (startI < endI) {

        }
    }

    int partition(std::vector<int> v, int startI, int endI) {
        int pivot = v.at();



        return;
    }

    int findPivot(std::vector<int> nums) {
        std::vector<int> m; // medium

        int size = nums.size() - 1;

        m.push_back(nums[0]);
        m.push_back(nums[size]);
        m.push_back(nums[size / 2]);
        std::sort(m.begin(), m.end());

        return m[1];
    }
};

int main() {
    Solution s;

    std::vector<int> nums{ 5, 6, -1, 5, 7, 9, 11, 2, 3, 1 };

    s.sortArray(nums);


    return 0;
}