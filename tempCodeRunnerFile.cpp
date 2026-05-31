//To Print factors of any number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to get it's factors : ";
    cin>>num;
    int fact=num;
    while(fact<=num)
    {
        if(num%fact==0)
        {
            cout<<fact<<" ";
        }
        fact--;
    }
    return 0;
}