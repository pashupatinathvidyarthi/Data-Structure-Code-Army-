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




//Factorial Function
int fact(int num1)
{
    if(num1==0)
    {
        cout<<"1";
    }

    for(int i=1;i<=num1;i++)
    {
        num1=num1*i;
    }
    return num1;
}




//MySirG (Topic : Function)

/*
->Function is a basic building block of a C++ Program
->Function is a block of code, which has some name for identification
->A c++ program can have any number of functions


functionName()
{
    //Some code.....
    ............
        ............
    ............
        ............
}

-> Function names must be unique in a program.
->Function definition vs Function Call

Function definition

f1()
{
    cout<<"Hello";
    cout<<"I am a function";
}





Function Call

{
    ----------------
        ---------------
    ----------------
        ---------------
    f1();
    ----------------
        ---------------
    ----------------
        ---------------
}

->Function is a way to implement modularization.
->Modularization is splitting up of a bigger task into several smaller sub-taks
to reduce the complexity of a problem.
->You can compile a C file without having main() function 
*/


/*
Functions are of two types:-
1. Predefined Functions
2. User defined Functions
->No Keyword is a Function
*/


/*
Rules of a Function

->You can define function in any order.
->Execution of program always begin from main() function.
->Function executes only when it is called.
->Operating System calls main() function, we do not need to call main() function
*/



/*
-------------------------------------------------            
            Ways to define a Function
-------------------------------------------------
1. Takes Nothing, Return Nothing
2. Take Something, Return Nothing
3. Take Nothing, Return Something
4. Take Something, Return Something

*/
