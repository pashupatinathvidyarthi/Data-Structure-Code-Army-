//Print *****
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        cout<<"*";
    }
    return 0;
}



/*To Print 
           * * * * *
           * * * * *
           * * * * *
           * * * * *
           * * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*To Print 
           10 10 10 10 10
           10 10 10 10 10
           10 10 10 10 10
           10 10 10 10 10
           10 10 10 10 10
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<"10"<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*To print
            1 1 1 1 1
            2 2 2 2 2
            3 3 3 3 3
            4 4 4 4 4
            5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*To print
            1 2 3 4 5
            1 2 3 4 5
            1 2 3 4 5
            1 2 3 4 5
            1 2 3 4 5         
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=5;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}



/*To Print
            5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(int i=5;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}



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


//Another Method to solve above pattern
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
    for(int j=1;j<=5;j++)
    {
        char ch='a'+j-1;
        for(int i=1;i<=5;i++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/*To Print
            a b c d e
            a b c d e
            a b c d e
            a b c d e
            a b c d e
*/
#include<iostream>
using namespace std;
int main()
{
    for(int j=1;j<=5;j++)
    {
        for(char i='a';i<='e';i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}



//Another method to solve above pattern
/*To Print
            a b c d e
            a b c d e
            a b c d e
            a b c d e
            a b c d e
*/
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