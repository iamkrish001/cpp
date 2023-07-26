
//3.	Write a C++ program that converts a temperature in Celsius to Fahrenheit.
#include <iostream>
 
int main() {
    double celsius, fahrenheit;
 
    // Prompt the user to enter the temperature in Celsius
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;
 
    // Convert Celsius to Fahrenheit using the conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
 
    // Display the temperature in Fahrenheit
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
 
    return 0;
}
 
