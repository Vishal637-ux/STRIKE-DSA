#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
private:
    T arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == 99;
    }

    void push(T value) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        topIndex++;
        arr[topIndex] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    T top() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty");
        }
        return arr[topIndex];
    }

    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << "Top int: " << s1.top() << endl;

    Stack<string> s2;
    s2.push("Hello");
    s2.push("Vishal");
    cout << "Top string: " << s2.top() << endl;

    Stack<char> s3;
    s3.push('A');
    s3.push('B');
    cout << "Top char: " << s3.top() << endl;

    return 0;
}




// g++        = compiler
// HK44.cpp   = input source file
// -o HK44    = output executable name