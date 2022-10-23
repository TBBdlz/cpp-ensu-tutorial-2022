#include <iostream>
#include <cmath>

int factorial(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

double exp_taylor(double x, int n) {
	double res = 0;
	for (int i = 0; i <= n; i++) {
		res += pow(x, i) / factorial(i);
	}
	return res;
}

int main(int argc, char const *argv[])
{
	double x;
	std::cout << "enter value x: ";
	std::cin >> x;
	std::cout << "exp(" << x << ") = " << exp_taylor(x, 10) << std::endl;
	return 0;
}