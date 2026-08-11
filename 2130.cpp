#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    int pairSum(ListNode* head) {
        int maxPair = INT_MIN;
        std::vector<int>::iterator l;
        std::vector<int>::iterator r;
        std::vector<int> v;

        while (head != nullptr) {
            v.push_back(head->val);

            head = head->next;
        }

        l = v.begin();
        r = v.end() - 1;

        while (l < r) {
            maxPair = std::max(maxPair, *l + *r);

            l++;
            r--;
        }       

        return maxPair;
    }
};