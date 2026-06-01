//To Print Sum of first N natural number
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int num=5;
    int sum=0;
    do{
        sum=i+sum;
        i++;
    }while(i<=num);
    cout<<sum;
    return 0;
}