#pragma once

namespace uiuc
{
    class Cube
    {
    public:
        Cube(); // Custom Default Constructor
        Cube(double length);    // One argument constructor
        Cube(const Cube &obj);  // Copy Constructor
        Cube& operator=(const Cube &obj);   // Assignment Operator
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);

    private:
        double length_;
    };
}