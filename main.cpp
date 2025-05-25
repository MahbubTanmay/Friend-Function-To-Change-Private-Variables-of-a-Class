#include <iostream>
using namespace std;


//30

class MainClass{

int a=0;
int b=0;


public:

friend void FriendFunction(MainClass &, int, int);
void Display() {
    cout << "a = 0 after change " << a << " , b = 0 After Change " << b << endl;

}
};


 void FriendFunction( MainClass &change, int x, int y) {

   
 

  
change.a = x;
change.b = y;

    

 }   

 int main() {

    MainClass m1;

    FriendFunction(m1,5,6);
   
m1.Display();

    return 0;
}
