#include <string>
#include <vector>
#include <deque>

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        std::deque<int> q;
        std::vector<std::string> results;

        // error checking -- null input
        if (nums.empty())
            return results;

        // checks second to last element
        for (int i = 0; i < nums.size() - 1; i++) {
            q.push_back(nums.at(i));

            // next numb isn't next counting numb
            if (nums.at(i) + 1 != nums.at(i+1)) {
                // just a single number in the deque
                if (q.size() == 1) results.push_back(std::to_string(nums.at(i)));
                else results.push_back(std::to_string(q[0]) + "->" + std::to_string(q[q.size() - 1]));

                q.clear();
            } 
        }

        // last element
        q.push_back(nums.at(nums.size()-1));
        if (q.size() == 1)
            results.push_back(std::to_string(nums.at(nums.size()-1)));
        else {
            std::string tString = std::to_string(q[0]) + "->" + std::to_string(q[q.size() - 1]);
            results.push_back(tString);
            q.clear();
        }

        return results;
    }
};