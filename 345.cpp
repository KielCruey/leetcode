#include <string>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        int startI = 0;
        int endI = s.size() - 1;

        while(startI < endI) {
            char sI = s[startI];
            char eI = s[endI];

            // check start char
            if (checkVowels(sI)) { }
            else startI++;

            // check end char
            if (checkVowels(eI)) { }
            else endI--;

            if (checkVowels(sI) && checkVowels(eI)) {
                std::swap(s[startI], s[endI]);
                startI++;
                endI--;
            }
        }

        return s;        
    }

    bool checkVowels(char c) {
        if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 ||
            c == 97 || c == 101 || c == 105 || c == 111 || c == 117) {
            return true;
        }

        return false;
    }
};