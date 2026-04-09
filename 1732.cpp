#include <vector>
#include <algorithm> // max_element

class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        std::vector<int> v;
		v.push_back(0);

        for (int i = 0; i < gain.size(); i++) {
			int value = gain[i] + v[i];
            v.push_back(value);
        }

        return *std::max_element(v.begin(), v.end());
    }
};