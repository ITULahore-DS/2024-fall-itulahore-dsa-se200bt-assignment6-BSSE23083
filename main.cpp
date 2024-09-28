//
// Created by abdul on 28/09/2024.
//
#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    Stack stack;
    Queue queue;
    int choice, data;

    while (true) {
        cout << "\n===== ASSIGNMENT 6 =====" << endl;
        cout << "\n===== BSSE23083 Abdul's Menu =====" << endl;
        cout << "1. Push to Stack" << endl;
        cout << "2. Pop from Stack" << endl;
        cout << "3. Peek Stack" << endl;
        cout << "4. Display Stack" << endl;
        cout << "5. Enqueue to Queue" << endl;
        cout << "6. Dequeue from Queue" << endl;
        cout << "7. Display Queue" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number to push: ";
                cin >> data;
                stack.push(data);
                cout << "Pushed " << data << " to stack." << endl;
                break;

            case 2:
                if (stack.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    stack.pop();
                    cout << "Popped from stack." << endl;
                }
                break;

            case 3:
                if (stack.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Top of stack: " << stack.peek() << endl;
                }
                break;

            case 4:
                if (stack.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack contents:" << endl;
                    stack.printStack();
                }
                break;

            case 5:
                cout << "Enter the number to enqueue: ";
                cin >> data;
                queue.enqueue(data);
                cout << "Enqueued " << data << " to queue." << endl;
                break;

            case 6:
                if (queue.isEmpty()) {
                    cout << "Queue is empty." << endl;
                } else {
                    queue.dequeue();
                    cout << "Dequeued from queue." << endl;
                }
                break;

            case 7:
                if (queue.isEmpty()) {
                    cout << "Queue is empty." << endl;
                } else {
                    cout << "Queue contents:" << endl;
                    queue.printQueue();
                }
                break;

            case 8:
                cout << "Exiting program." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    }
    return 0;
}
