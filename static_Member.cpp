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
        counter++;
    }
    void disp()
    {

        cout<<"a="<<a<<" and counter="<<counter<<endl;
    }
};
int A:: counter;
int main()
{
    A obj(10);
    A obj1(20);
    obj.disp();
    obj1.disp();
}
