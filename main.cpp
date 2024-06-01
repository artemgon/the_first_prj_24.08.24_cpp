#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, max_number = 0;
	cin >> a >> b >> c >> d >> e >> f >> g;
	if (a > b && a > c)
	{
		max_number = a;
	}
	else if (b > a && b > c) {
		max_number = b;
	}
	else {
		max_number = c;
	}
	if (max_number > d && max_number < e)
	{
		max_number = d;
	}
	else {
		max_number = e;
	}
	if (max_number < f && f > g)
	{
		max_number = f;
	}
	else {
		max_number = g;
	}
	cout << "The biggest number = " << max_number;
	return 0;
}