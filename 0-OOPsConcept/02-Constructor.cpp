#include <iostream>
using namespace std;

class Rectangle
{

public:
    int l;
    int b;

    Rectangle() //Default Constructor
    {
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) //Parameterised Constructors
    {
        l = x;
        b = y;
    }

    Rectangle(Rectangle& r) //Copy Constructor
    // when defining a copy constructor, it's common practice to pass the object by reference rather than by value. 
    // This is done to avoid unnecessary copying of the object, which can be inefficient, especially for large objects.
    {
        l = r.l;
        b = r.b;
    }

    ~Rectangle() //Destructor

    // Objects will be deleted after executing all
    {
        cout<<"Destructor is called "<<endl;
    }
};

int main()
{
    Rectangle* r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(3,5);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}