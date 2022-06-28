#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"constructor called"<<endl;
    }
    ~A()
    {
        cout<<"destructor called";
    }
};
int main()
{
    A obj;
}
