#include <iostream>
#include <cmath>

using namespace std;


#define f(m) ((3 * m * m * m * m * m + 2) - 2 * m * m * m)
#define z(m) (sqrt(f(m)) / (3 * sqrt(m)))

int main() {
	setlocale(LC_ALL, "rus");
	
	cout << "Задача 1 \n";
	double x, m;

	cout << "Введите значение x: ";
	cin >> x;

	m = sin(3 * x);

	cout << "Значение функции z(m) при m = sin(3x): " << z(m) << endl;
	
}


