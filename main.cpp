#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Please, enter any number you want:";
	cin >> number;
	cout << "Your number is ";
	(number % 2 == 0) ? cout << "even" : cout << "odd";
	return 0;
}