#include <string>
#include <iostream>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string results;

        for (int i = 0; i < address.size(); i++)
        {
            if (address.at(i) == '.') results += "[.]";
            else results += address.at(i);
        }
            
        return results;
    }
};


int main() {
    Solution s;

    // test 1
    //std::string address = "1.1.1.1"; // answer "1[.]1[.]1[.]1"

    // test 2 
    std::string address = "255.100.50.0"; // answer "255[.]100[.]50[.]0"

    auto index = s.defangIPaddr(address);

    return 0;
}