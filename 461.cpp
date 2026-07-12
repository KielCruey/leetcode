#include <bitset>

class Solution {
public:
    int hammingDistance(int x, int y) {
        std::bitset<32> b1(x); // converts int to binary
        std::bitset<32> b2(y);
		std::bitset<32> results = b1 ^ b2; // XOR -- 1's will be different

		return results.count();
    }
};