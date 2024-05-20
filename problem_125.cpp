#include <string>
#include <algorithm>
#include <cctype> // isspace, ispunct
#include <cstring> // tolower

#include <iostream>

class Solution {
public:
    bool isPalindrome(std::string s) {
        // removes all whitespaces from string
        s.erase(std::remove_if(s.begin(), s.end(), std::isspace), s.end());

        // removes all punctuation characters
        s.erase(std::remove_if(s.begin(), s.end(), std::ispunct), s.end());

        // checks if empty string -- valid palindrome
        if (s.empty())
            return true;

        // all characters to lowercase
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);

        std::string::iterator b = s.begin();
        std::string::iterator e = s.end() - 1;
        
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (*b == *e)
            {
                b++;
                e--;
            }
            else
                return false;
        }

        return true;
    }
};

int main() {

    std::string str1 = "A man, a plan, a canal: Panama"; // true
    std::string str2 = "race a car"; // false
    std::string str3 = " "; // true

    Solution s;
    auto results = s.isPalindrome(str3);

    return 0;
}