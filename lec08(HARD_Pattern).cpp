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
        for(int i=1;i<=5-j;i++)
        {
            cout<<"  ";        
        }
        for(int i=1;i<=j;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}




/*To Print
                        a
                      a b
                    a b c
                  a b c d
                a b c d e
*/
#include<iostream>
using namespace std;
int main()
{
    
}