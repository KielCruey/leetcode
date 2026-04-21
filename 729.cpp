#include <vector>

class MyCalendar {
public:
    MyCalendar() = default;

    bool book(int startTime, int endTime) {
        // conditions when can't book
        for (int i = 0; i < times.size(); i++) {
            // start time overlaps another event
            if (times[i].first <= startTime && startTime < times[i].second)
                return false;

            // end time overlaps another event
            if (times[i].first < endTime && endTime <= times[i].second)
                return false;

            // an event is contained in another event
            if (startTime <= times[i].first && times[i].second <= endTime)
                return false;   
        }
           
        std::pair<int, int> newPair(startTime, endTime);
        times.push_back(newPair);

        return true;
    }

    std::vector<std::pair<int, int>> times;
};