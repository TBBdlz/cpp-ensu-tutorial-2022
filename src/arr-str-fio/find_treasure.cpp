#include <iostream>
#include <fstream>

// open map.txt and find treasure coordinates 'x' symbol
int main()
{
	std::ifstream fio;
	fio.open("data/map.txt");
	int row = 0;
	int col = 0;
	char c;
	while (fio >> c)
	{
		if (c == 'x')
		{
			std::cout << "Treasure found at row " << row << " and column " << col << std::endl;
		}
		col++;
		col %= 10;
		if (col == 0)
			row++;
	}
	return 0;
}