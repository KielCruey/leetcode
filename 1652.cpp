#include <vector>

class Solution {
public:
    std::vector<int> decrypt(std::vector<int>& code, int k) {
        std::vector<int> results;

        // edge conditions
        if(k == 0) {
			results.resize(code.size(), 0); // all elements are 0
            return results;
		}




        return results;
    }
};

int main()
{
	Solution s;

    std::vector<int> code{1,2,3,4};
    int k = 0;

	s.decrypt(code, k);

    return 0;
}