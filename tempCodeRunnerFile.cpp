//Sum of N natural numbers
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to get sum of N Natural number : ";
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}