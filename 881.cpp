#include <vector>
#include <algorithm> // sort
#include <iterator>

class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        int results{};

        std::sort(people.begin(), people.end());

        std::vector<int>::iterator begin = people.begin();
        std::vector<int>::iterator end = people.end() - 1;
        
        while (people.size()) {
            if (*end == limit && people.size() != 0) {
                results++;

                if (people.size() > 0)
                    end--;

                people.pop_back();
            }
            else if (begin != end && *begin + *end > limit) {
                results++;

                if (!people.size() > 0)
                    end--;

                people.pop_back();
            }
            else if (*begin + *end <= limit) {

            }
        }


        return 0;        
    }
};

int main() {
    Solution s;
    std::vector<int> people{ 3,5,3,4 };
    s.numRescueBoats(people, 5);
    return 0;
}