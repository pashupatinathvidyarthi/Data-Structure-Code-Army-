/*
---------------------------------
            Basics of C++
---------------------------------
*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello World!";
    return 0;
}

// "<<" This is known as Insertion Operator

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello";
    cout<<endl<<"Pashupati Nath";
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello";
    cout<<"\nPashupati Nath";
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    cout<<2+3;
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<a;
    return 0;
}


/*
--------------------------------------------
            Variables and DataTypes
--------------------------------------------
*/


/*
------------------------------
            DataTypes
------------------------------
int==interger i.e 1,2,3,4,5....     Size=4 bytes
float i.e 2.3,4.56,.....    Size=4bytes
double        Size=8 bytes
char          Size=1byte
string        Size=1byte
bool          Size=1byte
*/


#include<iostream>
using namespace std;
int main()
{
    float a=4.5;
    cout<<sizeof(a);
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    bool b=true;  //t or f is start from small letter
    cout<<b; 
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    //Variable Declare
    int a=10,b=20,c=30,d,e=11;
    cout<<a+c;
    return 0;
}