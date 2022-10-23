#include <iostream>

// collaz conjecture
int collaz(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		if (n % 2 == 0)
		{
			return collaz(n / 2);
		}
		else
		{
			return collaz(3 * n + 1);
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	std::cout << "enter number: ";
	std::cin >> n;
	std::cout << "collaz(" << n << ") = " << collaz(n) << std::endl;
	return 0;
}