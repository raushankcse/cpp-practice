// create class of bank account

#include<iostream>
using namespace std;

class BankAccount{
    public:
    string name_of_depositor;
    int acc_no;
    string type_of_acc;
    private:
    int balance;

    public:
    function balanceCheck()
    {
        cout<<balance;
    }


};


int main()
{
    BankAccount* SBI = new BankAccount;
    SBI->name_of_depositor = "Ankit";
    SBI->acc_no = 123;
    SBI->type_of_acc = "savings";
    SBI->balance = 7000;

    cout<<SBI->name_of_depositor;
    SBI->balanceCheck();

}