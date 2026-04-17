#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* left;
        ListNode* right;

        if (head == nullptr)
            return head;

        // safe to assign pointers
        left = head; 
        if (left->next != nullptr) right = left->next;
        else return head;

        // swapping
        while (left != nullptr && right != nullptr) {
            std::swap(left->val, right->val);

            // increment next to continue swapping
            if (left->next->next != nullptr && right->next->next != nullptr) {
                left = left->next->next;
                right = right->next->next;
            }
            else break;
        }

        return head;
    }
};