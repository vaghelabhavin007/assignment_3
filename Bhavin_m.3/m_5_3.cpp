//5. (Arrays and strings) program : 3 - string palindrome check
#include <iostream>
using namespace std;

main()
{
    string s, r;
    cout<<"\n\n\t enter the string num= ";
    cin>>s;
    
    int len = s.length()-1;
    for (int i = 0; i <= len; i++)
	
	{
         r+= s[len - i];
    }
    if (s == r)
	{
        cout<<"\n\n\t The string is a palindrome";
    }
    else {
        cout<<"\n\n\t The string is not a palindrome";
    }
}
