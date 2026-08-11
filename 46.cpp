#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<int> v;
        std::vector<std::vector<int>> results;




        return results;
    }

private:
    void backtracting() {

    }
};

int main() {
    Solution s;

    std::vector<int> nums{ 1,2,3 };
    // answer -- [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

    s.permute(nums);

    return 0;
}