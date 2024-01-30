#include <iostream>
#include <fstream>
using namespace std;
int calculateFrequency(string fileName);
int main()
{
	string fileName = "Task3.txt";
	cout << "Total Number of characters: " << calculateFrequency(fileName);
}

int calculateFrequency(string fileName)
{
	int counter = 0;
	char ch,character;
	cout << "Write the character: ";
	cin >> character;
	fstream file;
	file.open(fileName, ios::in);
	while(!file.eof())
	{
		file.get(ch);
		if(ch == toupper(character) || ch == tolower(character))
			counter++;
	}
	file.close();
	return counter;
}
