#pragma once
#include "PlainFigure.h"

class Circle : public PlainFigure {
	double a;
protected:
	void Print(std::ostream& out) const override;
public:
	Circle(double a);
	double GetA() const;
	void SetA(double a);
	double Area() override;
	double Perimeter() override;
	~Circle() override;
private:
};
