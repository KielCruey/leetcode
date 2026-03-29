#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
        int max = *max_element(arr.begin(), arr.end());
        bool isPeak = false;
        bool results = true;
        
        std::cout << arr.size() << std::endl;
        
        // arr needs to be at least 3 elements
        if(arr.size() < 3)
            return false;
        
        // checks if first/last index is the max element
        if(arr[arr.size() - 1] == max || arr[0] == max)
            return false;
        
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] == max)
               isPeak = true; 

            if(isPeak){
                // after the peak, if next value is larger or equal to current value
                if(arr[i] <= arr[i + 1] && (i + 1) < arr.size())
                    return false;
            }
            else if(!isPeak) {
                // before the peak, current value is larger or equal to next value
                if(arr[i] >= arr[i + 1] && (i + 1) < arr.size())
                    return false;
            }
        }
        
        return results;
    }
};