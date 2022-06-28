#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
public:
    void geta()
    {
        cout<<"enter value of a : ";
        cin>>a;
    }
    void dispa()
    {
        cout<<"a="<<a<<endl;
    }
};
class C
{
    int c;
public:
    void getc()
    {
        cout<<"enter value of c : ";
        cin>>c;
    }
    void dispc()
    {
        cout<<"c="<<c<<endl;
    }
};

class B : public A,public C
{
    int b;
public:

    void getb()
    {
        cout<<"enter value of b : ";
        cin>>b;
    }
    void dispb()
    {
      cout<<"b="<<b<<endl;
    }
};
int main()
{
    B obj;
    obj.geta();
    obj.dispa();
    obj.getb();
    obj.dispb();
    obj.getc();
    obj.dispc();
}

