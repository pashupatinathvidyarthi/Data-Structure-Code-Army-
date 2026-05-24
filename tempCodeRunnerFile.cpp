//Print a first N prime number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check if the number is Prime or not : ";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        cout<<"Number is not prime number";
        else
        cout<<"Number is Prime Number";
    }
    return 0;
}