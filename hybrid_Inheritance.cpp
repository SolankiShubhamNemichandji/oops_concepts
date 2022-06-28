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
class B : public A
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
class D
{
    int d;
public:
    void getd()
    {
        cout<<"enter value of d : ";
        cin>>d;
    }
    void dispd()
    {
        cout<<"d="<<d<<endl;
    }
};
class C : public B,public D
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
int main()
{
    C obj1;
    obj1.geta();
    obj1.dispa();
    obj1.getb();
    obj1.dispb();
    obj1.getc();
    obj1.dispc();
    obj1.getd();
    obj1.dispd();


}
