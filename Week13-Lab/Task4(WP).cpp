#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int num;
	float decimal;
	char character;
	fstream file;
	file.open("Task2.txt",ios::in);
	file >> num;
	file >> decimal;
	file >> character;
	file.close();
	cout << num << endl << decimal << endl << character;
}
