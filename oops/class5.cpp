#include<iostream>
using namespace std;
 

class car{
    public:  
    int speed(int maxSpeed);
};

int car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    car myObj1;
    cout<<myObj1.speed(200);
    return 0;

}