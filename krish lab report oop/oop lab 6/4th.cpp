#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    // Push an element onto the stack
    void push(T item) {
        elements.push_back(item);
    }

    // Pop and remove the top element from the stack
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }

    // Display all elements in the stack
    void display() {
        cout << "Stack elements:" << endl;
        for (const T &item : elements) {
            cout << item << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a stack of integers
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(50);
    intStack.push(40);

    cout << "Integer Stack:" << endl;
    intStack.display();

    intStack.pop();
    cout << "After popping one element:" << endl;
    intStack.display();

    // Create a stack of strings
    Stack<string> stringStack;

    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("!");

    cout << "String Stack:" << endl;
    stringStack.display();

    stringStack.pop();
    cout << "After popping one element:" << endl;
    stringStack.display();

    return 0;
}