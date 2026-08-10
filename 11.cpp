#include <vector>
#include <climits>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int max = INT_MIN;
        std::vector<int>::iterator l = height.begin();
        std::vector<int>::iterator r = height.end() - 1;
        
        while (l < r) {
            int h = std::min(*l, *r);
            int w = (r - height.begin()) - (l - height.begin());;

            max = std::max(h * w, max);

            if (*l <= *r) l++;
            else r--;
        }

        return max;
    }
};