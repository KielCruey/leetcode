#include <vector>
#include <deque>

class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int s0{}; // num of 0 students in queue
        int s1{}; // num of 1 students in queue
        int sI{}; // sandwich index
        std::deque<int> d;

        for (int i : students) {
            if (i == 1) s1++;
            else s0++;
        }

        for (int i : students)
            d.push_back(i);

        int size = sandwiches.size();
        while ((s0 != 0 || s1 != 0) && sI != size && d.size() != 0) {
            if (d.front() == sandwiches[sI]) {
                if (sandwiches[sI] == 0) s0--;
                else s1--;

                d.pop_front();
                sI++;   
            }                
            else {
                int temp = d.front();
                d.pop_front();
                d.push_back(temp);
            }
        }

        return d.size();
    }
};

int main() {
    Solution s;

    std::vector<int> students{ 1, 1, 0, 0 };
    std::vector<int> sandwiches{ 0, 1, 0, 1 };

    //std::vector<int> students{ 1, 1, 1, 0, 0, 1 };
    //std::vector<int> sandwiches{ 1, 0, 0, 0, 1, 1 };

    auto temp = s.countStudents(students, sandwiches);

    return 0;
}