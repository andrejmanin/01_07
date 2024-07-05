#include "classwork.h"

using std::cout;
using std::endl;

int main() {
	/*double width = 20, height = 10;
	MyRectangle rec(width, height);

	rec.SetCursorPosition('r', 5);*/

	/*Dot d_1(5, -1);
	Dot d_2(8, -4);
	dist(&d_1, &d_2);*/

	Drib d1(1, 2), d2(1, 3);
	//cout << d1.get_count() << endl;
	Drib d3 = d1 + d2;
	d3.show();
	d3 = d1 - d2;
	d3.show();
	d3 = d1 * d2;
	d3.show();
	d3 = d1 / d2;
	d3.show();

	return 0;
}