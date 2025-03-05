//4. (Function and Scope) program : 3- Variable scope
#include <iostream>
using namespace std;

int x = 50; //Global variable

main()
{
    int y = 10; //local variable 
    cout<<"\n\n\t Value of Global Variable outside main : "<<x;
    
    x = 100;
    cout<<"\n\n\t Value of Global Variable inside main : "<<x;
    cout<<"\n\n\t Value of Local Variable : "<<y; 
}
