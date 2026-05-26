/* To Print Pattern

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
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
        for(int i=1;i<=2*j-1;i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5-j;i++)
        {
            cout<<"  ";
        }
        for(i=1;i<=j;i++)
        {
            cout<<i<<" ";
        }
        for(i=j-1;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}