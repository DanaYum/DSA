#include <iostream>
using namespace std;

class Stack {
private:
    int st[10];  
    int top = -1;

public:
    void push(int x) {
        if (top == 9) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            st[top] = x;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            top--;
        }
    }

    void printTop() {  // Renamed from 'top' to avoid conflict
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << st[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << st[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();  // Output: 30 20 10
    s.pop();
    s.display();  // Output: 20 10
    s.printTop(); // Output: 20
    return 0;
}
