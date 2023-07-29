//11.	Create a C++ class for player object with the following attributes player no., name, number of matches and number of goals done in each match. The number of matches varies for each player. Write parameterized constructor which initializes player no., name, number of subjects and creates array for number of goals and number of matches dynamically.
 
 
 
#include<iostream>
using namespace std;
 
class Player
{
    int player_no, no_of_matches;
    string player_name;
    int* goals;
    public:
        Player()
        {
            int i;
            cout<<"Enter Player No. : "<< endl;
            cin>>player_no;
            cout<<"Enter Player Name : "<< endl;
            cin>>player_name;
            cout<<"Enter No. of Matches : "<< endl;
            cin>>no_of_matches;
            goals=new int [no_of_matches];
            for(i=0; i<=no_of_matches - 1; i++)
            {
                    cout<<"Enter No. of Goals in Match "<<i+1<<" : " << endl;
                    cin>>goals[i];
            }
        }
        void display()
        {
            int i;
            cout<<"--------------------------------"<< endl;
            cout<<"Player No. : "<<player_no << endl;
            cout<<"Player Name : "<<player_name << endl;
            cout<<"No. of Matches Played : "<<no_of_matches << endl;
            for(i=0; i<=no_of_matches - 1; i++)
            {
                    cout<<"Match "<<i+1<<" Goals : "<<goals[i];
            }
        }
};
int main()
{
        Player P;
        P.display();
        return 0;
}