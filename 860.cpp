#define FIVE 0
#define TEN 1
#define TWENTY 2

#include <vector>

class Solution {
public:
    bool lemonadeChange(std::vector<int>& bills) {
        std::vector<int> v(3, 0);

        while (!bills.empty()) {
            int order = bills.front();
            bills.erase(bills.begin());

            if (order == 5)
                v[FIVE]++;
            else if (order == 10 && v[FIVE] >= 1) {
                v[FIVE]--;
                v[TEN]++;
            }
            else if (order == 20 && v[TEN] >= 1 && v[FIVE] >= 1) {
                v[FIVE]--;
                v[TEN]--;
                v[TWENTY]++;
            }
            else if (order == 20 && v[FIVE] >= 3) {
                v[FIVE] -= 3;
                v[TWENTY]++;
            }
            else
                return false;
        }

        return true;
    }
};