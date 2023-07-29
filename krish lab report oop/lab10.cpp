//9.	Write a suitable program to demonstrate the destructor.
 
 
 
  #include <iostream>
 
using namespace std;
 
namespace MyNamespace {
 
    class MyClass {
    public:
        // Constructor
        MyClass(int data) : data(data) {
            cout << "Constructor called. Data: " << data << endl;
        }
 
        // Destructor
        ~MyClass() {
            cout << "Destructor called. Data: " << data << endl;
        }
 
    private:
        int data;
    };
 
} // namespace MyNamespace
 
int main() {
    cout << "Creating object 1:" << endl;
    MyNamespace::MyClass obj1(15); // Constructor called
 
    {
        cout << "Creating object 2:" << endl;
        MyNamespace::MyClass obj2(23); // Constructor called
    } // obj2 goes out of scope, its destructor will be called
 
    cout << "Back to main function." << endl;
 
    return 0; // obj1 goes out of scope, its destructor will be called
}
 