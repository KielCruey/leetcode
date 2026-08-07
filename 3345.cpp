#define ACSII_NUMBER_BASE 48

#include <string>

class Solution {
public:
    int smallestNumber(int n, int t) {
        int pOD{ 1 };
        int results{};
        std::string s = std::to_string(n);

        for (int i = 0; i < s.size(); i++) {
            pOD *= std::stoi(std::to_string(s[i] - ACSII_NUMBER_BASE));

            if (pOD == 0) return n; // edge condition -- on digit is zero
        }

        results = pOD / t;
         
        // checks if product of digits (pOD) is an integer
        if ((double)pOD / t == floor(results)) return n;
        else results = smallestNumber(n + 1, t);

        return results;
    }
};