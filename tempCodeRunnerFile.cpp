#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=j;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}