#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter a number : ";
    cin>>i;

    switch(i)
    {
        case 1:
        cout<<"Rohit";
        break;

        case 2:
        cout<<"Mohit";
        break;

        default:
        cout<<"Sohit";
    }
    return 0;
}