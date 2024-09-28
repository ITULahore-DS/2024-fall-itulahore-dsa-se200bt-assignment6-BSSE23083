//
// Created by abdul on 28/09/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23083_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23083_FUNCTIONS_H
#include <iostream>
using namespace std;

//Node class
class Node{
    int data;
    Node* next;
public:
    Node();
    Node(int data);
    ~Node();
    void setNext(Node* nextNode);
    Node* getNext();
    void setData(int dataVal);
    int getData();
    friend class Stack;
    friend class Queue;
};

//Stack class
class Stack{
    Node* top;
    int count;
public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();

};
//
////Queue class
//class Queue{
//    Node* top;
//    int count;
//public:
//    Queue();
//    ~Queue();
//    bool isEmpty();
//    void enqueue(int data);
//    void dequeue();
//    int size();
//    void printQueue();
//};
//

#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23083_FUNCTIONS_H
