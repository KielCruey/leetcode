#include <vector>

class StockSpanner {
public:
    StockSpanner() {
        count = 0;
        v = std::vector<int>{};        
    }

    int next(int price) {
        count = 0; // resest

        v.push_back(price);

        for (int i : v)
            if (i <= price)
                count++;

        return count;
    }

private:
    int count;
    std::vector<int> v;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main() {
    StockSpanner ss;
    ss.next(12);

    return 0;
}