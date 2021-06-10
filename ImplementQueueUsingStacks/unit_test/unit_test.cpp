//
// Created by s1000633 on 6/4/21.
//

#include "gtest/gtest.h"
#include "../MyQueue.h"
#include <queue>

// Tests MyQueue class

TEST(MyQueue, TestMethodPushAndPeek) {
    std::queue<int> queue;
    MyQueue my_queue;

    queue.push(1);
    my_queue.push(1);

    ASSERT_EQ(queue.front(), my_queue.peek());
}

TEST(MyQueue, TestMethodPopAndEmpty) {
    std::queue<int> queue;
    MyQueue my_queue;

    queue.push(1);
    my_queue.push(1);
    queue.push(2);
    my_queue.push(2);
    queue.push(3);
    my_queue.push(3);
    queue.push(4);
    my_queue.push(4);

    EXPECT_EQ(queue.front(), my_queue.peek());
    my_queue.pop();
    queue.pop();
    EXPECT_EQ(queue.front(), my_queue.peek());
    my_queue.pop();
    queue.pop();
    EXPECT_EQ(queue.front(), my_queue.peek());
    my_queue.pop();
    queue.pop();
    EXPECT_EQ(queue.front(), my_queue.peek());
    my_queue.pop();
    queue.pop();
    EXPECT_EQ(queue.empty(), my_queue.empty());
}
