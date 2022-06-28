#include<bits/stdc++.h>
using namespace std;
class A
{
    int h,m;
public:
    A()
    {
     h=m=0;
    }
    A(int x, int y)
    {
        h=x;
        m=y;
    }
    A add(A y)
    {
        A temp;
        temp.m=m+y.m;
        temp.h=h+y.h+(temp.m/60);
        temp.m=temp.m%60;
        return temp;
    }
    void disp()
    {
        cout<<"h="<<h<<" and m="<<m<<endl;
    }
};

int main()
{
    A obj(2,30);
    A obj1(3,40);
    A obj2;
    obj2=obj.add(obj1);
    obj2.disp();
}
