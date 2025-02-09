#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;

	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of y: ";
	cin >> y;
	int temp = x;
	x = y;
	y = temp;

	cout << "The value of x: " << x << endl;
	cout << "The value of y: " << y << endl;

	return 0;
}