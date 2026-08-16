#include <string>

class Solution {
public:
    int maxVowels(std::string s, int k) {
        int results{};
        int current{};
        std::string::iterator l = s.begin();
        std::string::iterator r = s.begin();

        // initial value 
        for (int i = 0; i < k; i++) {
            checkFrontIterator(r, current);
            
            if (r++ != s.end()) r;
            else return current;

            results = std::max(results, current);
        }
        
        // sliding window
        for (int i = 0; i < s.size() - k; i++) {
            checkFrontIterator(r, current);

            if (r++ != s.end()) r;
            else return results;

            checkBackIterator(l, current);
            l++;

            results = std::max(results, current);

            // if max vowels reached
            if (results == k)
                return k;
        }

        return results;
    }

private:
    void checkFrontIterator(std::string::iterator it, int& count) {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u')
            count++; 
    }

    void checkBackIterator(std::string::iterator it, int& count) {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u')
            count--;
    }
};