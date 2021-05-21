//
// Created by s1000633 on 5/19/21.
//

#include "MyQueue.h"

int main() {
    MyQueue* obj = new MyQueue();
    int x = 3;
    obj->push(x);
    x = 4;
    obj->push(x);
    x = 5;
    obj->push(x);
    x = 6;
    obj->push(x);
    x = 7;
    obj->push(x);

    int param_2 = obj->pop();
    int param_3 = obj->peek();
    bool param_4 = obj->empty();

    std::cout << param_2 << std::endl;
    std::cout << param_3 << std::endl;
    std::cout << param_4 << std::endl;

}
