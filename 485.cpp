#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int temp = 0;
        int results = 0;
        
        for(int i : nums) {           
            if(i == 1) {
                temp = temp + 1;
                
                if(temp > results) results = temp;  
            }
            else temp = 0;
        }
        
        return results;
    }
};