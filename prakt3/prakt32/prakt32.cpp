

#include <iostream>
using namespace std;
#define f1(x, y, z) ((3 * sqrt(sqrt(x * y) - x * x)) / (1 + z * z))
#define w1(x, y) ((x * x * x + sqrt(x * y)) / (x + y * y))

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задача 2 \n";
	double x = 1.26, y = 3.69;
	double z = w1(x, y);
	double b = f1(x, y, z);
	cout << "b = " << b << endl;

}
