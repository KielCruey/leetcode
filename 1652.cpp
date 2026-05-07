#include <vector>

class Solution {
public:
    std::vector<int> decrypt(std::vector<int>& code, int k) {
        std::vector<int> results(code.size(), 0);

        // edge condition
        if (k == 0) return results;

		int sum{}, rWindow{}, index{};
        bool isPositive = k > 0;
        
		// initial sliding window sum
        for (int i = 0; i < std::abs(k); i++)
			sum += code[i];
  
		// index and rWindow differ when k is positive vs negative
        if (isPositive) {
            index = code.size() - 1;
            rWindow = std::abs(k);
        }
        else {
            rWindow = std::abs(k);
            index = std::abs(k);
        }

        // populating results -- static sliding window
        for (int lWindow = 0; lWindow < code.size(); lWindow++, rWindow++, index++) {
            if (rWindow > code.size() - 1) rWindow = 0; // resets
			if (index > code.size() - 1) index = 0; // resets

            results[index] = sum;
            sum = sum + code[rWindow];
            sum = sum - code[lWindow]; 
        }

        return results;
    }
};