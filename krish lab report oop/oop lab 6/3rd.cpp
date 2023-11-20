#include <iostream>

using namespace std;

// Function template to add two values of any data type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    double double1 = 3.14, double2 = 2.71;
    char char1 = 'A', char2 = 'B';

    // Add two integers
    int sumInt = add(num1, num2);
    cout << "Sum of integers: " << sumInt << endl;

    // Add two double values
    double sumDouble = add(double1, double2);
    cout << "Sum of doubles: " << sumDouble << endl;

    // Add two characters (ASCII values)
    char sumChar = add(char1, char2);
    cout << "Sum of characters: " << sumChar << " (ASCII value)" << endl;

    return 0;
}