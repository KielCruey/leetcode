#include <vector>
#include <algorithm>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr) {
        auto max = *max_element(arr.begin(), arr.end());
        int results = 0;

        for(int i = 0; i <arr.size(); i++) {
            if(max == arr[i])
                return i;
        }
        
        return results;
    }
};