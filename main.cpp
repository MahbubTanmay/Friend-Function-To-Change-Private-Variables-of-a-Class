#include <iostream>
using namespace std;


//30

class MainClass{

int a=0;
int b=0;


public:

friend MainClass FriendFunction( int, int);
void Display() {
    cout << "a = 0 after change " << a << " , b = 0 After Change " << b << endl;

}
};


 MainClass FriendFunction( int x, int y) {

   
  MainClass change;

  
change.a = x;
change.b = y;

    return change;

 }   

 int main() {

    MainClass m1;

    m1 = FriendFunction(5,6);
   
m1.Display();

    return 0;
}
