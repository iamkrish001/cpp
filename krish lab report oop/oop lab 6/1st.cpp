#include <iostream>
#include <string>

using namespace std;

// Function template to swap values of any data type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    string str1 = "Hello", str2 = "World";

    // Swap values of integer variables
    swapValues(num1, num2);
    cout << "After swapping integers: " << num1 << ", " << num2 << endl;

    // Swap values of string variables
    swapValues(str1, str2);
    cout << "After swapping strings: " << str1 << ", " << str2 << endl;

    return 0;
}