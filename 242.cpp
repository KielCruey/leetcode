#include <map>
#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::map<char, int> mapS, mapT; // key/value pairs in order

        // error check -- different size, not anagrams
        if(s.size() != t.size())
			return false;

        // create maps
        for (int i = 0; i < s.size(); i++) {
            mapS[s[i]]++; // for that char key, increment 
            mapT[t[i]]++; // for that char key, increment
        }

        std::map<char, int>::iterator itS = mapS.begin();
        std::map<char, int>::iterator itT = mapT.begin();

        // compare map's keys/values
        for (int i = 0; i < mapS.size(); i++) {
            if ((*itS).first != (*itT).first) return false;
            if ((*itS).second != (*itT).second) return false;

			itS++;
			itT++;
        }

        return true;
    }
};