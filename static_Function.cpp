#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
    static int counter;
public:
    A(int x)
    {
        a=x;
    }
    static void incrementer()
    {
        counter++;
    }

    void disp()
    {
        cout<<"a="<<a<<" counter="<<counter<<endl;
    }
};

int A::counter;
int main()
{
    A obj(10);
    obj.incrementer();
    A obj1(20);
    obj1.incrementer();
    obj.disp();
    obj1.disp();
}
