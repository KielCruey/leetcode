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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;

        // checks if first node needs to be deleted
        while(current != NULL && current->val == val){
            ListNode* deleteNode = current;
            current = current->next;
            head = head->next;
            delete(deleteNode);
        }

        // checks and deletes everything else
        while(current != NULL && current->next) {
            if(current->next->val == val) {
                ListNode* deleteNode = current->next;
                current->next = current->next->next;
                delete(deleteNode);
            }
            else
                current = current->next;
        }

        return head;
    }
};