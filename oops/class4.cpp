#include<iostream>
using namespace std;

class MyClass{
    public:
    void myMethod();
};


void MyClass::myMethod()
{
    cout<<"printing...";
}

int main()
{
    MyClass myObj;
    myObj.myMethod();

}