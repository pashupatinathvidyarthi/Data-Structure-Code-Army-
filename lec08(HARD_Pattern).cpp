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



/*To Print
                        1
                      2 2
                    3 3 3
                  4 4 4 4
                5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5-j;i++)
        {
            cout<<" ";
        }
        for(int col=1;col<=j;col++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}