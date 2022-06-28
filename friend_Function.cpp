#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
    int a;
public:
    A(int x)
    {
        a=x;
    }
    friend void mul(A x,B y);
};

class B
{
    int a;
public:
    B(int x)
    {
        a=x;
    }
    friend void mul(A x,B y);
};


void mul(A x,B y)
{
    cout<<"Multiplication of "<<x.a<<" and "<<y.a<<" = "<<x.a*y.a;
}


int main()
{
    A obj(10);
    B obj1(20);
    mul(obj,obj1);
}
