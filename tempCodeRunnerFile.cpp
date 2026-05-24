#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter to get it's power : ";
    cin>>num;
    int pow;
    cout<<"Enter a power you want : ";
    cin>>pow;
    int n;
    n=num;
    for(int i=1;i<pow;i++)
    {
        num=num*n;
    }
    cout<<num;
    return 0;
}