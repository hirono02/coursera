### Custom Assignment Operator
- Assignment operator assigns a value to an existing object
    - An assignment operator is always called on an object that has already been constructed
- A custom assignment operator is:
    - Is a public member function of the class
    - Has the function name *operator=*
    - Has a return value of a reference of the class' type
    - Has exactly one argument
        - The argument must be const reference of the class' type
    - Example:
        `Cube& Cube::operator=(const Cube &obj)`