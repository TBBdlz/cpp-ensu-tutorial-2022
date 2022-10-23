#include <iostream>
#include <fstream>

int main()
{
	std::ofstream fout;
	fout.open("data/weekly_pay.csv");
	for (int i = 0; i < 7; i++)
	{
		double income;
		std::cout << "Enter income: ";
		std::cin >> income;
		double payment;
		std::cout << "Enter payment: ";
		std::cin >> payment;
		fout << income << "," << payment << std::endl;
	}
	fout.close();

	// calculate total balance
	double total_balance = 0;
	std::ifstream fin;
	fin.open("data/weekly_pay.csv");
	for (int i = 0; i < 7; i++)
	{
		double income;
		double payment;
		fin >> income;
		fin.ignore(1, ',');
		fin >> payment;
		fin.ignore(1, ',');
		total_balance += income - payment;
	}
	fin.close();
	std::cout << "Total balance: " << total_balance << std::endl;
	return 0;
}