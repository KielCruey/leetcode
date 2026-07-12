#include <bitset>

class Solution {
public:
    int bitwiseComplement(int n) {
		if (n == 0) return 1; // edge case
        
		std::bitset<32> bits(n); // converts int to binary

        // finding that particular int's mask -- to eliminate leading 1's
        std::bitset<32> mask(0);
        for (int i = 31; i >= 0; i--) {
            // find the first left most bit
            if (bits[i] == 0) mask[i] = 1;
            else break;
        }

        return (bits.flip() ^ mask).to_ulong(); // flip numb and XOR it
    }
};