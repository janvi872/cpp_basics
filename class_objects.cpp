// Class:- A class has its own attributes, objects, and methods.A Class is a user-defined data type that has data members and member functions. Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.
// Objects:- An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
// A class with no properties is known as empty class. And if its object is created it will give 1 byte size to the object.
#include <iostream>
using namespace std;
class Janvi
{
    /* Access modifiers: used to access the data member and member functions. These modifiers control the level of access that a certain part of your program has to the members of a class.
    1. Public:
        *Members declared as public are accessible from any part of the program.
    2. Private: By default a class is on private mode.
        *Members declared as private are only accessible within the class.
        *They cannot be accessed by objects of the class or functions outside the class.
    3. Protected:
        *Members declared as protected are accessible within the class and its derived classes.
        *They cannot be accessed by objects of the class or functions outside the class hierarchy.*/
public:
    int age;
    char section;
    char grade;
};

int main()
{
    Janvi Age;
    Age.age = 21;
    cout << "size of age: " << sizeof(Janvi);
    // cout << "Age of janvi : " << Age.age;
    return 0;
}