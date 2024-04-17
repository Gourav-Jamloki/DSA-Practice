#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};

class Child1 : public Parent{
    public:
    Child1()
    {
        cout<<"Child1 Class"<<endl;
    }
};
class Child2 : public Parent{
    public:
    Child2()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    cout<<"Creating Child1 Object"<<endl;
    Child1 obj;
    cout<<"Creating Child2 Object"<<endl;
    Child2 obj2;
    return 0;
}