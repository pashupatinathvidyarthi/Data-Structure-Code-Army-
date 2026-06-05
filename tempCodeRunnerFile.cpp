#include<iostream>
using namespace std;
void funarr(int [],int);
int main()
{
    int a[10];
    funarr(a,10);
    return 0;
}

void funarr(int b[],int n)
{
    int i;
    cout<<"Enter "<<n<<"numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
}