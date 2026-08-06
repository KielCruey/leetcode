#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        if (chars.size() == 0)
            return 0;
        else if (chars.size() == 1)
            return 1;

        int count{};
        char c{};
        std::string s{};

        // initialization
        c = chars[0];

        for (char& i : chars) {
            if (c == i) {
                count++;
            }
            else {
                s.push_back(c);

                if(count != 1)
                    s.push_back(count);

                c = i;
                count = 1;
            }
        }

        s.push_back(c);

        if (count != 1)
            s.push_back(count);
  
        return s.size();
    }
};

int main() {
    Solution s;

    std::vector<char> v{ 'a','a','b','b','c','c','c' };

    s.compress(v);

    

    return 0;
}