#include "Shape.h"
#include "Pentagon.h"
#include "Round.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
	double a, b;
	string x, y;
	cin >> a >> x >> b >> y;

	Round round(a, x);
	Pentagon pentagon(b, y);

	cout << round.toString() << endl;
	cout << fixed << setprecision(2) << "Radius:" << round.getRadius() << ", "
		<< "Perimeter:" << round.getPerimeter() << "," << "Color:" << round.getColor() << endl;

	cout << pentagon.toString() << endl;
	cout << fixed << setprecision(2) << "Edge:" << pentagon.getEdge() << ", "
		<< "Perimeter:" << pentagon.getPerimeter() << "," << "Color:" << pentagon.getColor() << endl;

}

/*
請建立圓形Round和五邊形Pentagon繼承Shape

Shape類別的 data fields(private):
string color

Round類別的 data fields(private):
double radius

Pentagon類別的 data fields(private):
double edge

Shape類別中
請設計適當 constructor 和 function:
setColor(string)、getColor(): string

Round類別中請設計適當 constructor 和 function:
setRadius(double)、getRadius():double、getPerimeter():double、toString():string

Pentagon類別中請設計適當 constructor 和 function:
setEdge(double)、getEdge():double、getPerimeter():double、toString():string

圓形周長為 半徑*2*3.1415926
五邊形周長為 邊長*5

輸入說明：
輸入直徑、顏色建立1個Round物件，
輸入邊長、顏色建立一個1個Pentagon物件

輸出說明：
依照範例輸出，分別輸出Round及Pentagon的各項資料

範例輸入：
4 red
1.2 yellow

範例輸出：
Round
Radius:4.00, Perimeter:50.27, Color:red
Pentagon
Edge:1.20, Perimeter:6.00, Color:yellow
*/