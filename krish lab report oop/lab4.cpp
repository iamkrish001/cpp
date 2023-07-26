//4.	Write a C++ program that generates the multiplication table of a given number input by the user.
 
#include <iostream>
 
int main() {
    int number;
 
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;
 
    // Display the multiplication table for the given number
    std::cout << "Multiplication table for " << number << ":" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
 
    return 0;
}
 