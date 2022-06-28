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
    A(int x)
    {
        a=b=x;
    }
    A(int x,float y)
    {
        a=x;
        b=y;
    }

    void disp()
    {
        cout<<"a="<<a<<"\t b="<<b<<endl;
    }
};

int main()
{
    A obj;
    A obj1(10);
    A obj2(10,20.11);
    obj.disp();
    obj1.disp();
    obj2.disp();

}
