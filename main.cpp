#include <iostream>
using namespace std;


//30




class My{

int a=99, b=99;

public:

friend My FriendFunction(int, int);


void Display() {

    

    cout << "The Numbers Updated By Friend Functions are "<< a << " , " << b << endl;
}

};

My FriendFunction(int x, int y) {
     My Update;
    Update.a = x;
   Update.b = y;

   return Update;
    
}
 int main() {

My m;
m = FriendFunction(30, 40); 
m.Display();

    return 0;
}
