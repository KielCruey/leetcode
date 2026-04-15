#include <stack>
#include <cmath> // ceil

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int size = 1;
        ListNode* temp = head;
        std::stack<ListNode*> s;

        // counts the number of nodes
        while (temp->next != nullptr) {
            size++;
            temp = temp->next;
        }
            
        int remainder = size % 2;

        // loading half the stack
        for (int i = 0; i < size; i++) {
            // will add the remainder if size is odd number of elements
            if (std::ceil(size / 2) > i)
                s.push(head);

            if (i >= size / 2) {
                if (remainder == 1) remainder = -1; // any number really, not 1
                else {
                    if (head->val != s.top()->val)
                        return false;

                    s.pop();
                }
            }

            head = head->next;
        }
            
        return true;
    }
};