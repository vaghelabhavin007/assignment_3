//2. (Variables, data types and Operators) program : 2- Type conversion
#include <iostream>
using namespace std;


main()
{
    float x = 10.122;
    int y = x;
    cout<<"\n\n\t X implicitly converted to integer : "<<y;
    
    float a = 12.122;
    int b;
    b = (int)a;
    cout<<"\n\n\t A explicitly converted to integer : "<<b;
}
