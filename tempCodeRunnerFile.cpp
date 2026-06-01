//To convert decimal to binary
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num=13;
    int rem;
    int ans=0;
    int mul=1;
    while(num>=0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans;
    return 0;
}