#include <iostream>
using namespace std;


// Class Declaration

class Fruit{ //Class Name

public: //Access Specifier

    // Data Members
    string name;
    string color;

};

int main()
{
    Fruit apple; // Object

    apple.name = "Apple";
    apple.color = "Red";

    // Another way to initialise Object

    /*  The new keyword allocates memory for a Fruit object on the heap and returns the memory address 
    //  of this newly allocated object. This memory address is then assigned to the pointer variable mango.
    //  As a result, mango now holds the memory address of the dynamically allocated Fruit object, allowing
    //  you to access and manipulate it through the pointer.*/

    Fruit *mango = new Fruit();

    // when you use the new keyword to dynamically allocate memory for an object, the constructor 
    // of that object's class is called to initialize the newly allocated memory. This ensures that 
    // the object is properly initialized before you start using it.

    mango->name = "Mango";
    mango->color = "Yellow";

    cout<<mango->name<<" - "<<mango->color<<endl;
    return 0;
}