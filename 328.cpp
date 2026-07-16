struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // empty -- trivial case
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenStart = head->next;

        // odd must be first to check, if not then runtime error
        while (odd->next && even->next) {
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;
        }

        // odd points to nullptr, refer to evenStart
        odd->next = evenStart;

        return head;
    }
};