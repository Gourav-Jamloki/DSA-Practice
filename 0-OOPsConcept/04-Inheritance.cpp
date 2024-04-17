// Modes of Inheritance

#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class Child1 : public Parent
{
    // x will reamin public
    // y will remain protected
    // z will be inaccessable
};
class Child3 : protected Parent
{
    // x will pe protected
    // y will remain protected
    // z will be inaccessable
};
class Child2 : private Parent
{
    // x will be private
    // y will be private
    // z will be inaccessable
};

int main()
{

    return 0;
}