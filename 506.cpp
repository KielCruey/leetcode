#include <vector>
#include <string>
#include <queue> // priority_queue
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        std::vector<std::string> results;
        std::unordered_map<int, int> m; // key/value pair: score, index in score vector
        
        std::priority_queue<int> pq;

        results.resize(score.size());

        // populate map and priority queue
        for (int i = 0; i < score.size(); i++) {
            pq.push(score[i]);
            m[score[i]] = i;
        }
            
        // populating solution -- results vector
        for (int i = 0; i < score.size(); i++) {
            int temp = pq.top();
            pq.pop();
            auto t = m.find(temp); // find the 

            if (i == 0) results[(*t).second] = "Gold Medal";
            else if (i == 1) results[(*t).second] = "Silver Medal";
            else if (i == 2) results[(*t).second] = "Bronze Medal";
            else results[(*t).second] = std::to_string(i + 1);
        }
        
        return results;
    }
};