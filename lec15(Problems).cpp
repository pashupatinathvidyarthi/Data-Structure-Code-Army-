// Convert 'a' to 'A' using Function
#include<iostream>
using namespace std;
char chan(char);
int main()
{
    char ch;
    cout<<"Enter a character to chabge : ";
    cin>>ch;
    cout<<chan(ch);
    return 0;
}

char chan(char a)
{
    a=a-'a'+'A';
    return(a);
}



//Armstrong Number
#include<iostream>
#include<cmath>
using namespace std;
int digi(int);
int arm(int,int);
int main()
{
    int num;
    cout<<"Enter a number to check wheather a number is armstrong or not : ";
    cin>>num;
    int dig=digi(num);
    int num1=arm(num,dig);
    if(num1==num)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
    return 0;
}


int digi(int d)
{
    int count=0;
    while(d>0)
    {
        d=d/10;
        count++;
    }
    return(count);
}


int arm(int e,int g)
{
    int f;
    int ar=0;
    while(e>0)
    {

        f=e%10;
        int power = 1;
        for (int i = 0; i < g; i++)   // integer pow: f^g
            power=power*f;
        ar=ar+power;
        e=e/10;
    }
    return ar;
}



//Find Trailling Zeroes in Factorial
