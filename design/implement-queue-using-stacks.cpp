#include <stack>
#include <vector>
using namespace std;

class MyQueue {
public:
    stack<int> s;

    void push(int x) {
        vector<int> temp;

        while (!s.empty()) {
            temp.push_back(s.top());
            s.pop();
        }

        s.push(x);

        for (int i = temp.size() - 1; i >= 0; i--) {
            s.push(temp[i]);
        }
    }
    
    int pop() {
        if (s.empty()) return -1; // safety

        int val = s.top();
        s.pop();
        return val;
    }
    
    int peek() {
        if (s.empty()) return -1; // safety
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};