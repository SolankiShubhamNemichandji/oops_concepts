#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    int l,b;
public:
    void setl()
    {
        cout<<"enter value of l: ";
        cin>>l;
    }
    void setb()
    {
        cout<<"enter value of b: ";
        cin>>b;
    }
    int getl()
    {
        return l;
    }
    int getb()
    {
        return b;
    }
    void area()
    {
        cout<<"area of rectangle="<<l*b;
    }

};
int main()
{
    Rectangle r;
    r.setl();
    r.setb();
    r.area();
}
