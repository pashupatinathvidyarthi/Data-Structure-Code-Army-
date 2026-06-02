#include<iostream>
using namespace std;

//Function Definition
void add(int num1,int num2)
{
    int num3=num1+num2;
    cout<<"Sum is :"<<num3;
}

void add(int,int);
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    add(a,b);
    return 0;
}