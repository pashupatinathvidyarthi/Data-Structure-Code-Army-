#include<iostream>
using namespace std;
void nat(int);
int main()
{
    int num;
    cout<<"Enter a number to get first N natural number : ";
    cin>>num;
    nat(num);
    return 0;
}

void nat(int k)
{
    if(k>0)
    {
        nat(k-1);
        cout<<k;
        cout<<" ";
    }
}