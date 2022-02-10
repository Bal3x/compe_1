#include "Rectangle.h"

void Rectangle::setLength(float side_1){
    length = side_1;
}
void Rectangle::setWidth(float side_w){
    width = side_w;
}
float Rectangle::getLength(){
    return length;
}
float Rectangle::getWidth(){
    return width;
}
double Rectangle::findArea(){
    return length * width;
}
double Rectangle::findPerimeter(){
    return ((2 * length) + (2 * width));
}