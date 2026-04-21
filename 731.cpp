#include <vector>

class MyCalendarTwo {
public:
    MyCalendarTwo() {
        numBooks = 0;
        startBooks = 0;
        endBooks = 0;
    };

    bool book(int startTime, int endTime) {
        // reset every count
        numBooks = 0;
        startBooks = 0;
        endBooks = 0;

        // conditions when can't book
        for (int i = 0; i < times.size(); i++) {
            // start time overlaps another event
            if (times[i].first <= startTime && startTime < times[i].second) 
                startBooks++;
            // end time overlaps another event
            else if (times[i].first < endTime && endTime <= times[i].second)
                endBooks++;
            // an event is contained in another event
            else if (startTime <= times[i].first && times[i].second <= endTime)
                numBooks++;

            // if 2 bookings over that time, that one being booked is the third
            if (numBooks > 1 || startBooks > 1 || endBooks > 1)
                return false;
        }

        std::pair<int, int> newPair(startTime, endTime);
        times.push_back(newPair);

        return true;
    }

    std::vector<std::pair<int, int>> times;
    int numBooks;
    int startBooks;
    int endBooks;
};

int main() {
    MyCalendarTwo c;

    c.book(10, 20);
    c.book(50, 60);
    c.book(10, 40);
    c.book(5, 15);
    c.book(5, 10);
    c.book(25, 55);

    return 0;
}