
#include<iostream>
#include<unistd.h>
#include<string>
#include<cstdlib>//for using exit(0) and the rand function
#include<ctime>//to seed value as time in srand
using namespace std;

string currentplace;//current location ou your
string destination;//the place you want to reach
float price;//final price of the fair
string name; 
int age,phone_number;
int num;



void list(); //list of choices.
void otp(); //generating otp.
void takedata();//taking the required data from user.
void pricesetter(); //set the price of the fair.



int main()
{
    int inp;
    list();
    label:
    cout<<"\t\t\t\tEnter your choice:\n";
    cin>>inp;
    char in2;
    if (inp==1)
    {
        takedata();
        pricesetter();
        cout<<"The fair for this ride will be:"<<price<<endl<<endl;
        cout<<"Do you want to pay (y/n)";
        cin>>in2;
        if (in2=='y')
        {
          cout<<"\t\tYou will recieve otp in 5 seconds...\n";
          sleep(5);
          cout<<"\t\t-------------------------------------\n";
          cout<<"Your otp for the uber ride is :"<<num;
          cout<<"------------------------------------------\n";
          cout<<"\t\t--------Enjoy your ride-------\n";
          exit(0);
        }
        else 
        {
            exit(0);
        }
        
        
    }
    else if (inp==2)
    {
        exit(0);
    }
    else
    {
        cout<<"\t\tInvalid input!!\n";
        goto label;
    }
    
    

    return 0;
}
void list(){
    cout<<"\t\t\t--------------------------------\n";
    cout<<"\t\t\t--------------UBER--------------\n";
    cout<<"\t\t\t---------------------------------\n";
    cout<<"\t\t\tbook your own ride\n\n";
    cout<<"\t\t\t1.Book a ride\n";
    cout<<"\t\t\t\t2.Exit\n";


}
void otp(){
    int upper=9999;
    int lower=1000;
    srand(time(0));
     num = (rand() %
           (upper - lower + 1)) + lower;

}
void pricesetter(){
    int upper=100;
    int lower=9000;
    srand(time(0));
     price = (rand() %
           (upper - lower + 1)) + lower;

}
void takedata(){
    cout<<"\t\tEnter Your Name:\n";
    cin>>name;
    cout<<"\t\tEnter Your Age:\n";
    cin>>age;
    cout<<"\t\tEnter Your Phone number first 4 digits:\n";
    cin>>phone_number;
    cout<<"\t\tEnter Your current location:\n";
    cin>>currentplace;
    cout<<"\t\tEnter the destination you want to reach:\n";
    cin>>destination;
    
}
