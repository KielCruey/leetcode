#include <string>
#include <queue>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        // error case -- if substring is empty, solution
        if (s.empty())
            return true;

        // error case -- if string is empty, no solution
        if (t.empty())
            return false;

        std::queue<char> q;

        // pushes the substring to queue
        for(int i = 0; i < s.size(); i++)
            q.push(s[i]);

        for (int i = 0; i < t.size(); i++) {
            if (q.front() == t[i])
                q.pop();

            if (q.empty())
                return true;
        }

        return false;
    }
};