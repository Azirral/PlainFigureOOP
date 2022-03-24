#include "PlainFigure.h"
#include <iostream>
std::ostream& operator<<(std::ostream& os, const PlainFigure& figure) {
	figure.Print(os);
	return os;
}
PlainFigure::~PlainFigure() {

}