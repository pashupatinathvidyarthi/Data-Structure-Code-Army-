/*
---------------------------------------
            Function Syntax
---------------------------------------
return_type function_name(parameter1, parameter2, para.....)
{
    {
        code part
    }
    return value;
}

*/





/*
return_types

->int
->float
->bool
->char
->double
->void
*/



//Prime Number Function
#include<iostream>
using namespace std;

bool Prime(int num)
{
    if(num<2)
    return 0;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    
}