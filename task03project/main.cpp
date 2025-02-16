#include "logic.h"

int main() {
	int number;
	int pos;

	cout << "inpur ur number and pos: ";
	cin >> number >> pos;

	round_change(number, pos);

	cout << "result number is " << number << endl;

	return 0;

	}