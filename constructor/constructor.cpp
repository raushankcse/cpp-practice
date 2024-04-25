#include<iostream>
using namespace std;

class addAmount{
    public:
    int amount = 50;
    addAmount(){
        cout<< amount;
    }
    addAmount(int anotherAmount){
        cout<< amount + anotherAmount;
    }
};


int main()
{
    addAmount addBalance(500);


    return 0;
}