#include <iostream>
#include <cmath>

using namespace std;

double f(double alpha, double betta) {
	double temp = (alpha - betta) / 2;
	return -4 * pow(sin(temp), 2) * cos(alpha + betta);
}

int main() {
	setlocale(LC_ALL, "rus");
	double alpha, betta;

	cout << "Введите значение alpha: ";
	cin >> alpha;

	cout << "Введите значение betta: ";
	cin >> betta;

	double y = f(alpha, betta);

	cout << "y = " << y << endl;

	return 0;
}
