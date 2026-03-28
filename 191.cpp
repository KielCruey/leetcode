#include <cstdint>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t numOfOnes = 0;
        
        while(n > 0)
        {
            if(n % 2 == 1)
                numOfOnes++;
            
            n = n / 2;
        }
        
        return numOfOnes;
    }
};