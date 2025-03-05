//6. (Introduction to OOP) program : 1- calculator using OOP
#include <iostream>
using namespace std;

class calculator 
{
    float a, b;
    public:
        void get_num()
		{
            cout<<"\n\n\t the first number = ";
            cin>>a;
            cout<<"\n\n\t the second number = ";
            cin>>b;
        }
        int add(int x, int y)
		{
            return x+y;
        }
        int sub(int x, int y)
		{
            return x-y;
        }
        int multiply(int x, int y)
		{
            return x*y;
        }
        float divide(float x, float y)
		{
            return (float)x/y;
        }
        
        void print_num()
        {
        	cout<<"\n\n\t addition= "<<a+b;
        	cout<<"\n\n\t subtraction= "<<a-b;
        	cout<<"\n\n\t multiplication= "<<a*b;
        	cout<<"\n\n\t division= "<<a/b;
		}
};

main()
{
    calculator c;
    c.get_num();
    c.print_num();
}
