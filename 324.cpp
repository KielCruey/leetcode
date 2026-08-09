#include <vector>
#include <algorithm>

class Solution {
public:
    void wiggleSort(std::vector<int>& nums) {
        if (nums.size() == 1)
            return;

        int lastI = nums.size() - 1;
        std::sort(nums.begin(), nums.end()); // smallest to largest

        for (int i = 1; i < nums.size() - 1; i++) {
            // odd -- left index is less than
            if (i % 2 == 1 && nums[i - 1] >= nums[i])
                    std::swap(nums[i], nums[lastI]);
            // even -- left index is greater than
            else if(i % 2 == 0 && nums[i - 1] <= nums[i])
                    std::swap(nums[i], nums[lastI]);
        }
    }
};

int main() {
    Solution s;

    std::vector<int> v{ 1,5,1,1,6,4 };
    // v{ 1,6,1,5,1,4 }
    
    
    //std::vector<int> v{ 1,3,2,2,3,1 };
    // v{ 2,3,1,3,1,2 }
    
    s.wiggleSort(v);



    return 0;
}