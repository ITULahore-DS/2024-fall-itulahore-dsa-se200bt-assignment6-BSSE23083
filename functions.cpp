//
// Created by abdul on 28/09/2024.
//

#include "functions.h"
#include <iostream>

using namespace std;

//Node Funcs
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


//Stack Funcs
Stack::Stack() {
    top = nullptr;
    count = 0;
}

Stack::~Stack() {
    clear();
}

bool Stack::isEmpty() {
    return top == nullptr;
}

void Stack::push(int data) {
    Node *node = new Node(data);
    node->next = top;
    top = node;
    count++;
}

void Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
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
    int i = count-1;
    if (cur == nullptr) {
        cout << "Stack is empty" << endl;
    } else {
        while (cur != nullptr) {
            cout << "Data[" << i << "] : " << cur->data << endl;
            cur = cur->next;
            i--;
        }
    }
}


//Queue Funcs
Queue::Queue() {
    top = nullptr;
    bottom = nullptr;
    count = 0;
}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

bool Queue::isEmpty() { return count == 0; }

void Queue::enqueue(int data) { //Insert at bottom
    if (bottom == nullptr && top == nullptr) {
        Node *n = new Node(data);
        top = n;
        bottom = n;
    } else {
        Node *n = new Node(data);
        bottom->next = n;
        bottom = n;
    }
    count++;
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Cannot Dequeue" << endl;
    } else if (top == bottom) {
        Node *temp = top;
        delete temp;
        top = nullptr;
        bottom = nullptr;
        count--;

    } else {
        Node *temp = top;
        top = top->next;
        delete temp;
        count--;

    }
}

int Queue::size() {
    return count;
}

void Queue::printQueue() {
    Node *temp = top;
    int i = 0;
    if(top== nullptr){
        cout<<"Queue is empty"<<endl;
    }else{
        while (temp != bottom->next) { //or we can use nullptr
            cout << "Queue[" << i << "]: " << temp->data << endl;
            temp=temp->next;
            i++;
        }
        cout<<"Size: "<<count<<endl;
    }

}