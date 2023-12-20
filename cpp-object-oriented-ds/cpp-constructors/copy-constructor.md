### Custom copy constructor is
- A class constructor
- Has exactly one argument
    - The argument must be const reference of the same type as the class.
- Copy constructors are often invoked automatically:
    - Passing an object as a parameter (by value)
    - Returning an object from a function (by value)
    - Initializing a new object
- Example:
    -`Cube::Cube(const Cube &obj);`
- Copy constructor creates a new object (constructor)


