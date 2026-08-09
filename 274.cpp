#include <vector>
#include <algorithm>

class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        std::sort(citations.begin(), citations.end(), std::greater<>());

        for (int i = 0; i < citations.size(); i++)
            if (i + 1 > citations[i])
                return i;

        return citations.size();
    }
};