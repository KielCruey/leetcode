#include <iostream>
#include <string>
#include <cstdlib> 

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string results;
        int smallestIndex;
        int difference = word1.size() - word2.size();
        int a = abs(difference);
        bool isWord1Larger = true;

        if (word1.size() <= word2.size())
        {
            smallestIndex = word1.size();
            isWord1Larger = false;
        }
        else 
            smallestIndex = word2.size();

        for (int i = 0; i < smallestIndex; i++)
            results += word1[i] + "" + word2[i];

        for (int i = smallestIndex; i < (smallestIndex + difference); i++)
        {
            if (isWord1Larger)
                results += word1[i];
            else
                results += word2[i];
        }

        return results;
    }
};

int main() {
    Solution s;
    std::string word1 = "abc";
    std::string word2 = "pqr";

    auto results = s.mergeAlternately(word1, word2);

    return 0;
}