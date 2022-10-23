#include <iostream>
#include <cmath>

bool isPrime(int n) {
	bool res = true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			res = false;
			return res;
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	for (int i = 2; i < 100; i++) {
		if (isPrime(i)) {
			std::cout << i << " is prime" << std::endl;
		}
	}
	return 0;
}
