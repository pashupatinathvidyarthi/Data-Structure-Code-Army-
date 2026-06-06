#include<iostream>
using namespace std;
int main()
{
    int arr[5]={56,78,32,45,67};
    int num,a;
    cout<<"Enter a elemrnt to be search in an array : ";
    cin>>num;
    for(int i=0;i<arr[i];i++)
    {
        if(num==arr[i])
        {
            cout<<"Yes Present";
            return 1;
        }
    }
}