//3. (Control flow statements) program : 3- Multiplication table
#include <iostream>
using namespace std;

main()
{
    int x;
    cout<<"\n\n\t Enter the number and its multiplication table : ";
    cin>>x;
    for (int i = 1; i <= 10; i++)
	{
        cout<<x<<" * "<<i<<" = "<<x*i;
        cout<<"\n";
    }
}
