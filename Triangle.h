#pragma once
#include "PlainFigure.h"

class Triangle : public PlainFigure {
	double a, b, c;
protected:
	void Print(std::ostream& out) const override;
public:
	Triangle(double a, double b, double c);
	Triangle(int a, int b, int c);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double GetC() const;
	void SetC(double c);
	double Area() override;
	double Perimeter() override;
	~Triangle() override;
};
