#include <iostream>
using namespace std;

int main() {
	int number, a, b, c, d, number_1;
	cout << "Please, enter a 4-digits number you want\n(Number can't start with 0):";
	cin >> number;
	if (number < 1000 || number > 9999) {
		cout << "The number you've entered isn't 4-digits";
	}
	else {
		a = number % 10;
		b = number / 10 % 10;
		c = number / 100 % 10;
		d = number / 1000 % 10;
		number_1 = c * 1000 + d * 100 + a * 10 + b;
		cout << number_1;
	}
	return 0;
}