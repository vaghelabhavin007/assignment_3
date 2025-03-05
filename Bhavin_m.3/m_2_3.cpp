//2. (Variables, Data types and Operators) program : 3- Operator demonstration
#include <iostream>
using namespace std;

main()
{
    int a = 10, b = 2;

    
    cout<<"\n\n\t--------------- Arethmetic Operators ---------------";
    
    cout<<"\n\n\t a + b = "<<a+b;
    cout<<"\n\n\t a - b = "<<a-b;
    cout<<"\n\n\t a x b = "<<a*b;
    cout<<"\n\n\t a / b = "<<a/b;
    
    cout<<"\n\n\t--------------- Relational Operators ---------------";
    
    cout<<"\n\n\t a < b = "<< (a < b);
    cout<<"\n\n\t a <= b = "<< (a <= b);
    cout<<"\n\n\t a > b = "<< (a > b);
    cout<<"\n\n\t a >= b = "<< (a >= b);
    cout<<"\n\n\t a == b = "<< (a == b);
    cout<<"\n\n\t a != b = "<< (a != b);
    
    cout<<"\n\n\t--------------- Logical Operators ---------------";
    
    cout<<"\n\n\t a && b"<<(a && b);
    cout<<"\n\n\t a || b"<<(a || b);
    cout<<"\n\n\t !a = "<<(!a);
}
