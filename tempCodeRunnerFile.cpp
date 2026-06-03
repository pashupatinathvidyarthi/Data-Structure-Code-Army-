#include<iostream>
using namespace std;

void f1()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a>0)
        f1();
    cout<<a;
}

void f1();
int main()
{
    f1();
    return 0;
}