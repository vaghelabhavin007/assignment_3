//2.(Variables, Data types and Operators) program : 1- Variables and constants
#include <iostream>
using namespace std;

main()
{
    int r; 
    const float pi = 3.14;
    
    cout<<"\n\n\t Enter the radius of the circle : ";
    cin>>r;
    
    cout<<"\n\n\t Perimeter of the circle is : "<<(2*r*pi);
    cout<<"\n\n\t Area of the circle is : "<<(pi*r*r);
}
