#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        bool result;
        std::vector<int> num, reverseNum;
        
        // if number is negative, will always be false
        if(x < 0)
            result = false;
        // then checks if palindrome number
        else {
            // converts number to vector with elements as digits - start with least significate digit
            while(x != 0) {
                reverseNum.push_back(x % 10);
                x /= 10;
            }

            num = reverseNum;
            std::reverse(std::begin(num), std::end(num)); 
            
            result = (num == reverseNum) ? true : false;
        }
        
        return result;
    }
};