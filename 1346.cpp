#include <vector>
#include <algorithm>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                // checks conditions if array values are negative 
                if (arr[i] == 2 * arr[j] && arr[j] < 0)
                    return true;

                // checks conditions if array values are positive
                if (2 * arr[i] == arr[j])
                    return true;
            }
        }

        return false;
    }
};