#include <bitset>

class Solution {
public:
    int reverseBits(int n) {
        int index = 0;
        std::bitset<32> revBits;
		std::bitset<32> bits(n); // converts to binary

        // reversing a 32 bit number
        for (int i = bits.size() - 1; i >= 0; i--) {
            revBits[index] = bits[i];
            index++;
        }

        return revBits.to_ulong();
    }
};