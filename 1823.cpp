#include <list>

// circular listed list solution
class Solution {
public:
    int findTheWinner(int n, int k) {
        std::list<int>* list = new std::list<int>();

        // populating list
        for (int i = 0; i < n; i++)
            list->push_back(i + 1);

        // find the last number
        std::list<int>::iterator it = list->begin();
        std::list<int>::iterator deleteElement;
        while (list->size() != 1) {
            if (list->size() == 1)
                break;

            for (int i = 0; i < k - 1; i++) {
                it++; // safe to increment
                if (it == list->end())
                    it = list->begin();
            }
            
            deleteElement = it;

            // "it" is now the next element
            if (++it == list->end())
                it = list->begin(); // circular increment
                
            // deletes one node
            list->erase(deleteElement);   
        }
        
        return (*it);
    }
};