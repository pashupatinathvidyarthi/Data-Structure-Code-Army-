#include<iostream>
using namespace std;
int main()
{
    int ans=INT8_MIN;
    int arr[5]={45,6,7,23,56};

    //Largest element
    for(int i=0;i<5;i++)
    {
        if(ans<arr[i])
        ans=arr[i];
    }

    int second=INT8_MIN;

    for(int i=0;i<5;i++)
    {
        if(arr[i]!=ans)
        second=max(second,arr[i]);
    }
    cout<<"Second largest element is "<<second;

    return 0;
}