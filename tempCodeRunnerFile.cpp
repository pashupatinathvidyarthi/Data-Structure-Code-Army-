#include<iostream>
using namespace std;
int main()
{
    int count=1;
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}