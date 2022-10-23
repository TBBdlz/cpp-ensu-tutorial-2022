#include <iostream>
#include <vector>
#include <cmath>

// matrix addition
std::vector<std::vector<double> > add(std::vector<std::vector<double> > m1, std::vector<std::vector<double> > m2)
{
	std::vector<std::vector<double> > res;
	for (int i = 0; i < m1.size(); i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m1[i].size(); j++)
		{
			row.push_back(m1[i][j] + m2[i][j]);
		}
		res.push_back(row);
	}
	return res;
}

// matrix subtraction
std::vector<std::vector<double> > sub(std::vector<std::vector<double> > m1, std::vector<std::vector<double> > m2)
{
	std::vector<std::vector<double> > res;
	for (int i = 0; i < m1.size(); i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m1[i].size(); j++)
		{
			row.push_back(m1[i][j] - m2[i][j]);
		}
		res.push_back(row);
	}
	return res;
}

// matrix determinant
double det(std::vector<std::vector<double> > m)
{
	if (m.size() == 2)
	{
		return m[0][0] * m[1][1] - m[0][1] * m[1][0];
	}
	else
	{
		double sum = 0;
		for (int i = 0; i < m.size(); i++)
		{
			std::vector<std::vector<double> > subm;
			for (int j = 1; j < m.size(); j++)
			{
				std::vector<double> row;
				for (int k = 0; k < m.size(); k++)
				{
					if (k != i)
					{
						row.push_back(m[j][k]);
					}
				}
				subm.push_back(row);
			}
			sum += m[0][i] * det(subm);
		}
		return sum;
	}
}

// matrix multiplication
std::vector<std::vector<double> > mul(std::vector<std::vector<double> > m1, std::vector<std::vector<double> > m2)
{
	std::vector<std::vector<double> > res;
	for (int i = 0; i < m1.size(); i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m2[0].size(); j++)
		{
			double sum = 0;
			for (int k = 0; k < m1[0].size(); k++)
			{
				sum += m1[i][k] * m2[k][j];
			}
			row.push_back(sum);
		}
		res.push_back(row);
	}
	return res;
}

// matrix transpose
std::vector<std::vector<double> > transpose(std::vector<std::vector<double> > m)
{
	std::vector<std::vector<double> > res;
	for (int i = 0; i < m[0].size(); i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m.size(); j++)
		{
			row.push_back(m[j][i]);
		}
		res.push_back(row);
	}
	return res;
}

// matrix inverse
std::vector<std::vector<double> > inverse(std::vector<std::vector<double> > m)
{
	std::vector<std::vector<double> > res;
	double d = det(m);
	for (int i = 0; i < m.size(); i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m.size(); j++)
		{
			std::vector<std::vector<double> > subm;
			for (int k = 0; k < m.size(); k++)
			{
				std::vector<double> row;
				for (int l = 0; l < m.size(); l++)
				{
					if (k != i && l != j)
					{
						row.push_back(m[k][l]);
					}
				}
				if (row.size() > 0)
				{
					subm.push_back(row);
				}
			}
			row.push_back(pow(-1, i + j) * det(subm) / d);
		}
		res.push_back(row);
	}
	return transpose(res);
}

// print matrix
void print(std::vector<std::vector<double> > m)
{
	for (int i = 0; i < m.size(); i++)
	{
		for (int j = 0; j < m[i].size(); j++)
		{
			std::cout << m[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

// solve linear equation AX = B
std::vector<std::vector<double> > solve(std::vector<std::vector<double> > A, std::vector<std::vector<double> > B)
{
	return mul(inverse(A), B);
}

int main(int argc, char const *argv[])
{
	std::vector<std::vector<double> > m1;
	std::vector<std::vector<double> > m2;
	std::cout << "Number of rows: ";
	size_t n;
	std::cin >> n;
	std::cout << "Number of columns: ";
	size_t m;
	std::cin >> m;
	for (int i = 0; i < n; i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m; j++)
		{
			double x;
			std::cout << "enter element " << i << ", " << j << ": ";
			std::cin >> x;
			row.push_back(x);
		}
		m1.push_back(row);
	}
	for (int i = 0; i < n; i++)
	{
		std::vector<double> row;
		for (int j = 0; j < m; j++)
		{
			double x;
			std::cout << "enter element " << i << ", " << j << ": ";
			std::cin >> x;
			row.push_back(x);
		}
		m2.push_back(row);
	}
	std::cout << "m1 + m2 = " << std::endl;
	print(add(m1, m2));
	// std::cout << "m1 - m2 = " << std::endl;
	// print(sub(m1, m2));
	// std::cout << "m1 * m2 = " << std::endl;
	// print(mul(m1, m2));
	// std::cout << "m1^T = " << std::endl;
	// print(transpose(m1));
	// std::cout << "m1^-1 = " << std::endl;
	// print(inverse(m1));
	return 0;
}
