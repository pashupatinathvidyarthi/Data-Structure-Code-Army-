
//Factorial of a Number
#include<iostream>
using namespace std;
int main()
{
    int num;
cout<<"Enter a number to get it's factorial : ";
cin>>num;
int fact=1;
int i=1;
for(i;i<=num;i++)
fact=fact*i;
cout<<fact;
return 0;
}