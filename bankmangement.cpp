#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class bank
{
    char name(100),add(100),y;
    int balance;
    
    public:
            void open_account();
            void deposite_money();
            void withdraw_money();
            void display_account();


};
void bank ::open_account()
{
    cout<<"Enter Your Full Name::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter Your Address::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What Type Of Account You have to Open Saving (s) or Current (c)";
    cin>>y;
    cout<<"\n Enter Amount For Deposite::"
    cin>>balance;
    cout<<"Your Account is Created";

}
void deposite :: deposite_money()
{
    int a;
    cout<<"Enter how much you deposite ::";
    cin>>a;
    balance+=a;
    cout<<"Total Balance Amount You Desposite::\t"<<balance;

}
void display_account()
{

}
int main()
{
    cout<<"1) Open Account\n";
    cout<<"2) Deposite Money\n";
    cout<<"3) Withdraw Money\n";
    cout<<"4) Display Account\n";
    cout<<"5) Exit\n";







    getch();
    return 0;

}