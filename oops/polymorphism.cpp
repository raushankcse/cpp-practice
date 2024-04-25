#include<iostream>
using namespace std;
class Animal{
    public:
    void animalSound(){
        cout<<"The animal makes sound \n";
    }
};


// Derived class
class Pig: public Animal{
    public: 
    void animalSound()
    {
        cout<<"The pig says: wee wee \n";
    }
};


class Dog: public Animal{
    public:
    void animalSound()
    {
        cout<<"The dog says: bow wow\n";
    }
};


int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myDog.animalSound();
    myPig.animalSound();
}