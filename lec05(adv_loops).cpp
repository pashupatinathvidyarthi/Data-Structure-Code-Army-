//Print numbers from 100 to 200
#include<iostream>
using namespace std;
int main()
{
    for(int i=100;i<=200;i++)
    cout<<i<<"\n";
    return 0;
}


//Print character from a to z
#include<iostream>
using namespace std;
int main()
{
    for(char c='a';c<='z';c++)
    cout<<c<<"\n";
    return 0;
}



//Print number from 100 to 1 (i.e in reverse order)
#include<iostream>
using namespace std;
int main()
{
    for(int i=100;i>=1;i--)
    cout<<i<<"\n";
    return 0;
}


//Print table of any number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to get it's table : ";
    cin>>num;
    for(int i=1;i<=10;i++)
    cout<<num<<"x"<<i<<"="<<num*i<<"\n";
    return 0;
}