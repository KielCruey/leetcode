#include <vector>
#include <algorithm> // advanced

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {

        std::vector<int>::iterator begin = nums.begin();
        std::vector<int>::iterator end = nums.begin();

        int indexE{}; // end index

        for (int i = 0; i < nums.size(); i++) {
            if (i + k < nums.size()) {
                std::advance(end, k);
                indexE = i;
            }
            

            
            while (end != nums.end()) {
                if (*begin == *end)
                    int q = 1;
            }
            
        }


        return 0;
    }
};

int main() {
    Solution s;

    std::vector<int> nums{ 1,2,3,1,2,3 };

    s.containsNearbyDuplicate(nums, 2);

    return 0;
}