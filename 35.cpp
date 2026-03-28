#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int results;
        
        for(int index = 0; int &x : nums){
            if(x >= target){
                results = index;
                break;
            }
            
            index++;
        }
        
        return results;
    }
};