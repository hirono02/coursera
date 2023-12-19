#pragma once

namespace uiuc  // -> Adding the namespace to the class
{
    class Cube
    {
    public:
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);

    private:
        double length_;
    };
}