//Print numbers from 100 to 200
#include<iostream>
using namespace std;
int main()
{
    for(int i=100;i<=200;i++)
    {
        cout<<i<<"\n";
    }
    return 0;
}


//Print character from a to z
#include<iostream>
using namespace std;
int main()
{
    for(char c='a';c<='z';c++)
    {
        cout<<c<<"\n";
    }
    return 0;
}



//Print number from 100 to 1 (i.e in reverse order)
#include<iostream>
using namespace std;
int main()
{
    for(int i=100;i>=1;i--)
    {
        cout<<i<<"\n";
    }
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
    {
        cout<<num<<"x"<<i<<"="<<num*i<<"\n";
    }
    return 0;
}


//Print of any number to any power
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter to get it's power : ";
    cin>>num;
    int pow;
    cout<<"Enter a power you want : ";
    cin>>pow;
    int n;
    n=num;
    for(int i=1;i<pow;i++)
    {
        num=num*n;
    }
    cout<<num;
    return 0;
}


//Sum of N natural numbers
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to get sum of N Natural number : ";
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}


//Factorial of a Number
#include<iostream>
using namespace std;
int main()
{
    int num;
cout<<"Enter a number to get it's factorial : ";
cin>>num;
int fact=1;
for(int i=1;i<=num;i++)
{
    fact=fact*i;
}
cout<<fact;
return 0;
}


//Print a first N prime number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check wheather it is Prime or not : ";
    cin>>num;
    if(num<2)
    {
        cout<<"Not Prime";
        return 0;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<"Not Prime";
                return 0;
            }
        }
        cout<<"Prime";
        return 0;
    }
    return 0;
}



//Print Fibonaaci Series
#include<iostream>
using namespace std;
int main()
{
    int num=3;
    int num1=0;
    for(num;num<=0;num--)
    {
        num1=num+num1;
    }
    cout<<num1;
    return 0;
}