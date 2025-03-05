//4. (Function and scope) program : 2 - factorial using recursion
#include <iostream>
using namespace std;
int fact(int);
main()
{
    int x;
    cout<<"\n\n\t Enter the number to find factorial : ";
    cin>>x;
    cout<<"\n\n\t Factorial of "<<x<<" = "<<fact(x);
}
int fact(int x)
{
    if (x == 0)
	{
        return 1;
    }
    else 
	{
        return x * fact(x - 1);
    }
}
