#include <algorithm> // swap

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    // k and only between 1 - size of linked list
    ListNode* swapNodes(ListNode* head, int k) {
        int size = 1;
        ListNode* front = head;
        
        // finding the end of the linked list
        ListNode* end = head;
        while (end->next != nullptr) {
            end = end->next;
            size++;
        }
            
        end = head;

        // finding front/end nodes
        for (int i = 1; i < k; i++) 
            front = front->next;
         
        for (int i = 1; i <= size - k; i++)
            end = end->next;
        
        std::swap(front->val, end->val);

        return head;
    }
};