#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5-j;i++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=j;col++)
        {
            char name='A'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}