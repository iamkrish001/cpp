#include <iostream>
using namespace std;
 
template <typename T>
T divide(T a, T b) {
    try {
        if (b == 0) {
            throw "Division by zero";
        }
        return a / b;
    } catch (const char *e) {
        cout << "Exception occurred" << endl << e << endl;
        throw;
    }
}
 
int main() {
    try {
        int result1 = divide(10, 2);
        cout << "Result1: " << result1 << endl;
 
        double z2 = divide(5.0, 0.0);
    } catch (const char *e) {
        cout << "Main function caught an exception: " << e << endl;
    }
    return 0;
}