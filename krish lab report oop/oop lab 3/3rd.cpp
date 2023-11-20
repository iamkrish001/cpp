

#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;
 
public:
    void Getdata()
    {
        cout << " Enter the real and imaginary numbers ! " << endl;
        cin >> real >> imaginary;
    }
 
    void display()
    {
        if (imaginary < 0)
        {
            cout <<real << "-"  << -imaginary <<"i"<< endl;
        }
        else
        {
            cout <<real  << "+"  << imaginary <<"i"<<  endl;
        }
    }
    Complex sub(Complex c)
    {
        Complex temp;
        temp.real =  c.real - real;
        temp.imaginary =   c.imaginary- imaginary;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.Getdata();
    c2.Getdata();
 
    c3 = c2.sub(c1);
    c3 = c2.sub(c1);
 
    cout << " Required subtraction is " << endl;
    c3.display();
    return 0;
}

