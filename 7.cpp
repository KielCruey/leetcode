#include <math.h>

class Solution {
public:
    int reverse(int x) {
        long rev_num = 0;
        bool isNegative = false;

        // if input number is out of bounds
        if(x >= pow(2, 31) - 1 || x <= -pow(2,31))
            return 0;
        
        // check if number is negative, makes number positive
        if(x < 0) {
            x = -x;
            isNegative = true;           
        }
           
        // algorithm works only on positive numbers
        while (x > 0) {
            rev_num = rev_num * 10 + x % 10;
            x = x / 10;
        }
        
        // if output number is out of bounds
        if(rev_num >= pow(2, 31) - 1 || rev_num <= -pow(2,31)) {
            return 0;
        }
        
        return isNegative ? -rev_num : rev_num;
    }
};