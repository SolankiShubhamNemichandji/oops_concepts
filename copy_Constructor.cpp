#include<bits/stdc++.h>
using namespace std;

class A
{
    int a,b;
public:

    A()
    {
        a=b=0;
    }
    A(A &x)
    {
        a=x.a;
        b=x.b;
    }

    void disp()
    {
        cout<<"a="<<a<<"\t b="<<b;
    }
};
int main()
{
    A obj;
    A obj1(obj);
    obj1.disp();
}
