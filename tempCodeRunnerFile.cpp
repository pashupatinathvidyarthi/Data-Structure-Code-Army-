#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,674,34,34,2};
    int ans;
    for(int i=0;i<5;i++)
    {
        if(ans>arr[i])
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}