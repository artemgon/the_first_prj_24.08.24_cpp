#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Please, enter any number you want:";
	cin >> number;
	if (number > 0) {
		cout << "Your number is bigger than 0";
	}
	else if (number < 0) {
		cout << "Your number is less than 0";
	}
	else {
		cout << "Your number equals to 0";
	}
	return 0;
}