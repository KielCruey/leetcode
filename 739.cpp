#include <vector>

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        int count{};
        std::vector<int> results;

        for (int i = 0; i < temperatures.size(); i++) {
            for (int j = i; j < temperatures.size(); j++) {
                if (temperatures[i] >= temperatures[j])
                    count++;
                else {
                    results.push_back(count);
                    count = 0;
                    break;
                }
                    
            }

            if (count != 0) {
                results.push_back(0);
                count = 0;
            }                
        }
        
        return results;
    }
};

int main() {
    Solution s;

    std::vector<int> v{ 73,74,75,71,69,72,76,73 }; // [1,1,4,2,1,1,0,0]

    s.dailyTemperatures(v);

    return 0;
}