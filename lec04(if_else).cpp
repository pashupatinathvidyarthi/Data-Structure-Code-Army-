/*
---------------------------------
            if-else
---------------------------------
*/

#include<iostream>
using namespace std;
int main()
{
    char in;
    cout<<"Enter a character to check wheather it is vowel or not :";
    cin>>in;
    if(in=='a' || in=='e' || in=='i' || in=='o' || in=='u')
    cout<<"Your input "<<in<<" charaacter is vowel";
    else
    cout<<"Your input "<<in<<" character is not vowel";
    return 0;
}

/*
-------------------------------
            Loop
-------------------------------
*/

//Print Hello 10 times
#include<iostream>
using namespace std;
int main()
{
    int count=10;
    for(int i=1; i<=count; i++)
    {
        cout<<"Hello\n";
    }
    return 0;
}


//Print first n natural number
#include<iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Enter number of \"N\" natural number printing :";
    cin>>count;
    int i;
    for(i=1;i<=count;i++)
    cout<<i<<"\n";
    return 0;
}