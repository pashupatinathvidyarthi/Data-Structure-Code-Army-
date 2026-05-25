/*To Print
            1 4 9 16 25
            1 4 9 16 25
            1 4 9 16 25
            1 4 9 16 25
            1 4 9 16 25
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}