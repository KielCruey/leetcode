#include <iostream>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        int results = 0;
        char previousLetter;
        
        for(char& i : s)
        {
            if(i == 'M')
                results += 1000;
            
            if(i == 'D')
                results += 500;
            
            if(i == 'C')
                results += 100;
            
            if(i == 'L')
                results += 50;
            
            if(i == 'X')
                results += 10;
            
            if(i == 'V')
                results += 5;
            
            if(i == 'I')
                results += 1;
            
            // special cases
            if(previousLetter == 'I')
                if(i == 'V' || i == 'X')
                    results -= 2;
            
            if(previousLetter == 'X')
                if(i == 'L' || i == 'C')
                    results -= 20;
            
            if(previousLetter == 'C')
                if(i == 'D' || i == 'M')
                    results -= 200;
            
            previousLetter = i;
        }
            
        return results;
    }
};