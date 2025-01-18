#include <vector>

#define FIRST_INDEX nums.begin()
#define SECOND_INDEX nums.begin() + 1
#define THIRD_INDEX nums.begin() + 2

#define LAST_INDEX nums.end() - 1
#define SECOND_LAST_INDEX nums.end() - 2
#define THIRD_LAST_INDEX nums.end() - 3

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> results;

        // edge condition -- doesn't have enought numbers
        if (nums.size() < 3)
            return results;
        
        // definiting iterators
        std::vector<int>::iterator it1 = FIRST_INDEX; // content
        std::vector<int>::iterator it2 = SECOND_INDEX; // content
        std::vector<int>::iterator it3 = THIRD_INDEX; // content

        for (; !(it3 == LAST_INDEX && it2 == SECOND_LAST_INDEX && it1 == THIRD_LAST_INDEX); )
        {
            auto help = *it3;
            // checks for valid solution
            if (0 == *it1 + *it2 + *it3) {
                std::vector<int> temp = { *it1, *it2, *it3 };
                results.push_back(temp);
            }

            // checks what index needs to be incremented
            if (it3 != LAST_INDEX)
                it3++;
            else if (it2 != SECOND_LAST_INDEX)
                it2++;
            else if (it2 != THIRD_LAST_INDEX)
                it1++;
        }

        return results;
    }
};

int main()
{
    Solution s;

    // trival conditions
    //std::vector<int> test = { }; // answer []
    //std::vector<int> test = { -1 }; // answer []
    //std::vector<int> test = { -1, 0 }; // answer []

    // test 1 
    //std::vector<int> test = { -1, 0, 1, 2, -1, -4 }; // answer [[-1,-1,2],[-1,0,1]]

    // test 2
    //std::vector<int> test = { 0, 1, 1 }; // answer []

    // test 3
    std::vector<int> test = { 0, 0, 0}; // answer [0,0,0]

    auto results = s.threeSum(test);

    return 0;
}