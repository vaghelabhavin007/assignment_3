//6.(Introduction to object-oriented programming) program : 3- Inheritance Example
#include <iostream>
using namespace std;

class Person 
{
    protected:
    	
        string name;
        int age;
        
        void get_person()
		{
            cout<<"\n\n\t Enter the name : ";
            cin>>name;
            cout<<"\n\n\t Enter the age : ";
            cin>>age;
        }
};

class Teacher : private Person 
{
    string subject;
    string t_name;
    
    public:
        void get_teacher()
		{
			get_person();
            cout<<"\n\n\t Enter the subject : ";
            cin>>subject;
        }
        void print_teacher()
		{
            cout<<"\n\n\t Name : "<<name;
            cout<<"\n\n\t Age : "<<age;
            cout<<"\n\n\t Subject : "<<subject;
        }
};


class Student : private Person
{
    int marks;
    
    public:
        void get_student()
		{
			get_person();
            cout<<"\n\n\t Enter your marks : ";
            cin>>marks;
        }
        void print_student()
		{
            cout<<"\n\n\t Name : "<<name;
            cout<<"\n\n\t Age : "<<age;
            cout<<"\n\n\t Marks : "<<marks;
        }
};


main()
{
    Teacher t;
    Student s;
    t.get_teacher();
    s.get_student();
    
    cout<<"\n\t\t\t Teacher's details";
    t.print_teacher();
    
    cout<<"\n\t\t\t Students's details";
    s.print_student();

}
