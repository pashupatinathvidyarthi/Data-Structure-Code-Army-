// Search Element

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
            break;
        }
    }
}




//Reverse an Array
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
        cout<<arr1[i]<<" ";
    }  
    return 0; 
}



//Another method to Reverse an Array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int start=0, end=4;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    };
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}




//Second Maximum
#include<iostream>
using namespace std;
int main()
{
    int ans=INT8_MIN;
    int arr[5]={45,6,7,23,56};

    //Largest element
    for(int i=0;i<5;i++)
    {
        if(ans<arr[i])
        ans=arr[i];
    }

    int second=INT8_MIN;

    for(int i=0;i<5;i++)
    {
        if(arr[i]!=ans)
        second=max(second,arr[i]);
    }
    cout<<"Second largest element is "<<second;

    return 0;
}



//Missing Number
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,4,5};
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+arr[i];

    int ans=5*(5+1)/2;
    
    cout<<"Missing Number : "<<ans-sum;
    return 0;
}




//Fibonacci Series
