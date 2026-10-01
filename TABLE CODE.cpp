#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"ROYAL PRINCE YASH - TABLE CODE" <<endl <<endl;
    cout<<"Enter a Number : ";
    cin>>num;

    for (int i=1; i<=10; i++) {
        cout<<num <<" x " <<i <<" = " <<num*i <<endl;
    }
    return 0;
}