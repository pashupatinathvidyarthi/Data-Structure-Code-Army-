#include<iostream>
using namespace std;

int main()
{
    for(int j=1; j<=5; j++)
    {
        // Space printing
        for(int i=1; i<=5-j; i++)
        {
            cout<<"  ";
        }

        // Number printing
        for(int col=j; col>=1; col--)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

    return 0;
}