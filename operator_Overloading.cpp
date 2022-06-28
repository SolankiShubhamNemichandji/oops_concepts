#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
public:
    A(int x)
    {
        a=x;
    }
    void operator +()
    {
        a=a+1;
    }
    void disp()
    {
        cout<<"a="<<a<<endl;
    }
};

int main()
{
    A obj(20);
    obj.disp();
    +obj;
    obj.disp();
}
