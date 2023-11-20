// #include<iostream>
// class Employee{
//         friend void display_data(Part_Time &);
//         friend void display_data(Full_Time &);
//         string name;
//     public:
//         int Em_code;
//         Employee(){   
//             cout<<"Enter employee id and name: "<<endl;
//             cin>>Em_code>>name;
//         }
// };
// class Full_Time: public Employee{
//         double salary;
//         float daily_rate;
//         int no_of_days;
//         friend void display_data(Full_Time &);
//     public:
 
//         Full_Time(){
//             cout<<"Enter salary, daily rate, and no of days: "<<endl;
//             cin>>salary>>daily_rate>>no_of_days;
//         }
// };
// class Part_Time: public Employee{
//         int hrs;
//         float hrs_rte;
//         double slar;
//         friend void display_data(Part_Time &);
//     public:
//         Part_Time(){
//             cout<<"Enter salary, hourly rate, and working hour"<<endl;
//             cin>>slar>>hrs_rte>>hrs;
//         }
// };
 
// void display_data(Part_Time &s1){
//     cout<<"Employee ID = "<<s1.Em_code<<endl;
//     cout<<"Name = "<<s1.name<<endl;
//     cout<<"Working Hours = "<<s1.hrs<<endl;
//     cout<<"Hourly rate = "<<s1.hrs_rte<<endl;
//     cout<<"Salary = "<<s1.slar<<endl;
// }
 
// void display_data(Full_Time &s1){
//     cout<<"Employee ID = "<<s1.Em_code<<endl;
//     cout<<"Name = "<<s1.name<<endl;
//     cout<<"Daily rate = "<<s1.daily_rate<<endl;
//     cout<<"Number of days = "<<s1.no_of_days<<endl;
//     cout<<"Salary = "<<s1.salary<<endl;
// }
 
// int main(){
//     int no_of_employee;
//     cout<<"Enter total no. of employee"<<endl;
//     cin>>no_of_employee;
//     int i, n, search;
//     cout<<"Enter the type of employee"<<endl;
//     cout<<"1. Part Time\n2. Full Time"<<endl;
//     cin>>n;
//     switch(n){
//         case 1: { 
//             Part_Time *ptr = new Part_Time[no_of_employee];
//             cout<<"Enter the Employee id for details"<<endl;
//             cin>>search;
//             for(i=0; i<no_of_employee; i++){
//                 if(ptr[i].Em_code==search){
//                     display_data(ptr[i]);
//                     break;
//                 }
//             }
//             delete[] ptr;
//             break;
//         }
//         case 2:{
//             Full_Time *ptr1 = new Full_Time[no_of_employee];
//             cout<<"Enter the Employee id for details"<<endl;
//             cin>>search;
//             for(i=0; i<no_of_employee; i++){
//                 if(ptr1[i].Em_code==search){
//                     display_data(ptr1[i]);
//                     break;
//                 }
//             }
//             delete[] ptr1;
//             break;
//         }
//         default: cout<<"your input is invalid"<<endl;
//     }
//     return 0;
// }