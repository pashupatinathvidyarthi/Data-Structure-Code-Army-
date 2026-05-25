/*To Print
            a a a a a
            b b b b b
            c c c c c
            d d d d d
            e e e e e
*/
#include<iostream>
using namespace std;
int main()
{
    for(char j='a';j<='d';j++)
    {
        for(char i=1;i<=5;i++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}