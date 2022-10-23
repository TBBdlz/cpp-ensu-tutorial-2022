#include <iostream>
#include <fstream>

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

// write the first n fibonacci numbers to a data/fibonacci.txt file
int main()
{
	std::ofstream fio;
	fio.open("data/fibonacci.txt");
	int n;
	std::cout << "Enter the number of fibonacci numbers to write to the file: ";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		fio << fibonacci(i) << " ";
	}
	fio << std::endl;
	fio.close();
	return 0;
}
