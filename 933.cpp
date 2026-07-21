#include <deque>

class RecentCounter {
public:
    RecentCounter() { }

    int ping(int t) {
        d.push_back(t);
       
        while(d.front() < t - 3000)
            d.pop_front();

        return d.size();
    }

private:
    std::deque<int> d;
};