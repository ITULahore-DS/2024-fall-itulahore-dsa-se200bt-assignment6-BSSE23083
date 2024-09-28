//
// Created by abdul on 28/09/2024.
//

#include "functions.h"
#include <iostream>

using namespace std;

Node::Node() {
    data = 0;
    next = nullptr;
}

Node::Node(int data) {
    this->data = data;
    next = nullptr;
}

Node::~Node() {

}

void Node::setNext(Node *nextNode) {
    next = nextNode;
}

Node *Node::getNext() {
    return next;
}

void Node::setData(int dataVal) {
    data = dataVal;
}

int Node::getData() {
    return data;
}

Stack::Stack() {
    top = nullptr;
    count = 0;
}

Stack::~Stack() {
    clear();
}

bool Stack::isEmpty() {
    return top== nullptr;
}

void Stack::push(int data) {
    Node *node = new Node(data);
    node->next = top;
    top = node;
    count++;
}

void Stack::pop() {
    if (isEmpty()) {
        cout<<"Stack is empty"<<endl;
    } else {
        Node *temp = top;
        top = top->next;
        delete temp;
        count--;
    }
}

int Stack::peek() {
    if (isEmpty()) {
        return -1;
    }
    return top->data;
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    while (top) {
        pop();
    }
}

void Stack::printStack() {
    Node *cur = top;
    int i = count;
    while (top) {
        cout << "Data[" << i << "] : " << cur->data << endl;
        i--;
    }
}
