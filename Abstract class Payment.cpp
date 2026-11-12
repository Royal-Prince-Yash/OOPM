#include<iostream>
using namespace std;

class payment
{
  public:
  virtual void pay(int amount) = 0;
};

class UPI : public payment
{
  public:
  void pay(int amount) override {
    cout<<"Pay " << amount << " via UPI" <<endl;
  }
};

class Card : public payment
{
  public:
  void pay(int amount) override {
    cout<<"Pay " << amount << " via Card" <<endl;
  }
};

class Cash : public payment
{
  public:
  void pay(int amount) override {
    cout<<"Pay " << amount <<" via cash" <<endl;
  }
};

int main() {
  UPI u;
  Card c;
  Cash ca;

  u.pay(50);
  c.pay(60);
  ca.pay(70);

  return 0;
}