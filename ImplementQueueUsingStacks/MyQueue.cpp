//
// Created by s1000633 on 5/21/21.
//

#include "MyQueue.h"

void MyQueue::push(int x) {
    pusher.push(x);
}

int MyQueue::pop() {
    int res = peek();

    popper.pop();
    return res;
}

int MyQueue::peek() {
    if (popper.empty()) {
        while (!pusher.empty()) {
            popper.push(pusher.top());
            pusher.pop();
        }
    }
    return popper.top();
}

bool MyQueue::empty() {
    return popper.empty() && pusher.empty();
}
