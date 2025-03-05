//5. (Arrays and strings) program : 1 - sum and average of an array
#include <iostream>
using namespace std;
main()
{
    int len;
    cout<<"\n\n\t Enter the length of the array : ";
    cin>>len;

    int arr[len], total = 0;
    for (int i = 0; i < len; i++)
	{
        cout<<"\n\n\t Enter element ["<<i<<"] : ";
        cin>>arr[i];
        total += arr[i];
    }
    cout<<"\n\n\t Sum of the element's of array is : "<<total;
    cout<<"\n\n\t Average of the element's of array is : "<<(total/len);
}
