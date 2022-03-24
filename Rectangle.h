#pragma once
#include "PlainFigure.h"

class Rectangle : public PlainFigure {
private:
	double a, b;
protected:
	void Print(std::ostream& out) const override; //overridden method from PlainFigure base class
public:
	Rectangle(double a, double b);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double Perimeter() override; //overridden methods from base class:
	double Area() override;
	~Rectangle() override;
};