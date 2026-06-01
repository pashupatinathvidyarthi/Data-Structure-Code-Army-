//To print number from 1 to 10
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=10)
    {
        cout<<i<<" ";
        i++;
    }
    return 0;
}


//To print table of any number
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter a number to get it's table : ";
    cin>>i;
    int j=1;
    while(j<=10)
    {
        cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        j++;
    }
    return 0;
}


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


//do-while loop

//Print number from 1 to 10
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=10);
    return 0;
}



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



// break and continue