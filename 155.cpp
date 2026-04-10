#include <stack>

class MinStack {
    std::stack<int> s{};

public:
    MinStack() = default;

    // pushes the element val onto the stack
    void push(int val) {
        s.push(val);
    }

    // removes the element on the top of the stack
    void pop() {
        s.pop();
    }

    // gets the top element of the stack
    int top() {
        return s.top();
    }

    // retrieves the minimum element in the stack
    int getMin() {
        int min = INT_MAX;
        std::stack<int> temp = s;

        for (int i = 0; i < s.size(); i++) {
            if (temp.top() < min)
                min = temp.top();

            temp.pop();
        }

        return min;
    }
};