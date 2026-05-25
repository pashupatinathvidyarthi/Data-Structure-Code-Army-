#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(char i=1;i<=5;i++)
        {
            char ch='a'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}