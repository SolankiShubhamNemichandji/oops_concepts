#include<bits/stdc++.h>
using namespace std;
class A
{
public:

    void area(int r)
    {
        cout<<"area of circle="<<(3.14*r*r)<<endl;
    }
    void area(int l,int b)
    {
        cout<<"area of rectangle="<<(l*b)<<endl;
    }

};
int main()
{
    A obj;
    obj.area(4);
    obj.area(2,4);
}
