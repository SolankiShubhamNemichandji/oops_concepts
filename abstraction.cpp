#include<bits/stdc++.h>
using namespace std;
class Shape
{
public:
    virtual void area()=0;
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout<<"area of traingle"<<endl;
    }
};
class Circle : public Shape
{
public:
    void area()
    {
        cout<<"area of circle"<<endl;
    }
};

int main()
{
    Shape *ptr;
    Triangle t;
    Circle c;
    ptr=&t;
    ptr->area();
    ptr=&c;
    ptr->area();
}
