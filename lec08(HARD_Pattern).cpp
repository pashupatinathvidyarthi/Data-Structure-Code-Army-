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
        //To print space
        for(int i=1;i<=5-j;i++)
        {
            cout<<" ";
        }
        //To print *
        for(int col=1;col<=j;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}