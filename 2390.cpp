#include <string>
#include <deque>

class Solution {
public:
    std::string removeStars(std::string s) {
        // trivial case
        if (s.empty())
            return "";

        std::deque<char> cS{};
        std::string results{};

        // creating the string without stars
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) != '*') 
                cS.push_back(s.at(i));
            else
                if(!s.empty())
					cS.pop_back();
        }

        // build string
        int size = cS.size();
        for (int i = 0; i < size; i++) {
            results += cS.front();
            cS.pop_front();
        }

        return results;
    }
};