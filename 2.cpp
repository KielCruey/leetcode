struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* results = nullptr;
        int sumDigit = 0;
        int carryDigit = 0;
        int resultsLength = 0;

        while (l1 != nullptr || l2 != nullptr || carryDigit != 0)
        {
            // if there isn't anything in the results ListNode struct, else do a different process
            if (results == nullptr)
            {
                if(l1 == nullptr)
                    sumDigit = l2->val;
                else if (l2 == nullptr)
                    sumDigit = l1->val;
                else
                    sumDigit = l1->val + l2->val;

                if (sumDigit >= 10)
                {
                    carryDigit = 1;
                    sumDigit = sumDigit - 10;
                }
                else
                    carryDigit = 0;

                results = new ListNode(sumDigit);
            }
            else
            {
                if (carryDigit != 0 && l1 == nullptr && l2 == nullptr)
                    sumDigit = carryDigit;
                else if (l1 == nullptr)
                    sumDigit = l2->val + carryDigit;
                else if (l2 == nullptr)
                    sumDigit = l1->val + carryDigit;
                else
                    sumDigit = l1->val + l2->val + carryDigit;

                if (sumDigit >= 10)
                {
                    carryDigit = 1;
                    sumDigit = sumDigit - 10;
                }
                else
                    carryDigit = 0;

                results = new ListNode(sumDigit, results);
            }
            
            // increment each linked list
            if(l1 != nullptr)
                l1 = l1->next;

            if (l2 != nullptr)
                l2 = l2->next;
        }

        results = reverse(results);

        return results;
    }

    // reversing the linked list
    ListNode* reverse(ListNode* list)
    {
        ListNode* current = list;
        ListNode* previous = nullptr;
        ListNode* next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }

        current = previous;
        return current;
    }
};