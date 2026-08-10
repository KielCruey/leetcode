#include <vector>

class Solution {
public:
    bool stoneGame(std::vector<int>& piles) {
        int you{};
        int opponent{};
        bool isYourTurn = true;

        while (!piles.empty()) {
            if (std::min(piles.front(), piles.back())) {
                if (piles.size() >= 2 && std::min(piles[1], piles[piles.size() - 2])) {
                    if (isYourTurn) you += piles.front();
                    else opponent += piles.front();

                    piles.erase(piles.begin());
                }
                else {
                    if (isYourTurn) you += piles.back();
                    else opponent += piles.back();

                    piles.pop_back();
                }
            }  
            else {
                if (isYourTurn) you += piles.back();
                else opponent += piles.back();

                piles.pop_back();
            }

            isYourTurn = !isYourTurn; // toggle
        }

        return you > opponent;
    }
};

int main() {
    Solution s;

    //std::vector<int> v{ 5,3,4,5 };
    //std::vector<int> v{ 3,7,2,3 };
    std::vector<int> v{ 3,2,10,4 };
    
    s.stoneGame(v);

    return 0;
}