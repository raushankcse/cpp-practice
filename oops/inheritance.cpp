#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "Ford";
    void honk()
    {
        cout<<"Tuut, tuut! \n";
    }
};


// Derived class

class car: public vehicle
{
    public:
    string model = "Mustang";
    
};


int main(){
    car myCar;
    myCar.honk();
    cout<<myCar.brand + " " + myCar.model;

    return 0;
}