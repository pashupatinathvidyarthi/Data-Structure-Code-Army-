//To convert decimal to binary
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a decimal number to get it's binary : ";
    cin>>num;
    int number=num;
    int rem;
    int ans=0;
    int mul=1;
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<"Binary of "<<number<<" is : "<<ans;
    return 0;
}