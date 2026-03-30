#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string results;
        int size;

        // figure out what string is larger
        if (word1.size() > word2.size())
            size = word1.size();
        else
            size = word2.size();

		// connect the two strings together
        for (int i = 0; i < size; i++) {
            if (i < word1.size())
                results += word1[i];
            if (i < word2.size())
                results += word2[i];
        }

        return results;
    }
};