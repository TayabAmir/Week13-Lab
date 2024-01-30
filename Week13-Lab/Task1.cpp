#include <iostream>
#include <fstream>
using namespace std;
int countLines(string fileName);
int main()
{
	string fileName = "Task1.txt";
	cout << "Total Number of lines: " << countLines(fileName);
}
int countLines(string fileName){
	int counter = 0;
	string line;
	fstream file;
	file.open(fileName, ios::in);
	while(!file.eof())
	{
		getline(file,line);
		counter++;
	}
	file.close();
	return counter;
}
