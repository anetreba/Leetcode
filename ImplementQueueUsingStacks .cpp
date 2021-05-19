//
// Created by s1000633 on 5/19/21.
//
class MyQueue {
private:
    stack<int> pusher;
    stack<int> popper;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        pusher.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int res = peek();
        popper.pop();
        return res;
    }

    /** Get the front element. */
    int peek() {
        if (popper.empty()) {
            while (!pusher.empty()) {
                popper.push(pusher.top());
                pusher.pop();
            }
        }
        return popper.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return popper.empty() && pusher.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
