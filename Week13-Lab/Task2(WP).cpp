#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int num;
	float decimal;
	char character;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a float value: ";
	cin >> decimal;
	cout << "Enter a character: ";
	cin >> character;
	fstream file;
	file.open("Task2.txt",ios::app);
	file << num << endl << decimal << endl << character;
	file.close();
}
