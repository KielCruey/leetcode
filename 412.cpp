#include <vector>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> vString;

        for(int i = 1; i <= n; i++)
        {
            std::string temp = "";

            if(i % 3 == 0)
                temp = temp + "Fizz";
                
            if(i % 5 == 0)
                temp = temp + "Buzz";
            
            if( !(i % 3 == 0) && !(i % 5 == 0) )
                temp = std::to_string(i);
  
            vString.push_back(temp);
        }

        return vString;
    }
};