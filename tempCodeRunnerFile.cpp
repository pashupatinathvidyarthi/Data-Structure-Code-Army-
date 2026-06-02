#include<iostream>
using namespace std;


//Function Declaration
int add()
{
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
    c=a+b;
    return c;
}

int add();
int main()
{
    int k;
    k=add();
    cout<<"Sum is "<<k;
    return 0;
}