#pragma once
#include <iostream>

class PlainFigure {
protected: 
	virtual void Print(std::ostream& out) const = 0; //pure virtual method, will be overriden in derived classes
	friend std::ostream& operator<<(std::ostream& os, const PlainFigure& figure);
public:
	virtual double Perimeter() = 0;
	virtual double Area() = 0;
	virtual ~PlainFigure();
};