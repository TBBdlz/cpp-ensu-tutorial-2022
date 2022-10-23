#include <iostream>
#include <vector>

double mean(std::vector<double> v)
{
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	return sum / v.size();
}

int main(int argc, char const *argv[])
{
	std::vector<double> v;
	std::cout << "Number of elements: ";
	size_t n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		double x;
		std::cout << "enter element " << i << ": ";
		std::cin >> x;
		v.push_back(x);
	}
	std::cout << "mean = " << mean(v) << std::endl;
	return 0;
}