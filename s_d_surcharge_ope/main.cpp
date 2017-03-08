#include "point.h"
#include <stdlib.h>

int point::npt = 0;
int point::npt_dyn = 0;

int main() {
	point x;
	x[10] = 42;
	x[12] += x[13];
	point * dp1;
	dp1 = new point(1, 3);
	point a(1, 2);
	cout << a;
	point b(1,1);
	cin >> b;
	cout << b;
	point c(2,2);
	c = a + b;
	cout << c;
	c = a - b;
	cout << c;
	c += a;
	cout << c;
	c -= b;
	cout << c;
	c *= a;
	cout << c;
	c /= a;
	cout << c;
	point * dp2;
	dp2 = new point(1, 1);
	delete dp1;
	delete dp2;
	system("pause");
};