#include<iostream>
using namespace std;

class Students{
    public:
    string name;
    Students()
    {
        name = "unknown";
    }
    Students(string n)
    {
        name = n;
    }
    void print()
    {
        cout<< name << endl;
    }
};

int main()
{
    Students student1;
    student1.name = "raushan";
    Students student2;
    student1.print();
    student2.print();

}