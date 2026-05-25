/*To Print
            *
            * *
            * * *
            * * * *
            * * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=j;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}



/*To Print
            1
            1 2
            1 2 3
            1 2 3 4
            1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=j;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}