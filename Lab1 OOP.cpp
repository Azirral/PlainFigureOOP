#include <iostream>
#include "PlainFigure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;
int main()
{
	cout << endl;
	Rectangle r1(3.0, 5.0);
	cout << r1;
	cout << "Rectangle's perimeter is: " << r1.Perimeter() << endl;;
	cout << "Rectangle's area is: " << r1.Area() << endl;

	cout << endl;
	Triangle t1(3.0, 4.0, 5.0);
	cout << t1;
	cout << "Triangle's perimeter is: " << t1.Perimeter() << endl;
	cout << "Triangle's area is: " << t1.Area() << endl;

	cout << endl;
	Circle c1(1.0);
	cout << c1;
	cout << "Circle's perimeter is: " << c1.Perimeter() << endl;
	cout << "Circle's area is: " << c1.Area() << endl ;

	cout << endl;
	Rectangle* pr1 = &r1;
	cout << *pr1;
	cout <<"Rectangle's perimeter by pointer: " << pr1->Perimeter()<<endl;
	cout <<"Rectangle's area by pointer: " << pr1->Area()<<endl;

	cout << endl;
	Triangle* pt1 = &t1;
	cout << *pt1;
	cout << "Triangle's perimeter by pointer: " << pt1->Perimeter() << endl;
	cout << "Triangle's area by pointer: " << pt1->Area() << endl;

	cout << endl;
	Circle* pc1 = &c1;
	cout << *pc1;
	cout << "Circle's perimeter by pointer: " << pc1->Perimeter() << endl;
	cout << "Circle's area by pointer: " << pc1->Area() << endl;

	cout << endl;
	PlainFigure* table[3];
	table[0] = &r1;
	table[1] = &t1;
	table[2] = &c1;

	for (int i = 0; i <= 2; i++) {
		cout << endl;
		cout << "Perimeter " << i + 1 << ": " << table[i]->Perimeter() << endl;
		cout << "Area " << i + 1 << ": " << table[i]->Area() << endl;
	}
	cout << endl;
	Triangle t2(3, 4, 5);
	cout << endl;
	system("pause");
}