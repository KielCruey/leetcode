#include <string>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> rn;
        std::unordered_map<char, int> m;

        for (int i = 0; i < ransomNote.size(); i++)
            rn[ransomNote[i]]++;
        
        for (int i = 0; i < magazine.size(); i++)
            m[magazine[i]]++;
        
        // ransom note's chars are less than magazine's -- then impossible
        for (int i = 0; i < ransomNote.size(); i++)
            if (m[ransomNote[i]] < rn[ransomNote[i]])
                return false;
        
        return true;
    }
};