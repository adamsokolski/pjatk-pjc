#include <iostream>
using namespace std;

double linear(double a, double b, double x) {
	return a * x + b;
}


int main() {

	// 1

	//cout << "Hello, World!" << endl;

	//int m, n;
	//cin >> m >> n;
	//cout << m << " " << n << endl;



	// 2

	double c = 2, z = 3;
	double result = linear(c, 5, z);
	cout << "Result = " << result << endl;

	return 0;
}