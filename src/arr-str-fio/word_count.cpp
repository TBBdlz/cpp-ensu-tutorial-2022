#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string fname;
	std::cout << "Enter the file name: ";
	std::cin >> fname;
	std::ifstream fio;
	fio.open("data/" + fname);
	int count = 0;
	std::string word;
	while (fio >> word)
	{
		count++;
	}
	fio.close();
	std::cout << "Number of words: " << count << std::endl;
	return 0;
}