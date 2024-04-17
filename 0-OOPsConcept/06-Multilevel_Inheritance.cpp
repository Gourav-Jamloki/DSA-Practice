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

class Child2 : public Child1{
    public:
    Child2()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child2 obj;
    return 0;
}