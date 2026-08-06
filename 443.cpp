#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        if (chars.size() == 0) return 0;
        else if (chars.size() == 1) return 1;

        int count{};
        std::string c{};
        std::string s{};

        // initialization
        c = chars[0];

        for (int i = 0; i < chars.size(); i++) {
            if (c[0] == chars[i]) {
                count++;
            }
            else {
                s.push_back(c[0]);

                if(count != 1)
                    s.push_back(count);

                c = chars[i];
                count = 1;
            }
        }

        s.push_back(c[0]);

        if (count != 1)
            s.push_back(count);

        chars.clear();

        for (int i = 0; i < s.size(); i++) {
            chars.push_back(s[i]);
        }
  
        return s.size();
    }
};

int main() {
    Solution s;

    std::vector<char> v{ 'a','a','b','b','c','c','c' };

    s.compress(v);

    

    return 0;
}