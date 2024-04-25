#include<iostream>
using namespace std;
int main()
{
    int x=8,y=7;
    cout<<x<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<y;
}