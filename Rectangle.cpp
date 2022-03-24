#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(double a, double b)
	: a(a), b(b)
{
	cout << "Constructor Rectangle(" << a << "," << b << ")" << endl;
}
double Rectangle::GetA() const
{
	return a;
}
double Rectangle::GetB() const
{
	return b;
}
void Rectangle::SetA(double a) {
	this->a = a;
}
void Rectangle::SetB(double b) {
	this->b = b;
}
double Rectangle::Perimeter() {
	return (a+a+b+b);
}
double Rectangle::Area() {
	return (a * b);
}
void Rectangle::Print(std::ostream& out) const {
	cout << "Figure's name is  Rectangle and its parameters are: (" <<a<< "," <<b<<")" << endl;
}
Rectangle::~Rectangle() {
	cout << "Destroyed object's name is Rectangle." << endl;
}