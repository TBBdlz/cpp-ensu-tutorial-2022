#include <iostream>

// write triangle with * character
void triangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	std::cout << "enter number of rows: ";
	std::cin >> n;
	triangle(n);
	return 0;
}
