#include<iostream>
using namespace std;
int main() {
    int balance,choice,deposit,withdraw;
    cout<<"ROYAL PRINCE YASH - ATM CODE\n";
   
    cout<<"\n1.Check Balance\n" <<"2.Deposit Money\n" <<"3.Withdraw\n" <<"4.Exit\n\n";

    cout<<"Enter Choice : ";
    cin>>choice;

    switch (choice) {
        case 1: 
        cout<<"Your Balance Rs." <<balance;
        break;

        case 2:
        cout<<"Enter Amount for Deposit : ";
        cin>>deposit;
            if (deposit <= 0) {
                cout<<"Enter Valid Amount";
            }
            else {
                balance = balance + deposit;
            cout<<"Your Current Balance : Rs." <<balance;
        break;

        case 3:
        cout<<"Enter Withdraw : ";
        cin>>withdraw;
            if (withdraw>balance) {
                cout<<"Insufficient Amount";
            }
            else if (withdraw<=0) {
                cout<<"Enter Some Amount";
            }
            else {
                balance = balance - withdraw;
                cout<<"Withdraw Successful";
                cout<<"\nRemaining balance : Rs." <<balance; }
            }
        break;

        case 4:
        cout<<"THANKS FOR USING ATM";
        break;

        default :
        cout<<"Invalid "; 
        break;
    }
    return 0;
}