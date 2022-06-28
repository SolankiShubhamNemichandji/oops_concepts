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
int main()
{
    B obj;
    obj.geta();
    obj.dispa();
    obj.getb();
    obj.dispb();
}
