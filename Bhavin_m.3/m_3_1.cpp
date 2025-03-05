//3. (Control flow statements) program : 1- Grade calculator
#include <iostream>
using namespace std;

main()
{
    int marks;
    cout<<"\n\n\t Enter the mark=";
    cin>>marks;
    
    if (marks >= 85)
	{
        cout<<"Grade : A+";
    }
    else if (marks >= 75)
	{
        cout<<"Grade : A";
    }
    else if (marks >= 65)
	{
        cout<<"Grade : B+";
    }
    else if (marks >= 55)
	{
        cout<<"Grade : B";
    }
    else if (marks >= 45)
	{
        cout<<"Grade : C+";
    }
    else if (marks >= 35)
	{
        cout<<"Grade : C";
    }
    else 
	{
        cout<<"Fail";
    }
}
