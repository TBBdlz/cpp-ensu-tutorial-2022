#include <iostream>
#include <vector>
#include <cmath>

double mean(std::vector<double> v)
{
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	return sum / v.size();
}

double stddev(std::vector<double> v)
{
	double m = mean(v);
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += (v[i] - m) * (v[i] - m);
	}
	return sqrt(sum / v.size());
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
	std::cout << "std = " << stddev(v) << std::endl;
	return 0;
}