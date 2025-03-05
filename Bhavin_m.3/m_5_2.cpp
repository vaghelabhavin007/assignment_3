//5.(Arrays and strings) program : 2 - matrix addition
#include <iostream>
using namespace std;
main()
{
    int arr1[2][2], arr2[2][2];

    cout<<"\n\n\t--------------- Array1 ---------------";
    for (int i = 0; i < 2; i++)
	{
        for (int j = 0; j < 2; j++)
		{
            cout<<"\n\n\t Enter element ["<<i<<"]["<<j<<"] : ";
            cin>>arr1[i][j];
        }
    }
    
    cout<<"\n\n\t--------------- Array2 ---------------";
    for (int i = 0; i < 2; i++)
	{
        for (int j = 0; j < 2; j++)
		{
            cout<<"\n\n\t Enter element ["<<i<<"]["<<j<<"] : ";
            cin>>arr2[i][j];
        }
    }

    cout<<"\n\n\t--------------- Sum of Array ---------------\n";
    for (int i = 0; i < 2; i++)
	{
        for (int j = 0; j < 2; j++)
		{
            cout<<" "<<arr1[i][j]+arr2[i][j];
        }
        cout<<"\n";
    }
}
