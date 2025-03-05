//3. (Control flow statements) program : 4- Nested control structures
#include <iostream>
using namespace std;

main()
{
    int x;
    cout<<"\n\n\t Enter the number of the triangle : ";
    cin>>x;
    for (int i = 0; i <= x; i++)
	{
        for (int j = 0; j < i; j++)
		{
            cout<<"*";
        }
        cout<<"\n";
    }
}
