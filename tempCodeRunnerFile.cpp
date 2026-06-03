#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter two number to swap : ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}

void swap(int &m,int &n)
{
    int l;
    l=m;
    m=n;
    n=l;
}