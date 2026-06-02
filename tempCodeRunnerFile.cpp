//TSRS
#include<iostream>
using namespace std;
int add(int,int);
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    int c;
    c=add(a,b);
    cout<<"Sum is "<<c;
    return 0;
}


int add(int m,int n)
{
    int k=m+n;
    return k;
}