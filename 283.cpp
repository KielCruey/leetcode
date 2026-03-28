#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int numZeros = 0;
        
        // counts number of zeros
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                numZeros++;
        }
        
        // creates a temp vector and adds non-zero values
        std::vector<int> temp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // adds zero to the end of temp vector
        while(numZeros--) {
            temp.push_back(0);
        }
        
        // copys temp values into nums vector
        for(int i = 0; i < nums.size(); i++)
            nums[i] = temp[i]; 
    }
};