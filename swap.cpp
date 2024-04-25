#include<iostream>
using namespace std;
int main()
{
    int x=6;
    int y=7;
    int t;
    cout<<x<<y<<endl;
    t=x;
    x=y;
    y=t;
    cout<<x<<y;
}