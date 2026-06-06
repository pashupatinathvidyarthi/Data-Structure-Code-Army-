#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={4,5,6,7,5};
    int arr2[5];
    int j=0;
    for(int i=4;i>=0;i--)
    {
        arr2[j]=arr1[i];
        j++;
    }
    for(int i=0;i<5;i++)
    {
        arr1[i]=arr2[j];
        j++;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i];
    }  
    return 0; 
}