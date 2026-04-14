#include <vector>
#include <queue>
#include <list>

class Solution {
public:
    // bfs implementation
    bool validPath(int n, std::vector<std::vector<int>>& edges, int source, int destination) {
        std::vector<std::list<int>> adj; // adjacency list
        // need to populate list

        

		std::vector<bool> vN(n, false); // visited nodes
        std::queue<int> q;

        vN[source] = true;
		q.push(source);

        // bfs traversal
        while (!q.empty()) {
            int nodeI = q.front(); // node index
            q.pop();

            auto a = edges.at(nodeI).begin();
            for (auto it = edges.at(nodeI).begin(); it != edges.at(nodeI).end(); it++) {
                // if vistedNode bool is false, not visited, then visit it
                if (!vN[*it]) {
                    vN[*it] = true;
                    q.push(*it);
                }
            }
        }

        return vN[destination];
    }
};

int main() {
    Solution solution;
    std::vector<std::vector<int>> edges = {{0,1}, {0,2}, {3,5}, {5,4}, {4,3}};
    bool result = solution.validPath(6, edges, 0, 5);

    return 0;
}