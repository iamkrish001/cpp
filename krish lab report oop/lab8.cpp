//7.	Write a program in C++ program to calculate the area of triangle, rectangle and circle using constructor overloading. The program should be menu driven.
 
 
    #include<iostream>
    #include<math.h>
    using namespace std;
    class Area{
      public:
      double area;
 
      Area(double r){
         area=3.14*r*r;
 
 
      }
      Area(double l,double b){
         area=l*b;
 
 
      }
      Area(double a,double b,double c){
 
      double s=(a+b+c)/2;
      area=s*(s-a)*(s-b)*(s-c);
      area=pow(area,0.5);
 
      }
void display(){
   cout<<"Area is"<<area<<endl;
 
}
    };
 
    int main(){
      int option;
 
      do{
         cout<<"Enter any option from below:"<<endl;
      cout<<"1.Calculate area of circle:"<<endl;
      cout<<"2.Calculate area of rectangle:"<<endl;
      cout<<"3.Calculate area of triangle:"<<endl;
      cout<<"4.Exit"<<endl;
 
      cin>>option;
      switch(option){
 
         case 1:
           { double r;
            cout<<"Enter radius:"<<endl;
            cin>>r;
            Area circle(r);
            circle.display();
           }
 
 
           break;
           case 2:
 
           {
            double l,b;
            cout<<"Enter length and breadth"<<endl;
            cin>>l>>b;
            Area rectangle(l,b);
            rectangle.display();
 
 
 
           }
 
           break;
 
           case 3:
 
         {
            double a,b,c;
            cout<<"Enter three sides of a triangle."<<endl;
           cin >> a >> b >> c;
           Area triangle(a,b,c);
           triangle.display();
         }
 
         break;
         case 4:
          exit(0);
 
          default:
          cout << "Invalid option.Please enter again."<<endl;
      }
      }while(option != 4); 
 
    }