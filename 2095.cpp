struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int size{}, middle{};
        ListNode* current = head;
        ListNode* previous = head;
        ListNode* temp = head; // use for count only

        // determining size
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // checking trivial case -- only one node
        if (size == 1) head = nullptr;

        middle = size / 2;

        // current
        for (int i = 0; i < middle; i++)
            if(current->next != nullptr)
                current = current->next;

        // previous
        for (int i = 0; i < middle - 1; i++)
            if (previous->next != nullptr)
                previous = previous->next;

        // change next pointer
        if (current->next != nullptr) previous->next = current->next;
        else previous->next = nullptr;

        return head;
    }
};