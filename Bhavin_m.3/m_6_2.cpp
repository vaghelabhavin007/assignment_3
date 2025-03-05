//6. (Introduction to Object-oriented Programming) program : 2- Class for Bank Account
#include <iostream>
using namespace std;
class Bank
{
    int acc_no;
    string name;
    int balance;
    
    public:
        void get_details()
		{
            cout<<"\n\n\t Enter the account number : ";
            cin>>acc_no;
            cout<<"\n\n\t Enter the account holder's name : ";
            cin>>name;
            cout<<"\n\n\t Enter the account's balance : ";
            cin>>balance;
        }
        void deposite()
		{
            int temp;
            cout<<"\n\n\t Enter amount to deposite : ";
            cin>>temp;
            balance += temp;
            cout<<"\n\n\t New balance : "<<balance;
        }
        void withdraw()
		{
            int temp;
            cout<<"\n\n\t Enter the amount you want to withdraw : ";
            cin>>temp;
            if (temp > balance)
			{
                cout<<"\n\n\t Insufficient balance";
            }
            else 
			{
                balance -= temp;
            }
            cout<<"\n\n\t New balance : "<<balance;
        }
};


main()
{
    Bank b;
    b.get_details();
    b.deposite();
    b.withdraw();
}
