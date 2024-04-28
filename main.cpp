#include <iostream>
using namespace std;

int main() {
	int number_1;
	int number_2;
	cout << "Please, enter the first number:";
	cin >> number_1;
	cout << "Please, enter the second number:";
	cin >> number_2;
	if (number_1 > number_2 || number_1 < number_2) {
		cout << "The numbers are not the same\n";
		if (number_1 > number_2) {
			cout << "Number 1 is bigger";
		}
		else {
			cout << "Number 2 is bigger";
		}
	}
	else
	{
		cout << "The numbers are the same";
	}
	return 0;
}