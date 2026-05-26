#include<iostream>
using namespace std;
int main()
{
    char name='a';
    for(char j=1;j<=5;j++)
    {
        for(int i=1;i<=j;i++)
        cout<<name<<" ";
        name++;
        cout<<endl;
    }
    return 0;
}