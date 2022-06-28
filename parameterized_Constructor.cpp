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
    void disp()
    {
        cout<<"a="<<a;
    }
};

int main()
{
    A obj(10);
    obj.disp();
}
