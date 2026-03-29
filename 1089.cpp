#include <vector>

// solution
// if "0" is found 
// 1) insert new "0" 
// 2) delete last element to keep size the same 
// 3) incrememt index +2 to skip over newly inserted "0"

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++)
        {  
            if(arr[i] == 0)
            {
                arr.insert(arr.begin() + i, 0);
                arr.pop_back();
                
                // needs to be incremented by 2, but the for loop adds ones as well, one is needed here
                // doing this such that the newly inserted "0" doesn't trigger another "0" insert
                i = i + 1;
            } 
        }
    }
};