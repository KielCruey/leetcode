
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int index{};
        ListNode* last = head;
        ListNode* tail = head;

        while (index < k) {
            while (last != nullptr && last->next != nullptr)
                last = last->next;

            while (tail != nullptr && tail->next != nullptr && tail->next->next != nullptr)
                tail = tail->next;

            if (last != nullptr) last->next = head;
            if (tail != nullptr) tail->next = nullptr;

            // rename
            ListNode* temp = tail;
            tail = head;
            head = last;
            last = temp;

            index++;
        }

        return head;
    }
};

int main() {
    Solution s;

    ListNode* five = new ListNode(5);
    ListNode* four = new ListNode(4, five);
    ListNode* three = new ListNode(3, four);
    ListNode* two = new ListNode(2, three);
    ListNode* head = new ListNode(1, two);

    ListNode* temp = s.rotateRight(head, 2);

    return 0;
}