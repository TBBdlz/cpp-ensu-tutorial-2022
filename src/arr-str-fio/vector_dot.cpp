#include <iostream>
#include <vector>

double dot(std::vector<double> v1, std::vector<double> v2)
{
	double sum = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		sum += v1[i] * v2[i];
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	std::vector<double> v1;
	std::vector<double> v2;
	std::cout << "Number of elements: ";
	size_t n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		double x;
		std::cout << "enter element " << i << " of v1: ";
		std::cin >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		double x;
		std::cout << "enter element " << i << " of v2: ";
		std::cin >> x;
		v2.push_back(x);
	}
	std::cout << "dot product = " << dot(v1, v2) << std::endl;
	return 0;
}