// copy constructor
#include<iostream>
using namespace std;

class Bank{
    public:
    int price = 20;
    Bank(int balance)
    {
        price = balance;
    }
    Bank(Bank &i)
    {
        cout<<i.price;  //print the balance
    }
};
int main()
{
    int balance = 60;
    Bank addBalance(balance);
    Bank addBalance2(addBalance);
}