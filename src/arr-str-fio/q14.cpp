#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string sentence = "The quick brown fox jumps over the lazy dog";
	cout << sentence.find("fox") << endl;
	sentence.erase(16, 4);
	cout << sentence << endl;
	return 0;
}