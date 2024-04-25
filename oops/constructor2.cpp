#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;

    car(string x,string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    car myObj1("BMW","X5",1998);
    car myObj2("AUDI", "Mostang",1993);

    cout<<myObj1.brand<<" "<< myObj1.model<<" " <<myObj1.year<<endl;
    cout<<myObj2.brand<<" "<<myObj2.model<<" "<<myObj2.year;

}