#include <cstddef>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* backwards = NULL;
        ListNode* current = head;
        ListNode* forwards = head;

        while(current != NULL) {
            forwards = current->next;   // forwards is NULL when last node is checked, but doesn't matter
            current->next = backwards;
            backwards = current;
            current = forwards;
        }

        return backwards;        
    }
};