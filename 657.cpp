#include <string>
#include <iostream>

class Solution {
public:
    bool judgeCircle(std::string moves) {
        int vertical{};
        int horizontal{};

        for (int i = 0; i < moves.size(); i++) {
            char s = moves[i];

            if (s == 'U') vertical++;
            else if (s == 'D') vertical--;
            else if (s == 'L') horizontal++;
            else if (s == 'R') horizontal--;
        }

        // both are zero, then we are at origin 
        if (vertical == 0 && horizontal == 0)
            return true;

		return false;
    }
};