#include<iostream>
using namespace std;

class MyClass{
    public:
    int x;
    private:
    int y;
}

 int main()
 {

    MyClass myObj;
    myObj.x = 100;   // allowed to do here
    myObj.y = 129;  // not allowed to do here
    cout<<myObj.x<<endl;
    cout<<myObj.y<<endl;
 }