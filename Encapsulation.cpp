#include <iostream>
using namespace std;

class student
{
  private:
  int marks = 0;

  public:
  void setMarks(int m) {
    if (m < 0 || m > 100) {
  cout <<"Invalid Marks";
}
    else {
    marks = m;
    }
  }
  void showMarks() {
    cout << marks;
  }
};

int main() {
  student s;
  s.setMarks(97);
  s.showMarks();
}