#include <vector>
#include <stack>

class Solution {
public:
    bool canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
        int size = rooms[0].size();

        std::stack<int> s;
        std::vector<bool> v(rooms.size(), false); // determining what rooms have been visited

        // room 0 is unlocked -- initial stack
        v[0] = true;
        for (int i = 0; i < size; i++) {
            int temp = rooms[0].back();
            rooms[0].pop_back();

            s.push(temp);
        }
            
        // checking the rooms
        while (!s.empty()) {
            int room = s.top();
            s.pop();

            size = rooms[room].size();
            // add new keys to stack
            v[room] = true;
            for (int i = 0; i < size; i++) {
                int temp = rooms[room].back();
                rooms[room].pop_back();

                s.push(temp);
            }

            // if all rooms are checked
            if (checkIfAllRoomsVisited(v, rooms.size()))
                return true;
        }

        return false;
    }

    bool checkIfAllRoomsVisited(std::vector<bool> v, int size) {
        bool results(true);

        for (int i = 0; i < size; i++) {
            results &= v.at(i);

            if (!results) return false;
        }

        return true;
    }
};