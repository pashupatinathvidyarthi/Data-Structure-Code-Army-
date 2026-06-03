#include<iostream>
using namespace std;
void Swap(int &,int &);
void Swap(float &, float &);
int main()
{
    int a=3,b=5;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    float k=3.5,j=56.4;
    Swap(k,j);
    cout<<k<<" "<<j;
    return 0;
}

void Swap(int &m,int &n)
{
    int l;
    l=m;
    m=n;
    n=l;
}

void Swap(float &c,float &d)
{
    int e;
    e=c;
    c=d;
    d=e;
}