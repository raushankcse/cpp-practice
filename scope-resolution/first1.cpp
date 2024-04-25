#include<iostream>
using namespace std;

int num=50;

int main()
{
    int num =100;
    cout<<"the value of local variable "<<num<<endl;

    cout<<"the value of global variable "<<::num<<endl;

    return 0;

}