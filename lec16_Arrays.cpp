//Array is a linear collection of similar elements.
//Array is also known as subscript variable.  subscript(x1,x2)

//Write a program to calculate the average of 10 numbers
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int sum=0,i;
    float avg;
    cout<<"Enter a 10 number : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10.0;
    cout<<"Average is : "<<avg;
    return 0;
}


// int a[]; Error can't be empty

// int a[5]; -> Natural numbers  -> Toatl number of variables in array -> Not an index


int a[5]={1,2,3,4,5}; // we can initialize array during declaration

//You can initialize an array during declaration with lesser values than the size of an array
//And remaining variables in array will contain 0 and not garbage value.

//During declaration you can leave [] empty only when you initialize array at the same time.



//Sorting
/*
-> Arranging elements in some logical order is known as sorting.

-> By default for numbers sorting means arranging elements in ascending order.

*/




//Function Call by Passing an Array
#include<iostream>
using namespace std;
void funarr(int [],int);
int main()
{
    int a[10];
    funarr(a,10);
    return 0;
}

void funarr(int b[],int n)
{
    int i;
    cout<<"Enter "<<n<<"numbers : ";

    for(i=0;i<n;i++)
    cin>>b[i];

    for(i=0;i<n;i++)
    cout<<b[i];
}





//Two Dimensional Arrys
int a[6]; //One dimensional array

int b[2][3]; //Two dimensional array




//Find size of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={34,5,6,7,88,8};
    cout<<"Size of an array "<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}

//Find minimum value in an Array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,674,34,34,2};
    int ans=INT_Max;
    for(int i=0;i<5;i++)
    {
        if(ans>arr[i])
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}




//Find maximum value in an Array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,674,34,34,2};
    int ans=INT_Min;
    for(int i=0;i<5;i++)
    {
        if(ans<arr[i])
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}

