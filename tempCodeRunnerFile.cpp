#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"Enter a number to get it's factorial : ";
    cin>>n;
    int l;
    l=fact(n);
    cout<<"Factorial is "<<l;
    return 0;
}

int fact(int k)
{
    if(k==0)
    return 1;

    return(k*fact(k-1)); 
}