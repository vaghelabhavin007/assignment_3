//1. (Introduction to C++) program : 3 - Area of rectangle using OOP concepts
#include <iostream>
using namespace std;
class rectangle
{
    int l, b;
    
    public:
        
        void get_area()
		{
            cout<<"\n\n\t Enter the length of rectangle : ";
            cin>>l;
            cout<<"\n\n\t Enter the breath of rectangle : ";
            cin>>b;
        }
        
        void print_area()		
		{
            cout<<"\n\n\t Area of the rectangle is "<<l*b;
        }

};

main()
{
    rectangle r;
    r.get_area();
    r.print_area();
}