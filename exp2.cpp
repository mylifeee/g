#include<iostream>
using namespace std;
const double pi = 3.14159265359;
int volume(int side) {
 return side * side * side;
}
double volume(double radius, double height) {
 return pi * radius * radius * height;
}
double volume(double radius) {
 return (4.0 / 3.0) * pi * radius * radius * radius;
}
int main() {
float side;
 double radius, height;
 cout << "The volume of the cube is: " << volume(5) 
<<"\n";
 cout << "The volume of the cylinder is: " << 
volume(4.0,3.0) << "\n";
 cout << "The volume of the sphere is: " << 
volume(5.23) <<"\n";
 return 0;
}

