// Convert 'a' to 'A' using Function
#include<iostream>
using namespace std;
char chan(char);
int main()
{
    char ch;
    cout<<"Enter a character to chabge : ";
    cin>>ch;
    cout<<chan(ch);
    return 0;
}

char chan(char a)
{
    a=a-'a'+'A';
    return(a);
}



//Armstrong Number
