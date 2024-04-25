// Create a class name print number to print various number of various data types  by creating different function 
// with the same name having a parameter each data type

#include<iostream>

using namespace std;
class printNumber{
    public:

    double printNum(double num)
    {
        return num;
    }
    int printNum(int number)
    {
        return number;
    }
    string printNum(string name)
    {
        return name;
    }
};



int main()
{

    printNumber print;
    cout<<print.printNum(8.8)<<endl;
    cout<<print.printNum(8)<<endl;
    cout<<print.printNum("raushan")<<endl;

    
    return 0;


}