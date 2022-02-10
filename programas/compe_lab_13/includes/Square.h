#include <iostream>
using namespace std;

class Square{
    public: 
        void setSide(float length);
        float findArea();
        float findPerimeter();
        Square();
        ~Square();
    private:
        float side;

};