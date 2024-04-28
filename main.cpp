#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Please, enter a 6-digits number(type:int):";
	cin >> number;
	if ((number / 100000 % 10 + number / 10000 % 10 + number / 1000 % 10) == (number / 100 % 10 + number / 10 % 10 + number % 10)) {
		cout << "Your number is happy";
	}
	else if (number > 999999 || number < 100000){
		cout << "The number you've entered isn't 6-digits";
	}
	else {
		cout << "Unfortunately, your number isn't happy";
	}
	return 0;
}