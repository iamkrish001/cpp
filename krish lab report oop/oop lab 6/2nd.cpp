#include <iostream>

using namespace std;

// Function template to find the maximum of two values (numeric types)
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Overloaded function template to find the maximum of two values (character types)
template <>
char maximum<char>(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 5, num2 = 100;
    double double1 = 3.14, double2 = 3.71;
    char char1 = 'A', char2 = 'Z';

    // Find maximum of integers
    int maxInt = maximum(num1, num2);
    cout << "Maximum integer: " << maxInt << endl;

    // Find maximum of double values
    double maxDouble = maximum(double1, double2);
    cout << "Maximum double: " << maxDouble << endl;

    // Find maximum of characters
    char maxChar = maximum(char1, char2);
    cout << "Maximum character: " << maxChar << endl;

    return 0;
}