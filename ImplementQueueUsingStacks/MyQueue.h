//
// Created by s1000633 on 5/21/21.
//

#ifndef LEETCODE_MYQUEUE_H
#define LEETCODE_MYQUEUE_H

#include <stack>
#include <iostream>

class MyQueue {
private:
    std::stack<int> pusher;
    std::stack<int> popper;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x);

    /** Removes the element from in front of queue and returns that element. */
    int pop();

    /** Get the front element. */
    int peek();

    /** Returns whether the queue is empty. */
    bool empty();
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */


#endif //LEETCODE_MYQUEUE_H
