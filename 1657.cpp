#include <string>
#include <map>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        // trivial case
        if (word1.size() != word2.size())
            return false;

        std::map<char, int>::iterator it1;
        std::map<char, int>::iterator it2;
        std::map<char, int> m1;
        std::map<char, int> m2;

        std::vector<int>::iterator vit1;
        std::vector<int>::iterator vit2;
        std::vector<int> v1;
        std::vector<int> v2;

        for (const char &c : word1)
            m1[c]++;

        for (const char& c : word2)
            m2[c]++;

        it1 = m1.begin();
        it2 = m2.begin();

        for (const auto& i : m1)
            v1.push_back(i.second);

        for (const auto& i : m2)
            v2.push_back(i.second);
        
        std::sort(v1.begin(), v1.end());
        std::sort(v2.begin(), v2.end());

        vit1 = v1.begin();
        vit2 = v2.begin();

        while (vit1 != v1.end() && vit2 != v2.end()) {
            if (*vit1 != *vit2)
                return false;

            vit1++;
            vit2++;
        }

        return true;
    }
};

int main() {
    Solution s;

    //std::string s1 = "abc";
    //std::string s2 = "bca";

    std::string s1 = "cabbba";
    std::string s2 = "abbccc";

    s.closeStrings(s1, s2);

    return 0;
}