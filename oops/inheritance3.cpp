#include<iostream>
using namespace std;

class MyClass{
    public:
    void myFunction(){
        cout<<"Some content in parent class";
    }
};


class MyOtherClass{
    public:
    void myOtherFunction()
    {
        cout<<"Some content in another class.";
    }
};


// Derived class
class myChildClass: public MyClass, public MyOtherClass{

};


int main()
{
    myChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}