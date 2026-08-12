#include <vector>
#include <queue> // priority queue

class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        int results{};
        std::priority_queue<int> pq;

        for(int i : nums)
            pq.push(i);

        for(int i = k; i >= 0; i--) {
            results = pq.top();
            pq.pop();
        }

        return results;
    }
};
