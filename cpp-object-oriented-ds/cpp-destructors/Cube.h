#pragma once

namespace uiuc
{
    class Cube
    {
    public:
        // Constructors
        Cube();
        Cube(double length);
        Cube(const Cube &obj);
        // Destructor
        ~Cube();
        // Assignment Operator
        Cube &operator=(const Cube &obj);
        // Functions
        double getVolume() const;
        double getSurfaceArea() const;
        void setLength(double length);
    private:
        double length_;
    };
}