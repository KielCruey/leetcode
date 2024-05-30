#include <string>
#include <unordered_map>

#include <iostream>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // edge case -- different sized strings
        if (s.size() != t.size())
            return false;
        
        std::unordered_map<char, int> hashmap1;
        std::unordered_map<char, int> hashmap2;

        hashmap1 = countUpChars(hashmap1, s);
        hashmap2 = countUpChars(hashmap2, t);

        return checkSimilarMaps(hashmap1, hashmap2);
    }

    // checks if the key already exists in the unordered_map
    bool checkKey(std::unordered_map<char, int> map, char key)
    {
        // there isn't a key in map
        if (map.find(key) == map.end())
            return false;

        return true;
    }

    // checks if key is exists, if so increment value
    std::unordered_map<char, int> countUpChars(std::unordered_map<char, int> map, std::string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            // isn't a key value pair -- add it
            if (!checkKey(map, s[i]))
                map.insert({ s[i], 1 });
            // if there is a key value pair, increment value
            else
            {
                auto it = map.find(s[i]);
                it->second += 1;
            }
        }

        return map;
    }

    // NEED TO CODE THIS
    bool checkSimilarMaps(std::unordered_map<char, int> map1, std::unordered_map<char, int> map2)
    {
        return false;
    }
};

int main() 
{
    std::string s1 = "anagram";
    std::string s2 = "nagaram";

    Solution s;
    auto results = s.isAnagram(s1, s2);
    
    return 0;
}