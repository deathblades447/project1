#include <iostream>
using namespace std;

void swap(int a, int b);
int main() {
	int y = 10, x = 7;

	cout << "before: x = " << x << ",y = "<< y << endl;
	swap(x,y);
	cout << "after: x = " << x << ",y = " << y << endl;

	return 0;

}