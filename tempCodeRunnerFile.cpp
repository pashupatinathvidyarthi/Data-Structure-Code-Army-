#include<iostream>
using namespace std;

bool Prime(int num)
{
    if(num<2)
    return 0;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}



int main()
{
    int num;
    cout<<"Enter a number to check it is prime or not : ";
    cin>>num;
    return(num);
}