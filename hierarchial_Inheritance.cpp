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
class C : public A
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
    B obj;
    C obj1;
    obj.geta();
    obj.dispa();
    obj.getb();
    obj.dispb();
    obj1.geta();
    obj1.dispa();
    obj1.getc();
    obj1.dispc();


}
