#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,4,5};
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+arr[i];

    int ans=5*(5+1)/2;
    
    cout<<"Missing Number : "<<ans-sum;
    return 0;
}