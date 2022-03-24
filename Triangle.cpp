#include "Triangle.h"
#include <iostream>
using namespace std;
Triangle::Triangle(double a, double b, double c)
	:a(a), b(b), c(c)
{
	cout << "Constructor Triangle(" << a << "," << b <<"," << c << ")" << endl;
}
Triangle::Triangle(int a, int b, int c)
	:a(a), b(b), c(c)
{
	cout << "Constructor Triangle but with overloading(different parameter type): (" << a << "," << b << "," << c << ")" << endl;
}
double Triangle::GetA() const
{
	return a;
}
double Triangle::GetB() const
{
	return b;
}
double Triangle::GetC() const
{
	return c;
}
void Triangle::SetA(double a) {
	this->a = a;
}
void Triangle::SetB(double b) {
	this->b = b;
}
void Triangle::SetC(double c) {
	this->c = c;
}
double Triangle::Perimeter() {
	return a + b + c;
}
double Triangle::Area() {
	double p = (a + b + c) / 2.0;
	double field = sqrt(p * (p - a) * (p - b) * (p - c));
	return field;
}	
void Triangle::Print(std::ostream& out) const {
	cout << "Figure's name is  Triangle and its parameters are: (" << a << "," << b <<","<< c <<")"<< endl;
}
Triangle::~Triangle() {
	cout << "Destroyed object's name is Triangle." << endl;
}