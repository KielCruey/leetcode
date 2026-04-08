#include <vector>
#include <algorithm>
#include <map>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> v;
        std::map<int, int> map1;
        std::map<int, int> map2;

        for (int i = 0; i < nums1.size(); i++)
            map1[nums1[i]]++; // increment key's value

        for (int i = 0; i < nums2.size(); i++)
            map2[nums2[i]]++; // increment key's value

        // see if both maps have the same key,
        // then the lowest key is pushed into the vector
        for (std::map<int, int>::iterator it1 = map1.begin(); it1 != map1.end(); it1++) {
            for (std::map<int, int>::iterator it2 = map2.begin(); it2 != map2.end(); it2++) {
                // check if keys are equal
                if ((*it1).first == (*it2).first) {
                    int numPushBack{};

					// figures out the lowest value of the same key
                    if((*it1).second <= (*it2).second) 
                        numPushBack = (*it1).second;
                    else 
                        numPushBack = (*it2).second;

                    // push back the lowest value of the keys
                    for(int i = 0; i < numPushBack; i++)
                        v.push_back((*it1).first);
                }
            }
        }

        return v;
    }
};