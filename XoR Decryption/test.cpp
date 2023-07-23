#include <iostream>
#include <fstream>

using namespace std;

int main() {

ifstream fin;
fin.open("cipher_test.txt", ios::in);

char my_character ;
int number_of_lines = 0;

	while (!fin.eof() ) {

	fin.get(my_character);
	cout << my_character;
		if (my_character == '\n'){
			++number_of_lines;
		}
	}
cout << "NUMBER OF LINES: " << number_of_lines << endl;

return 0;
}
