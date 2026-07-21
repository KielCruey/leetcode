struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// use the slow/fast pointers, slow increment once, and fast twice
// if slow fast pointers point to the same address node, there's a cycle
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr)
            return false;

        ListNode* fast = head;
        ListNode* slow = head;

        // trivial case
        if (head->next != nullptr) fast = head->next;
        else return false;

        while (fast != nullptr) {
            // fast pointer's first increment
            if (fast->next != nullptr) fast = fast->next;
            else return false;

            // fast pointer's second increment
            if (fast->next != nullptr) fast = fast->next;
            else return false;

            slow = slow->next;

            // if pointer's address are the same
            if (slow == fast)
                return true;
        }

        return false;
    }
};