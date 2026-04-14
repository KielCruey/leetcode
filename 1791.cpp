#include <vector>
#include <map>

class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& edges) {
        std::map<int, int> m;
        int results = -1;

        // counts head/tail of nodes
        for (int i = 0; i < edges.size(); i++) {
            m[edges[i][0]]++;
			m[edges[i][1]]++;
        }

        // find the index with the value (n - 1, which n is num nodes)
        for (auto it = m.begin(); it != m.end(); it++) {
            if ((*it).second == edges.size()) {
                results = (*it).first; // index with the value
                break;
            }
        }

        return results; // index
    }
};