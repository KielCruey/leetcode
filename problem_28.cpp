#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int results = -1;

        for (int i = 0, k = 0; i < haystack.size() + 1; i++) {
            if (k == needle.size()) {
                results = i - k;
                break;
            }

            if (haystack[i] == needle[k]) 
                k++;
            else 
                k = 0;
        }

        return results;
    }
};



int main() {
    // test 1
    // std::string haystack = "sadbutsad";
    // std::string needle = "sad";

    // test 2
    // std::string haystack = "notsadbutsad";
    // std::string needle = "sad";

    // test 3
    // std::string haystack = "notsad";
    // std::string needle = "sad";

    // test 4
    // std::string haystack = "notsa";
    // std::string needle = "sad";

    std::string haystack = "mississippi";
    std::string needle = "issip";

    Solution s;
    auto results = s.strStr(haystack, needle);

	return 0;
}