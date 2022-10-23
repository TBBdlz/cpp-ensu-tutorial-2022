#include <iostream>

int main(int argc, char const *argv[])
{
	int happy[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 1; i <= 10; i++)
	{
		std::cout << "Happy day " << i << " : " << happy[i] << std::endl;
	}
	return 0;
}