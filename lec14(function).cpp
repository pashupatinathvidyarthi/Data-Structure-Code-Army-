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



// TNRN
#include<iostream>
using namespace std;

//Function Definition
void add()
{
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c;
}

void add(); //Function Declaration
int main()
{
    add();
    return 0;
}






//TSRN
#include<iostream>
using namespace std;

//Function Definition
void add(int num1,int num2)
{
    int num3=num1+num2;
    cout<<"Sum is :"<<num3;
}

void add(int,int); //Function Declaration
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    add(a,b); //Function Call
    return 0;
}







//TNRS
#include<iostream>
using namespace std;
int add1();
int main()
{
    int k;
    k=add1();
    cout<<"Sum is "<<k;
    return 0;
}

//Function Declaration
int add1()
{
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
    c=a+b;
    return c;  //We can return only single value
}







//TSRS
#include<iostream>
using namespace std;
int add2(int,int);
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    int c;
    c=add2(a,b);  //Function call by passing value or Call by Value
    cout<<"Sum is "<<c;
    return 0;
}


int add2(int m,int n)
{
    int k=m+n;
    return k;
}






/*
-------------------------------
            Recursion
-------------------------------
->Function calling itself is called recursion.
->A recursion method solves a problem by calling a copy of itself to work on a smaller problem
->It is important to ensure that the recursion terminates.
*/


//Back-tracking is done in recurson

#include<iostream>
using namespace std;
void f1();
int main()
{
    f1();
    return 0;
}

void f1()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a>0)
        f1();
    cout<<a;
}


//How to approach a recurssive problems ??

//Write a recursive function to calculate sum of first n natural number.
        /*
        Step01: int sum(int n)
                  {

                  }
                
                sum(n) 1+2+3+4+......+(n-1)+n 
        
        
        Step02: n+sum(n-1) 1+2+3+4+......+(n-1)

        Step03: 
        */