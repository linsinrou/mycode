#include "Shape.h"
#include "Pentagon.h"
#include "Round.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void display(Shape& g) {
	Shape* p = &g;
	Round* p1 = dynamic_cast<Round*>(p);
	Pentagon* p2 = dynamic_cast<Pentagon*>(p);
	if (p1 != NULL) {
		cout << p1->toString() << endl;
		cout << fixed << setprecision(2) << "Radius:" << p1->getRadius() << ", "
			<< "Perimeter:" << p1->getPerimeter() << ",";
	}
	if (p2 != NULL) {
		cout << p2->toString() << endl;
		cout << fixed << setprecision(2) << "Edge:" << p2->getEdge() << ", "
			<< "Perimeter:" << p2->getPerimeter() << ",";
	}
	cout << "Color:" << g.getColor() << endl;
}

int main() {
	double a, b;
	string x, y;
	cin >> a >> x >> b >> y;

	Round round(a, x);
	Pentagon pentagon(b, y);

	display(round);
	display(pentagon);
}