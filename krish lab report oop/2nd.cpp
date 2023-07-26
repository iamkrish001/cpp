
//2.	Write a C++ program that takes two numbers as input and calculates their sum, difference, product, and quotient using appropriate expressions.
 
 #include <iostream>
 
int main() {
    double num1, num2;
 
    // Prompt the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
 
    std::cout << "Enter the second number: ";
    std::cin >> num2;
 
    // Calculate and display the sum, difference, product, and quotient
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
 
    // Make sure the second number is not zero to avoid division by zero error
    if (num2 != 0) {
        double quotient = num1 / num2;
 
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;
        std::cout << "Product: " << product << std::endl;
        std::cout << "Quotient: " << quotient << std::endl;
    } else {
        std::cout << "Error: Cannot divide by zero." << std::endl;
    }
 
    return 0;
}