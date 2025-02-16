#include <iostream>

using namespace std;


void change(int number) {
	
	number *= 10;
}

int main() {
	int x = 100;

	cout << "before x =" << x << endl;
	change(x);
	cout << "after x =" << x << endl;


	return 0;

}
