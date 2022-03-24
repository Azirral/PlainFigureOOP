#include "Circle.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
Circle::Circle(double a)
	:a(a)
{
	cout << "Constructor Circle(" << a << ")" << endl;
}
double Circle::GetA() const
{
	return a;
}
void Circle::SetA(double a) {
	this->a = a;
}
double Circle::Perimeter() {
	return M_PI * 2.0 * a;
}
double Circle::Area() {
	return M_PI * a * a;
}
void Circle::Print(std::ostream& out) const {
	cout << "Figure's name is Circle and its parameter is: " 
		<< a << endl;
}
Circle::~Circle() {
	cout << "Destroyed figure's name is Circle." << endl;
}