//1.	Write a program that accepts input as number from the user and display the message “Hello World” numbers of times equal to number input by user.
 
 
 
#include <iostream>
 
int main() {
    int number;
 
    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;
 
    // Display "Hello World" number times
    for (int i = 0; i < number; i++) {
        std::cout << "Hello World" << std::endl;
    }
 
    return 0;
}
 