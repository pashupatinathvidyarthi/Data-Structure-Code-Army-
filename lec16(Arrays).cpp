//Array is a linear collection of similar elements.
//Array is also known as subscript variable.  subscript(x1,x2)

//Write a program to calculate the average of 100 numbers
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int sum=0,i;
    float avg;
    cout<<"Enter a 100 number : ";
    for(i=0;i<100;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<100;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/100;
    cout<<"Average is : "<<avg;
    return 0;
}