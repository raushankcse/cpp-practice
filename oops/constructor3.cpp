#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y, int z);
};

car::car(string x, string y, int z )
{
    brand = x;
    model = y;
    year = z;
}


int main()
{
    car carObj1("BMW", "X5", 1991);
    car carObj2("FORD","Mustang", 1998);

    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
    cout<<carObj2.brand<<" "<<carObj2.model<< " "<< carObj2.year<<endl;
    return 0;
}