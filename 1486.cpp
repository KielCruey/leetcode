#include <vector>
#include <bitset>

class Solution {
public:
    int xorOperation(int n, int start) {
        std::vector<std::bitset<32>> v;

        // initializing vectors
        for (int i = 0; i < n; i++)
            v.push_back(std::bitset<32>(start + 2 * i));
        
        // XOR all bitsets -- v[0] is the results
        for (int i = 1; i < n; i++)
            v[0] ^= v[i];

        return v[0].to_ulong();
    }
};