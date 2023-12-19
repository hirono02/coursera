#pragma once // --> tells the compiler to only compile this class once

class Cube {
    public: 
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    private:
        double length_;
};