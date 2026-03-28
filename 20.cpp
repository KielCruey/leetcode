#include <string.h>
#include <stack>
#include <string>

using namespace std;

// if (, [, or { then push it on the stack or else return false
// if ), ], or } check the top 
// if it's the complementry then pop it off the stack
// else return false
// true if stack size 0, then true

class Solution {
public:
    bool isValid(std::string s) {
        stack<char> sStack;
        bool results = false;

        for(char i : s)
        {
            if(i == '(' || i == '[' || i == '{')
                sStack.push(i);

            if(!sStack.empty())
            {
                if(i == ')' && sStack.top() == '('
                    || i == ']' && sStack.top() == '['
                    || i == '}' && sStack.top() == '{')
                {
                    sStack.pop();
                }
                else
                    return false;
            } 
            else
                return false;
        }

        if(sStack.size() == 0)
            results = true;
        else
            results = false;

        return results;
    }
};