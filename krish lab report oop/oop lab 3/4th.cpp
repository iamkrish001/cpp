#include <iostream>
using namespace std;
class Person
{
private:
    string name; int age;

public:
    friend ostream& operator<<(ostream& out, const Person p)
    {
        out << " Name : " << p.name << ", Age : " << p.age << endl;
        return out;
    }
    friend istream& operator>>(istream& in, Person&  p)
    {
        cout << " Enter you name : " << endl;
        cin >> p.name;

        cout << " Enter you age: " << endl;
        cin >> p.age;
        return in;
    }
};
int main()
{
    Person person1, person2;
   
    cout << "Enter information for person1:" << endl;
    cin >> person1 ;

    cout << "Enter information for person2:" << endl;
    cin >> person2;

    cout << "\nPerson1's information: " << person1 << endl;
    cout << "Person2's information: " << person2 << endl;

    return 0;
}