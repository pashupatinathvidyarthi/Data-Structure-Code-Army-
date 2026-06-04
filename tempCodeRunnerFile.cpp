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
    avg=sum/10;
    cout<<"Average is : "<<avg;
    return 0;
}