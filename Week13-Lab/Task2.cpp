#include <iostream>
#include <fstream>
using namespace std;
int countLines(string fileName);
int main()
{
	string fileName = "Task1.txt";
	cout << "Total Number of characters: " << countLines(fileName);
}
int countLines(string fileName){
	int counter = 0;
	char ch;
	fstream file;
	file.open(fileName, ios::in);
	while(!file.eof())
	{
		file.get(ch);
		if(ch == '\n')
			continue;
		counter++;
	}
	file.close();
	return counter - 1;
}
