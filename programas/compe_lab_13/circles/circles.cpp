#include <iostream>
using namespace std;

// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles
// (spheres in the program) initialized at definition or set by a function.
 
  //class declaration section (header file)
 
  class Circles{
    public:
        void setCenter(int x, int y);
        double findArea();
        double findCircumference();
        void printCircleStats(); // This outputs the radius and center of the circle.
        Circles (float r); // Constructor
        Circles(int x, int y);  // radius constructor
        Circles(); // Default constructor
        ~Circles();
    private:
        float radius;
        int center_x;
        int center_y;
};
 
const double PI = 3.14;
//Client section
int main(){

    // Circles sphere(8);
    Circles sphere1(2);
    Circles sphere2;
    Circles sphere3(15, 16);
    // sphere.setCenter(9,10);
    // sphere.printCircleStats();
    sphere1.printCircleStats();
    cout << "The area of the circle is " << sphere1.findArea() << endl;
    cout << "The circumference of the circle is " << sphere1.findCircumference() << endl;
    cout << endl;
    sphere2.printCircleStats();
    cout << "The area of the circle is " << sphere2.findArea() << endl;
    cout << "The circumference of the circle is " << sphere2.findCircumference() << endl;
    cout << endl;
    sphere3.printCircleStats();
    cout << "The area of the circle is " << sphere3.findArea() << endl;
    cout << "The circumference of the circle is " << sphere3.findCircumference() << endl;
    cout << endl;
    // cout << "The area of the circle is " << sphere.findArea() << endl;
    // cout << "The circumference of the circle is " << sphere.findCircumference() << endl;

  return 0;
}

//Implementation section Member function implementation
 
  Circles::Circles(){
    radius = 1;
    center_x = 0;
    center_y = 0;
}
// Fill in the code to implement the non-default constructor
Circles::Circles(float r){
    radius = r;
    center_x = 0;
    center_y = 0;

}
Circles::Circles(int x, int y){
  radius = 1;
  center_x = x;
  center_y = y;
}

// Fill in the code to implement the findArea member function
double Circles::findArea(){
    return PI * (radius * radius);
}

// Fill in the code to implement the findCircumference member function
double Circles::findCircumference(){
    return 2 * PI * radius;
}
 
void Circles::printCircleStats()
// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
  {
cout << "The radius of the circle is " << radius << endl;
cout << "The center of the circle is (" << center_x << "," << center_y << ")" << endl;
}
// void Circles::setCenter(int x, int y)
// // This procedure will take the coordinates of the center of the circle from
// // the user and place them in the appropriate member data.
//   {
// center_x = x;
// center_y = y;
// }
Circles::~Circles(){
  cout << "This concludes the Circles class." << endl;

}