#include <iostream>
using namespace std;

class student
{
  public:
 student() {
    cout << "Constructor call" <<endl;
  }
  ~student() {
    cout << "Destructor call";
  }
};
int main() {
  student s;
     return 0;
}