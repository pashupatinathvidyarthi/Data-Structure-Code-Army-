//Array is a linear collection of similar elements.
//Array is also known as subscript variable.  subscript(x1,x2)

//Write a program to calculate the average of 10 numbers
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int sum=0,i;
    float avg;
    cout<<"Enter a 10 number : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10.0;
    cout<<"Average is : "<<avg;
    return 0;
}