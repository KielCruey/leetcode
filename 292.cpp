// if played optimally, your turn with any number of pieces multiple of 4 is a loss

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};