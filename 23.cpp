#include <vector>
#include <queue>

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution {
  public:
      ListNode* mergeKLists(std::vector<ListNode*>& lists) {
          // edge case
          int numEmptyLists{};
          for (ListNode* i : lists)
              if (i == nullptr)
                  numEmptyLists++;

          if (lists.size() == numEmptyLists || lists.size() == 0)
              return nullptr;

          ListNode* results{};
          ListNode* temp{};
          std::priority_queue<ListNode*, std::vector<ListNode*>, CompareListNode> pq;

          // pushing all nodes in priority queue
          for (ListNode* i : lists) {
              while (i != nullptr) {
                  temp = i->next;
                  i->next = nullptr;
                  pq.push(i);
                  i = temp;
              }
          }

          // initializing first node in results
          results = pq.top();
          temp = results;
          pq.pop();

          // building node chain
          int size = pq.size();
          for (int i = 0; i < size; i++) {
              temp->next = pq.top();
              temp = temp->next;
              pq.pop();
          }

          return results;
      }

      struct CompareListNode {
          bool operator()(ListNode* a, ListNode* b) {
              return a->val > b->val;
          }
      };
  };