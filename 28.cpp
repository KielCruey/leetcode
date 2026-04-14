#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        char* h = &haystack[0];
		char* n = &needle[0];

        int index{};
        int i{};

        while (i < haystack.size())
        {
            if (h[0] == n[0]) {
                index++;

                if (index == needle.size())
                    return i - needle.size() + 1;

                n++;
            }
            else {
                n = &needle[0];
                h = &haystack[i - index]; // backtracking
                i = i - index;
                index = 0;
            }

            h++; // alway increment haystack
            i++;
        }

        return -1;
    }
};