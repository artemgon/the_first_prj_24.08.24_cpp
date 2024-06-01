#include <iostream>
using namespace std;

int main() {
	int distance_from_A_to_B, distance_from_B_to_C, luggage_weight, fuel_tank_volume = 300, all_distance, fuel_consumption, min_fill;
	cout << "Please, enter the distance between point A and point B: ";
	cin >> distance_from_A_to_B;
	cout << "Please, enter the distance between point B and point C: ";
	cin >> distance_from_B_to_C;
	cout << "Please, enter the weight of baggage: ";
	cin >> luggage_weight;
	all_distance = distance_from_A_to_B + distance_from_B_to_C;
	if (luggage_weight < 500) {
		fuel_consumption = 1;
	}
	else if (luggage_weight >= 500 && luggage_weight < 1000) {
		fuel_consumption = 4;
	}
	else if (luggage_weight >= 1000 && luggage_weight < 1500) {
		fuel_consumption = 7;
	}
	else if (luggage_weight >= 1500 && luggage_weight < 2000) {
		fuel_consumption = 9;
	}
	else {
		cout << "The aircraft won't fly";
	}
	min_fill = distance_from_B_to_C * fuel_consumption;
	if (distance_from_A_to_B * fuel_consumption > 300) {
		cout << "The aircraft won't get to point B";
	}
	else if (min_fill > distance_from_A_to_B * fuel_consumption) {
		cout << "The aircraft won't get to point C";
	}
	else if (300 - distance_from_A_to_B * fuel_consumption > min_fill) {
		cout << "The plane doesn't need a filling" << "(minimal filling = " << min_fill << ")";
	}
	else {
		cout << min_fill;
	}
	return 0;
}