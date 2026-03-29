
#include <vector>
#include <algorithm>

class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        std::vector<int> temp = heights;
        int results = 0;
        
        sort(temp.begin(), temp.end());
        
        // counts the unequal numbers
        for(int i = 0; i < temp.size(); i++) {
            if(heights[i] != temp[i])
                results++;
        }
        
        return results;
    }
};